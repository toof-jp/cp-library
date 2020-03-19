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


# :heavy_check_mark: segment_tree.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/segment_tree.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-19 21:48:10+09:00




## Depends on

* :heavy_check_mark: <a href="template.cpp.html">template.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/segment_tree.test.cpp.html">verify/segment_tree.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once
#include "template.cpp"

template<class Monoid>
struct SegmentTree {
  using T = typename Monoid::value_type;

  ll n;
  vector<T> tree;
  const Monoid ope;

  SegmentTree(ll n_) : n(n_) {
    n = 1;
    while (n < n_) n *= 2;
    tree.assign(2*n, ope.ide);
  }

  void build(const vector<T>& v) {
    rep(i, v.size()) {
      tree[i+n] = v[i];
    }
    for (ll i = n-1; i >= 0; i--) tree[i] = ope(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, const T& x) {
    p += n;
    tree[p] = x;
    while (p > 1) {
      p /= 2;
      tree[p] = ope(tree[p*2], tree[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = ope.ide;
    T r_res = ope.ide;
    while (l < r) {
      if (l&1) l_res = ope(l_res, tree[l++]);
      l /= 2;
      if (r&1) r_res = ope(tree[--r], r_res);
      r /= 2;
    }
    return ope(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
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
#line 3 "segment_tree.cpp"

template<class Monoid>
struct SegmentTree {
  using T = typename Monoid::value_type;

  ll n;
  vector<T> tree;
  const Monoid ope;

  SegmentTree(ll n_) : n(n_) {
    n = 1;
    while (n < n_) n *= 2;
    tree.assign(2*n, ope.ide);
  }

  void build(const vector<T>& v) {
    rep(i, v.size()) {
      tree[i+n] = v[i];
    }
    for (ll i = n-1; i >= 0; i--) tree[i] = ope(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, const T& x) {
    p += n;
    tree[p] = x;
    while (p > 1) {
      p /= 2;
      tree[p] = ope(tree[p*2], tree[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = ope.ide;
    T r_res = ope.ide;
    while (l < r) {
      if (l&1) l_res = ope(l_res, tree[l++]);
      l /= 2;
      if (r&1) r_res = ope(tree[--r], r_res);
      r /= 2;
    }
    return ope(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};

```
{% endraw %}

<a href="../index.html">Back to top page</a>

