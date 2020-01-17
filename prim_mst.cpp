// 壊れてる
// 未完成
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define rep(i, n) for(ll i = 0;i < n;i++)

const int INF = 1<<30;

ll Prim(ll V, vector<vector<int>> graph) {
  ll res = 0;
  vector<bool> used(V);
  vector<ll> mincost(V);
  rep(i, V) {
    mincost[i] = INF;
  }
  mincost[0] = 0;

  while (true) {
    ll v = -1;
    rep(u, V) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
    }

    if (v == -1) break;
    used[v] = true;
    res += mincost[v];

    rep(u, V) {
      mincost[u] = min(mincost[u], (ll)graph[v][u]);
    }
  }
  return res;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pii> x_list;
  vector<pii> y_list;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    x_list.push_back(pii(x, i));
    y_list.push_back(pii(y, i));
  }
  sort(x_list.begin(), x_list.end());
  sort(y_list.begin(), y_list.end());

  vector<vector<int>> graph(n, vector<int>(n, INF));
  rep(i, n-1) {
    pii a = x_list[i];
    pii b = x_list[i+1];
    graph[a.second][b.second] = graph[b.second][a.second]
    = min(graph[a.second][b.second], abs(a.first-b.first));

    pii c = y_list[i];
    pii d = y_list[i+1];
    graph[c.second][d.second] = graph[d.second][c.second]
    = min(graph[c.second][d.second], abs(c.first-d.first));
  }

  //rep(i, n) {
  //  rep(j, n) cerr << graph[i][j] << " ";
  //  cerr << endl;
  //}

  cout << Prim(n, graph);
}
