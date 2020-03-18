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
    - Last commit date: 2020-03-19 02:27:33+09:00




## Verified with

* :heavy_check_mark: <a href="../verify/test/segment_tree.test.cpp.html">test/segment_tree.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "segment_tree.cpp"
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

```
{% endraw %}

<a href="../index.html">Back to top page</a>

