//
// https://beta.atcoder.jp/contests/abc052/tasks/arc067_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)

map<ll, ll> PrimeFactorization(ll n) {
  map<ll, ll> m;
  for (int i = 2; i*i <= n; i++) {
    while (n%i == 0) {
      m[i]++;
      n /= i;
    }
  }
  if (n != 1) m[n]++;
  return m;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<ll, ll> m;
  rep(i, n) {
    for (auto&& j : PrimeFactorization(i+1)) {
      m[j.first] += j.second;
    }
  }

  ll ans = 1;
  const int MOD = (int)1e9+7;
  for (auto&& i : m) {
    ans = ans*(i.second+1)%MOD;
  }

  cout << ans << endl;
}
