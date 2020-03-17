#define  PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516"

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

  while (1) {
    ll n, k;
    cin >> n >> k;
    if (n == 0 and k == 0) return 0;
    vl a(n);
    rep(i, n) {
      cin >> a[i];
    }

    CumulativeSum<ll> cs(a);
    cs.build();
    ll ans = -1e4;
    for (ll i = 0; i+k-1 < n; i++) {
      cmax(ans, cs.sum(i, i+k-1));
    }

    cout << ans << endl;
  }
}
