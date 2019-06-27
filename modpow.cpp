// verified https://onlinejudge.u-aizu.ac.jp/solutions/problem/NTL_1_B/review/3692017/toof/C++14

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> void cmax(T& a, U b) { if (a<b) a = b; }
template<class T, class U> void cmin(T& a, U b) { if (a>b) a = b; }

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

  int m, n;
  cin >> m >> n;
  cout << modpow(m, n, 1e9+7) << endl;
}
