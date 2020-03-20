---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :heavy_check_mark: verify/DPL_5_B.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/DPL_5_B.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-20 19:45:02+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_B">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_B</a>


## Depends on

* :heavy_check_mark: <a href="../../library/combination.cpp.html">combination.cpp</a>
* :heavy_check_mark: <a href="../../library/modint.cpp.html">modint.cpp</a>
* :heavy_check_mark: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_B"

#include "../template.cpp"
#include "../modint.cpp"
#include "../combination.cpp"

int main() {
  ll n, k;
  cin >> n >> k;
  Combination<mint> c(max(n, k));
  cout << c.P(k, n) << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/DPL_5_B.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_B"

#line 2 "template.cpp"

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep3(i, l, r) for(ll i = l; i < r; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
#define per3(i, l, r) for(ll i = r-1; i >= l; i--)
#define all(v) begin(v), end(v)
template<class T, class U>
inline void cmax(T& a, U b) { if (a < b) a = b; }
template<class T, class U>
inline void cmin(T& a, U b) { if (a > b) a = b; }

struct IoSetup {
  IoSetup() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
  }
} io_setup;
#line 3 "modint.cpp"

template <ll Mod>
struct ModInt {
  ll n;

  ModInt(const ll x = 0) : n(x) {
    while (n < 0) n += Mod;
    n %= Mod;
  }

  inline constexpr ModInt operator+(const ModInt r) const noexcept { return ModInt(*this) += r; }
  inline constexpr ModInt operator-(const ModInt r) const noexcept { return ModInt(*this) -= r; }
  inline constexpr ModInt operator*(const ModInt r) const noexcept { return ModInt(*this) *= r; }
  inline constexpr ModInt operator/(const ModInt r) const noexcept { return ModInt(*this) /= r; }
  inline constexpr ModInt &operator+=(const ModInt r) noexcept {
    n += r.n;
    if (n >= Mod) n -= Mod;
    return *this;
  }
  inline constexpr ModInt &operator-=(const ModInt r) noexcept {
    if (n < r.n) n += Mod;
    n -= r.n;
    return *this;
  }
  inline constexpr ModInt &operator*=(const ModInt r) noexcept {
    n = n * r.n % Mod;
    return *this;
  }
  inline constexpr ModInt &operator/=(const ModInt r) noexcept { return *this *= r.inv(); }

  inline constexpr ModInt pow(ll x) const noexcept {
    ModInt<Mod> ret(1), tmp(*this);
    while (x) {
      if (x&1) ret *= tmp;
      tmp *= tmp;
      x >>= 1;
    }
    return ret;
  }
  inline constexpr ModInt inv() const noexcept { return pow(Mod-2); }

  friend ostream& operator<<(ostream& os, const ModInt& obj) { return os << obj.n; }
  friend istream& operator>>(istream& is, ModInt& obj) {
    ll t;
    is >> t;
    obj = ModInt(t);
    return is;
  }
};

constexpr ll mod = 1000000007;
using mint = ModInt<mod>;
mint operator"" _mi(unsigned long long n) { return mint(n); }
#line 3 "combination.cpp"

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
#line 6 "verify/DPL_5_B.test.cpp"

int main() {
  ll n, k;
  cin >> n >> k;
  Combination<mint> c(max(n, k));
  cout << c.P(k, n) << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

