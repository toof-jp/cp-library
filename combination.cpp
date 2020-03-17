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
    if (n < k or k < 0) return T(0);
    return fact[n] * inv_fact[n-k];
  }

  T C(ll n, ll k) const {
    if (n < k or k < 0) return T(0);
    return fact[n] * inv_fact[n-k] * inv_fact[k];
  }

  T H(ll n, ll k) const {
    if (n < 0 or k < 0) return T(0);
    if (n == 0 and k == 0) return T(1);
    return C(n+k-1, n-1);
  }
};
