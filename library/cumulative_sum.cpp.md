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


# :warning: cumulative_sum.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/cumulative_sum.cpp">View this file on GitHub</a>
    - Last commit date: 2020-01-19 18:39:19+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
// https://onlinejudge.u-aizu.ac.jp/solutions/problem/0022/review/4031365/toof/C++14
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
#line 1 "cumulative_sum.cpp"
// https://onlinejudge.u-aizu.ac.jp/solutions/problem/0022/review/4031365/toof/C++14
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

<a href="../index.html">Back to top page</a>

