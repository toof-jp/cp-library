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


# :x: test/cumulative_sum.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/cumulative_sum.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 19:06:53+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022</a>


## Depends on

* :x: <a href="../../library/cumulative_sum.cpp.html">cumulative_sum.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022"

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

#include "../cumulative_sum.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  while (true) {
    ll n;
    cin >> n;
    if (n == 0) break;

    vector<ll> v(n);
    rep(i, n) {
      cin >> v[i];
    }

    CumulativeSum<ll> c(v);
    c.build();

    ll ans = -1e10;
    rep(i, n) {
      for (ll j = i; j < n; j++) {
        cmax(ans, c.sum(i, j));
      }
    }
    cout << ans << endl;
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/cumulative_sum.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022"

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

#line 1 "test/../cumulative_sum.cpp"
template<class T>
struct CumulativeSum {
  vector<T> v;

  CumulativeSum(size_t n) : v(n+1) {};
  CumulativeSum(vector<T> v_) {
    v.resize(v_.size()+1);
    for (size_t i = 0; i < v_.size(); i++) v[i+1] = v_[i];
  };

  void add(size_t i, T x) {
    v[i+1] += x;
  }

  // O(N)
  void build() {
    for (size_t i = 0; i < v.size()-1; i++)
      v[i+1] += v[i];
  }

  // O(1) sum [l, r]
  T sum(size_t l, size_t r) const {
    return l == 0 ? v[r+1] : v[r+1]-v[l];
  }

  // O(1) sum [0, r]
  T sum(size_t r) const {
    return v[r+1];
  }

  T& operator[](size_t i) {
    return v[i];
  }

  const T& operator[](size_t i) const {
    return v[i];
  }
};
#line 15 "test/cumulative_sum.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  while (true) {
    ll n;
    cin >> n;
    if (n == 0) break;

    vector<ll> v(n);
    rep(i, n) {
      cin >> v[i];
    }

    CumulativeSum<ll> c(v);
    c.build();

    ll ans = -1e10;
    rep(i, n) {
      for (ll j = i; j < n; j++) {
        cmax(ans, c.sum(i, j));
      }
    }
    cout << ans << endl;
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

