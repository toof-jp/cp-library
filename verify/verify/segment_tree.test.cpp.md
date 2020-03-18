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


# :x: verify/segment_tree.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/segment_tree.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-19 04:19:57+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_set_range_composite">https://judge.yosupo.jp/problem/point_set_range_composite</a>


## Depends on

* :x: <a href="../../library/modint.cpp.html">modint.cpp</a>
* :x: <a href="../../library/segment_tree.cpp.html">segment_tree.cpp</a>
* :question: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#include "../template.cpp"
#include "../segment_tree.cpp"
#include "../modint.cpp"

using modint = ModInt<998244353>;

struct f{
  modint a, b;
  f(ll a = 1, ll b = 0) : a(a), b(b) {};
  f(modint a, modint b) : a(a), b(b) {};
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  SegmentTree<f> seg(n, f(), [](f l, f r){ return f(r.a*l.a, r.a*l.b+r.b); });

  vector<f> vec(n);
  rep(i, n) {
    cin >> vec[i].a >> vec[i].b;
  }

  seg.build(vec);

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, c, d;
      cin >> p >> c >> d;
      seg.change(p, f(c, d));
    } else {
      ll l, r, x;
      cin >> l >> r >> x;
      f e = seg.query(l, r);
      cout << e.a*modint(x)+e.b << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/segment_tree.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#line 1 "verify/../template.cpp"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
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
#line 2 "verify/../template.cpp"
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
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
#line 3 "verify/../segment_tree.cpp"

template<class T>
struct SegmentTree {
  ll n;
  vector<T> tree;
  T identity;
  using F = function<T(T, T)>;
  F operation;

  SegmentTree(ll n_, T identity, F operation) : n(n_), identity(identity), operation(operation) {
    n = 1;
    while (n < n_) n *= 2;
    tree.assign(2*n, identity);
  }

  void build(const vector<T> &v) {
    rep(i, v.size()) {
      tree[i+n] = v[i];
    }
    for (ll i = n-1; i >= 0; i--) tree[i] = operation(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, T x) {
    p += n;
    tree[p] = x;
    while (p > 1) {
      p /= 2;
      tree[p] = operation(tree[p*2], tree[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = identity;
    T r_res = identity;
    while (l < r) {
      if (l&1) l_res = operation(l_res, tree[l++]);
      l /= 2;
      if (r&1) r_res = operation(tree[--r], r_res);
      r /= 2;
    }
    return operation(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};
#line 2 "verify/../template.cpp"
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
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
#line 3 "verify/../modint.cpp"

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

struct f{
  modint a, b;
  f(ll a = 1, ll b = 0) : a(a), b(b) {};
  f(modint a, modint b) : a(a), b(b) {};
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  SegmentTree<f> seg(n, f(), [](f l, f r){ return f(r.a*l.a, r.a*l.b+r.b); });

  vector<f> vec(n);
  rep(i, n) {
    cin >> vec[i].a >> vec[i].b;
  }

  seg.build(vec);

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, c, d;
      cin >> p >> c >> d;
      seg.change(p, f(c, d));
    } else {
      ll l, r, x;
      cin >> l >> r >> x;
      f e = seg.query(l, r);
      cout << e.a*modint(x)+e.b << endl;
    }
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

