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


# :heavy_check_mark: test/segment_tree.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/segment_tree.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 22:28:59+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_set_range_composite">https://judge.yosupo.jp/problem/point_set_range_composite</a>


## Depends on

* :heavy_check_mark: <a href="../../library/modint.cpp.html">modint.cpp</a>
* :heavy_check_mark: <a href="../../library/segment_tree.cpp.html">segment_tree.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

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

#include "../segment_tree.cpp"
#include "../modint.cpp"

using modint = ModInt<998244353>;

struct F{
  modint a, b;
  F(ll a, ll b) : a(a), b(b) {};
  F(modint a, modint b) : a(a), b(b) {};
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  SegmentTree<F> seg(n, F(1, 0), [](F l, F r){ return F(l.a*r.a, l.b*r.a+r.b); });
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    seg.change(i, F(a, b));
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, c, d;
      cin >> p >> c >> d;
      seg.change(p, F(c, d));
    } else {
      ll l, r, x;
      cin >> l >> r >> x;
      F f = seg.query(l, r);
      cout << f.a*modint(x)+f.b << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/segment_tree.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

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

#line 1 "test/../segment_tree.cpp"
template<class T>
struct SegmentTree {
  ll n;
  vector<T> data;
  T identity;
  using F = function<T(T, T)>;
  F operation;

  SegmentTree(ll n_, T identity, F operation) : n(n_), identity(identity), operation(operation) {
    n = 1;
    while (n < n_) n *= 2;
    data.assign(2*n-1, identity);
  }

  void change(ll i, T x) {
    i += n-1;
    data[i] = x;
    while (i > 0) {
      i = (i-1)/2;
      data[i] = operation(data[i*2+1], data[i*2+2]);
    }
  }

  T query(ll a, ll b, ll k, ll l, ll r) {
    if (r <= a or b <= l) return identity;
    if (a <= l and r <= b) {
      return data[k];
    } else {
      T c1 = query(a, b, 2*k+1, l, (l+r)/2);
      T c2 = query(a, b, 2*k+2, (l+r)/2, r);
      return operation(c1, c2);
    }
  }

  T query(ll a, ll b) {
    return query(a, b, 0, 0, n);
  }

  T operator[](ll i) {
    return data[i+n-1];
  }
};
#line 1 "test/../modint.cpp"
template <ll Mod>
struct ModInt {
  ll n;
  ModInt(const ll x = 0) : n(x) { while (n < 0) n += Mod; n %= Mod; }
  ModInt operator+(const ModInt r) const { return ModInt(*this) += r; }
  ModInt operator-(const ModInt r) const { return ModInt(*this) -= r; }
  ModInt operator*(const ModInt r) const { return ModInt(*this) *= r; }
  ModInt operator/(const ModInt r) const { return ModInt(*this) /= r; }
  ModInt &operator+=(const ModInt r) { n += r.n; if (n >= Mod) n -= Mod; return *this; }
  ModInt &operator-=(const ModInt r) { if (n < r.n) n += Mod; n -= r.n; return *this; }
  ModInt &operator*=(const ModInt r) { n = n * r.n % Mod; return *this; }
  ModInt &operator/=(const ModInt r) { return *this *= r.inv(); }
  ModInt pow(ll x) const { ModInt<Mod> ret(1), tmp(*this); while (x) { if (x&1) ret *= tmp; tmp *= tmp; x >>= 1; } return ret; }
  ModInt inv() const { return pow(Mod-2); }
  friend ostream& operator<<(ostream& os, const ModInt& obj) { return os << obj.n; }
  friend istream& operator>>(istream& is, ModInt& obj) { ll t; is >> t; obj = ModInt(t); return is; }
};
constexpr ll mod = 1000000007;
using mint = ModInt<mod>;
mint operator"" _mi(unsigned long long n) { return mint(n); }
#line 16 "test/segment_tree.test.cpp"

using modint = ModInt<998244353>;

struct F{
  modint a, b;
  F(ll a, ll b) : a(a), b(b) {};
  F(modint a, modint b) : a(a), b(b) {};
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  SegmentTree<F> seg(n, F(1, 0), [](F l, F r){ return F(l.a*r.a, l.b*r.a+r.b); });
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    seg.change(i, F(a, b));
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, c, d;
      cin >> p >> c >> d;
      seg.change(p, F(c, d));
    } else {
      ll l, r, x;
      cin >> l >> r >> x;
      F f = seg.query(l, r);
      cout << f.a*modint(x)+f.b << endl;
    }
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

