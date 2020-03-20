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


# :heavy_check_mark: verify/binary_indexed_tree.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/binary_indexed_tree.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-20 18:36:50+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_add_range_sum">https://judge.yosupo.jp/problem/point_add_range_sum</a>


## Depends on

* :heavy_check_mark: <a href="../../library/binary_indexed_tree.cpp.html">binary_indexed_tree.cpp</a>
* :heavy_check_mark: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../template.cpp"
#include "../binary_indexed_tree.cpp"

template <class T>
struct Plus {
  using value_type = T;

  T operator()(const T& l, const T& r) const {
    return l + r;
  }
  const T ide{};
};

int main() {
  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<Plus<ll>> bit(n);

  rep(i, n) {
    ll a;
    cin >> a;
    bit.add(i, a);
  }

  rep(i, q) {
    ll t, a, b;
    cin >> t >> a >> b;
    if (t == 0) {
      bit.add(a, b);
    } else {
      cout << bit.sum(b) - bit.sum(a) << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/binary_indexed_tree.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#line 2 "template.cpp"

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
#line 3 "binary_indexed_tree.cpp"

template<typename Monoid>
struct BinaryIndexedTree {
  using T = typename Monoid::value_type;
  // 1-indexed
  ll n;
  vector<T> tree;
  const Monoid ope;

  BinaryIndexedTree(ll n) : n(n), ope(Monoid()) {
    tree.assign(n+1, ope.ide);
  }

  void add(ll p, T a) {
    for (ll x = p+1; x <= n; x += x&-x) {
      tree[x] = ope(tree[x], a);
    }
  }

  // sum [0, r)
  T sum(ll r) const {
    T sum = ope.ide;
    for (ll x = r; x > 0; x -= x&-x) {
      sum = ope(sum, tree[x]);
    }
    return sum;
  }

  /*
  // bit[1] + bit[2] + ... + bit[x] >= w;
  ll lower_bound(T w) const {
    if (w <= 0) return 0;
    ll x = 0, r = 1;
    while (r < n) r <<= 1;
    for (ll k = r; k > 0; k >>= 1){
      if(x+k <= n && tree[x+k] < w){
        w -= tree[x+k];
        x += k;
      }
    }
    return x+1;
  }
  */
};
#line 5 "verify/binary_indexed_tree.test.cpp"

template <class T>
struct Plus {
  using value_type = T;

  T operator()(const T& l, const T& r) const {
    return l + r;
  }
  const T ide{};
};

int main() {
  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<Plus<ll>> bit(n);

  rep(i, n) {
    ll a;
    cin >> a;
    bit.add(i, a);
  }

  rep(i, q) {
    ll t, a, b;
    cin >> t >> a >> b;
    if (t == 0) {
      bit.add(a, b);
    } else {
      cout << bit.sum(b) - bit.sum(a) << endl;
    }
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

