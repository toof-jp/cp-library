#define  PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516"

#include "../template.cpp"
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
