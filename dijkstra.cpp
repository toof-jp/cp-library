//
// https://beta.atcoder.jp/contests/abc035/tasks/abc035_d
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)

int INF = 1<<30;
const int maxn = 1e5+10;
int n;

// gurahu ha rinsetu gyouretu de watase
vector<int> dijkstra(int s, vector<vector<pii>> G) {
  priority_queue<pii, vector<pii>, greater<pii>> que;
  vector<int> d(n, INF);
  d[s] = 0;
  que.push(pii(0, s));

  while(!que.empty()) {
    pii p = que.top(); que.pop();
    int v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pii(d[e.first], e.first));
      }
    }
  }
  return d;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, t;
  cin >> n >> m >> t;
  int A[maxn];
  rep(i, n) cin >> A[i];
  vector<vector<pii>> G1(maxn);
  vector<vector<pii>> G2(maxn);
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G1[a].push_back(pii(b, c));
    G2[b].push_back(pii(a, c));
  }

  auto d1 = dijkstra(0, G1);
  auto d2 = dijkstra(0, G2);
  ll ans = 0;
  rep(i, n) {
    ans = max(ans, (ll)A[i] * (t-d1[i]-d2[i]));
  }
  cout << ans << endl;
}
