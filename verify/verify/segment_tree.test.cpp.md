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


# :heavy_check_mark: verify/segment_tree.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/segment_tree.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-21 02:30:16+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_set_range_composite">https://judge.yosupo.jp/problem/point_set_range_composite</a>


## Depends on

* :heavy_check_mark: <a href="../../library/modint.cpp.html">modint.cpp</a>
* :heavy_check_mark: <a href="../../library/segment_tree.cpp.html">segment_tree.cpp</a>
* :heavy_check_mark: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#include "../template.cpp"
#include "../segment_tree.cpp"
#include "../modint.cpp"

using modint = ModInt<998244353>;

struct Func{
  modint a, b;
  Func(ll a = 1, ll b = 0) : a(a), b(b) {};
  Func(modint a, modint b) : a(a), b(b) {};
};

struct F{
  using value_type = Func;

  Func operator()(const Func& l, const Func& r) const {
    return Func(r.a*l.a, r.a*l.b+r.b);
  }
  const Func ide = Func();
};

int main() {
  ll n, q;
  cin >> n >> q;
  SegmentTree<F> seg(n);

  vector<Func> vec(n);
  rep(i, n) {
    cin >> vec[i].a >> vec[i].b;
  }

  seg.build(vec);

  rep(i, q) {
    ll t, a, b, c;
    cin >> t >> a >> b >> c;
    if (t == 0) {
      seg.change(a, Func(b, c));
    } else {
      Func e = seg.query(a, b);
      cout << e.a*modint(c)+e.b << '\n';
    }
  }
  cout << flush;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/segment_tree.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#line 2 "template.cpp"

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define rep3(i, l, r) for(ll i = l; i < (ll)r; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
#define per3(i, l, r) for(ll i = r-1; i >= (ll)l; i--)
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
#line 3 "segment_tree.cpp"

template<class Monoid>
struct SegmentTree {
  using T = typename Monoid::value_type;

  ll n;
  vector<T> tree;
  const Monoid ope;

  SegmentTree(ll n) : n(n) {
    tree.assign(2*n, ope.ide);
  }

  void build(const vector<T>& v) {
    rep(i, v.size())
      tree[i+n] = v[i];
    per(i, n)
      tree[i] = ope(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, const T& x) {
    p += n;
    tree[p] = x;
    while (p >>= 1)
      tree[p] = ope(tree[p*2], tree[p*2+1]);
  }

  T query(ll l, ll r) const {
    T l_res{};
    T r_res{};
    for (l += n, r+= n; l < r; l >>= 1, r >>= 1) {
      if (l&1) l_res = ope(l_res, tree[l++]);
      if (r&1) r_res = ope(tree[--r], r_res);
    }
    return ope(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};
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
#line 6 "verify/segment_tree.test.cpp"

using modint = ModInt<998244353>;

struct Func{
  modint a, b;
  Func(ll a = 1, ll b = 0) : a(a), b(b) {};
  Func(modint a, modint b) : a(a), b(b) {};
};

struct F{
  using value_type = Func;

  Func operator()(const Func& l, const Func& r) const {
    return Func(r.a*l.a, r.a*l.b+r.b);
  }
  const Func ide = Func();
};

int main() {
  ll n, q;
  cin >> n >> q;
  SegmentTree<F> seg(n);

  vector<Func> vec(n);
  rep(i, n) {
    cin >> vec[i].a >> vec[i].b;
  }

  seg.build(vec);

  rep(i, q) {
    ll t, a, b, c;
    cin >> t >> a >> b >> c;
    if (t == 0) {
      seg.change(a, Func(b, c));
    } else {
      Func e = seg.query(a, b);
      cout << e.a*modint(c)+e.b << '\n';
    }
  }
  cout << flush;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

