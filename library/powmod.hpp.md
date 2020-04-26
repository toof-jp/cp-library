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


# :heavy_check_mark: powmod.hpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/powmod.hpp">View this file on GitHub</a>
    - Last commit date: 2020-04-27 01:07:21+09:00




## Depends on

* :heavy_check_mark: <a href="template.hpp.html">template.hpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/DPL_5_A.test.cpp.html">verify/DPL_5_A.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/powmod.test.cpp.html">verify/powmod.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once
#include "template.hpp"

ll powmod(ll a, ll n, ll p) {
  ll res = 1;
  while (n) {
    if (n&1) res = res * a % p;
    a = a * a % p;
    n >>= 1;
  }
  return res;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 2 "template.hpp"
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define rep3(i, l, r) for(ll i = l; i < (ll)r; i++)
#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)
#define per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)
#define all(v) begin(v), end(v)
template<class T, class U> inline void cmax(T &a, U b) { if (a < b) a = b; }
template<class T, class U> inline void cmin(T &a, U b) { if (a > b) a = b; }
constexpr char el = '\n';
template<class T, class U> ostream &operator<<(ostream &os, const pair<T, U> &p) { os << p.first << " " << p.second; return os; }
template<class T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is >> p.first >> p.second; return is; }
template<class T> ostream &operator<<(ostream &os, const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != v.size() ? " " : ""); return os; }
template<class T> istream &operator>>(istream &is, vector<T> &v) { for(T &i : v) is >> i; return is; }
struct IoSetup {
  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(15); cerr << fixed << setprecision(15); }
} io_setup;
#line 3 "powmod.hpp"

ll powmod(ll a, ll n, ll p) {
  ll res = 1;
  while (n) {
    if (n&1) res = res * a % p;
    a = a * a % p;
    n >>= 1;
  }
  return res;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

