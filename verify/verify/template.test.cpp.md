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


# :heavy_check_mark: verify/template.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/template.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-22 09:52:59+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/template.hpp.html">template.hpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../template.hpp"

int main() {
  ll n = 10;
  vl vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  vl vec_rep, vec_rep3, vec_per, vec_per3;

  rep(i, n) vec_rep.push_back(vec[i]);
  per(i, n) vec_per.push_back(vec[i]);
  rep3(i, 2, 7) vec_rep3.push_back(vec[i]);
  per3(i, 2, 7) vec_per3.push_back(vec[i]);

  assert(vec_rep == vl({3, 1, 4, 1, 5, 9, 2, 6, 5, 3}));
  assert(vec_per == vl({3, 5, 6, 2, 9, 5, 1, 4, 1, 3}));
  assert(vec_rep3 == vl({4, 1, 5, 9, 2}));
  assert(vec_per3 == vl({2, 9, 5, 1, 4}));

  ll maxi = 0;
  ll mini = 1LL<<60;
  rep(i, n) {
    cmax(maxi, vec[i]);
    cmin(mini, vec[i]);
  }
  assert(maxi == 9);
  assert(mini == 1);

  cout << "Hello World" << el << flush;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/template.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#line 2 "template.hpp"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define rep3(i, l, r) for(ll i = l; i < (ll)r; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
#define per3(i, l, r) for(ll i = r-1; i >= (ll)l; i--)
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

constexpr char el = '\n';
#line 4 "verify/template.test.cpp"

int main() {
  ll n = 10;
  vl vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  vl vec_rep, vec_rep3, vec_per, vec_per3;

  rep(i, n) vec_rep.push_back(vec[i]);
  per(i, n) vec_per.push_back(vec[i]);
  rep3(i, 2, 7) vec_rep3.push_back(vec[i]);
  per3(i, 2, 7) vec_per3.push_back(vec[i]);

  assert(vec_rep == vl({3, 1, 4, 1, 5, 9, 2, 6, 5, 3}));
  assert(vec_per == vl({3, 5, 6, 2, 9, 5, 1, 4, 1, 3}));
  assert(vec_rep3 == vl({4, 1, 5, 9, 2}));
  assert(vec_per3 == vl({2, 9, 5, 1, 4}));

  ll maxi = 0;
  ll mini = 1LL<<60;
  rep(i, n) {
    cmax(maxi, vec[i]);
    cmin(mini, vec[i]);
  }
  assert(maxi == 9);
  assert(mini == 1);

  cout << "Hello World" << el << flush;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

