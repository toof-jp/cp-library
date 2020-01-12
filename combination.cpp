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

// T modint
template<class T>
struct Combination {
  vector<T> fact, inv_fact;
  Combination(ll n) : fact(n+1), inv_fact(n+1) {
    fact[0] = T(1);
    for (ll i = 1; i <= n; i++) fact[i] = fact[i-1] * static_cast<T>(i);
    inv_fact[n] = fact[n].inv();
    for (ll i = n; i > 0; i--) inv_fact[i-1] = inv_fact[i] * static_cast<T>(i);
  }

  T P(ll n, ll k) const {
    return fact[n] * inv_fact[n-k];
  }

  T C(ll n, ll k) const {
    return fact[n] * inv_fact[n-k] * inv_fact[k];
  }

  T H(ll n, ll k) const {
    return C(n+k-1, n-1);
  }
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

}
