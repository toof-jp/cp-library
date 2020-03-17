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


# :x: test/binary_indexed_tree.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/binary_indexed_tree.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 20:07:52+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_add_range_sum">https://judge.yosupo.jp/problem/point_add_range_sum</a>


## Depends on

* :x: <a href="../../library/binary_indexed_tree.cpp.html">binary_indexed_tree.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

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

#include "../binary_indexed_tree.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<ll> bit(n);
  rep(i, n) {
    ll a;
    cin >> a;
    bit.add0(i, a);
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, x;
      cin >> p >> x;
      bit.add(p, x);
    } else {
      ll l, r;
      cin >> l >> r;
      cout << bit.sum_between0(l, r-1) << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/binary_indexed_tree.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

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

#line 1 "test/../binary_indexed_tree.cpp"
template<typename T>
struct BinaryIndexedTree {
  // 1-indexed
  int n;
  vector<T> bit;

  BinaryIndexedTree(int n_, T d = 0):n(n_), bit(n_+1, d) {}

  void add(int i, T a) {
    if (i == 0) return;
    for (int x = i; x <= n; x += x&-x) {
      bit[x] += a;
    }
  }

  T sum(int i) {
    T s = bit[0];
    for (int x = i; x > 0; x -= x&-x) {
      s += bit[x];
    }
    return s;
  }

  T sum_between(int l, int r) {
    return sum(r) - sum(l-1);
  }

  // bit[1] + bit[2] + ... + bit[x] >= w;
  int lower_bound(T w){
    if (w <= 0) return 0;
    int x = 0, r = 1;
    while (r < n) r <<= 1;
    for (int k = r; k > 0; k >>= 1){
      if(x+k <= n && bit[x+k] < w){
        w -= bit[x+k];
        x += k;
      }
    }
    return x+1;
  }

  void add0(int i, T a) {
    add(i+1, a);
  }

  T sum0(int i) {
    return sum(i+1);
  }

  T sum_between0(int l, int r) {
    return sum(r+1) - sum(l);
  }
};
#line 15 "test/binary_indexed_tree.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<ll> bit(n);
  rep(i, n) {
    ll a;
    cin >> a;
    bit.add0(i, a);
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, x;
      cin >> p >> x;
      bit.add(p, x);
    } else {
      ll l, r;
      cin >> l >> r;
      cout << bit.sum_between0(l, r-1) << endl;
    }
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

