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


# :heavy_check_mark: binary_indexed_tree.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/binary_indexed_tree.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-21 01:16:37+09:00




## Depends on

* :heavy_check_mark: <a href="template.cpp.html">template.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/binary_indexed_tree.test.cpp.html">verify/binary_indexed_tree.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once
#include "template.cpp"

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

```
{% endraw %}

<a href="../index.html">Back to top page</a>

