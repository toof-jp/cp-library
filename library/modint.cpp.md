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
<script type="text/javascript" src="../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../assets/css/copy-button.css" />


# :heavy_check_mark: modint.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/modint.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-21 01:16:37+09:00




## Depends on

* :heavy_check_mark: <a href="template.cpp.html">template.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/DPL_5_B.test.cpp.html">verify/DPL_5_B.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_D.test.cpp.html">verify/DPL_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_E.test.cpp.html">verify/DPL_5_E.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/segment_tree.test.cpp.html">verify/segment_tree.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once
#include "template.cpp"

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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
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
    cout << fixed << setprecision(15);
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

```
{% endraw %}

<a href="../index.html">Back to top page</a>

