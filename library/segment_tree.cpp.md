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
    - Last commit date: 2020-03-17 22:28:59+09:00




## Verified with

* :heavy_check_mark: <a href="../verify/test/segment_tree.test.cpp.html">test/segment_tree.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "segment_tree.cpp"
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

```
{% endraw %}

<a href="../index.html">Back to top page</a>

