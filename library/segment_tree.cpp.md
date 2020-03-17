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


# :warning: segment_tree.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/segment_tree.cpp">View this file on GitHub</a>
    - Last commit date: 2020-02-27 22:34:37+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  auto mini = [](ll l, ll r) { return min(l, r); };
  SegmentTree<ll> st(n, (1LL<<31)-1, mini);

  rep(i, q) {
    ll c, x, y;
    cin >> c >> x >> y;
    if (c == 0) {
      st.change(x, y);
    } else {
      cout << st.query(x, y+1) << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "segment_tree.cpp"
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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  auto mini = [](ll l, ll r) { return min(l, r); };
  SegmentTree<ll> st(n, (1LL<<31)-1, mini);

  rep(i, q) {
    ll c, x, y;
    cin >> c >> x >> y;
    if (c == 0) {
      st.change(x, y);
    } else {
      cout << st.query(x, y+1) << endl;
    }
  }
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

