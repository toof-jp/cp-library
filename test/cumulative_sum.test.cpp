#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#include "../cumulative_sum.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  while (true) {
    ll n;
    cin >> n;
    if (n == 0) break;

    vector<ll> v(n);
    rep(i, n) {
      cin >> v[i];
    }

    CumulativeSum<ll> c(v);
    c.build();

    ll ans = -1e10;
    rep(i, n) {
      for (ll j = i; j < n; j++) {
        cmax(ans, c.sum(i, j));
      }
    }
    cout << ans << endl;
  }
}
