// verified https://atcoder.jp/contests/abc129/submissions/6133229

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class t, class u> bool cmax(t& a, u b) { if (a<b) {a = b; return true;} else return false; }
template<class t, class u> bool cmin(t& a, u b) { if (a>b) {a = b; return true;} else return false; }

ll modpow(ll a, ll n, ll p) {
  ll res = 1;
  while (n) {
    if (n&1) res = res * a % p;
    a = a * a % p;
    n >>= 1;
  }
  return res;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  string l;
  cin >> l;
  int n = l.size();

  const ll mod = 1e9+7;
  ll ans = 0;
  int bit_cnt = 0;

  rep(i, n) {
    if (l[i] == '1') {
      ans = (ans + modpow(2, bit_cnt, mod)*modpow(3, n-(i+1), mod)) % mod;
      bit_cnt++;
    }
  }
  ans = (ans + modpow(2, bit_cnt, mod)) % mod;
  cout << ans << endl;
}
