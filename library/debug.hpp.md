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


# :heavy_check_mark: debug.hpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/debug.hpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 21:55:00+09:00




## Depends on

* :heavy_check_mark: <a href="template.hpp.html">template.hpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/debug.test.cpp.html">verify/debug.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once
#include "template.hpp"

// https://codeforces.com/blog/entry/68809
void debug_print(int x) {cerr << x;}
void debug_print(long x) {cerr << x;}
void debug_print(long long x) {cerr << x;}
void debug_print(unsigned x) {cerr << x;}
void debug_print(unsigned long x) {cerr << x;}
void debug_print(unsigned long long x) {cerr << x;}
void debug_print(float x) {cerr << x;}
void debug_print(double x) {cerr << x;}
void debug_print(long double x) {cerr << x;}
void debug_print(char x) {cerr << '\'' << x << '\'';}
void debug_print(const char *x) {cerr << '\"' << x << '\"';}
void debug_print(const string &x) {cerr << '\"' << x << '\"';}
void debug_print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void debug_print(const pair<T, V> &x) {cerr << '{'; debug_print(x.first); cerr << ','; debug_print(x.second); cerr << '}';}
template<typename T> void debug_print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), debug_print(i); cerr << "}";}

void debug_print_() {cerr << "]\n";}
template <typename T, typename... V>
void debug_print_(T t, V... v) {debug_print(t); if (sizeof...(v)) cerr << ", "; debug_print_(v...);}

#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "] = ["; debug_print_(x)
#else
#define debug(x...)
#endif

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
template<class T, class U> inline void cmax(T& a, U b) { if (a < b) a = b; }
template<class T, class U> inline void cmin(T& a, U b) { if (a > b) a = b; }
constexpr char el = '\n';
template<class T, class U> ostream &operator<<(ostream &os, const pair<T, U>& p) { os << p.first << " " << p.second; return os; }
template<class T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is >> p.first >> p.second; return is; }
template<class T> ostream &operator<<(ostream &os, const vector< T > &v) { rep(i, v.size()) os << v[i] << (i + 1 != v.size() ? " " : ""); return os; }
template<class T> istream &operator>>(istream &is, vector< T > &v) { for(T &in : v) is >> in; return is; }
struct IoSetup {
  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(15); cerr << fixed << setprecision(15); }
} io_setup;
#line 3 "debug.hpp"

// https://codeforces.com/blog/entry/68809
void debug_print(int x) {cerr << x;}
void debug_print(long x) {cerr << x;}
void debug_print(long long x) {cerr << x;}
void debug_print(unsigned x) {cerr << x;}
void debug_print(unsigned long x) {cerr << x;}
void debug_print(unsigned long long x) {cerr << x;}
void debug_print(float x) {cerr << x;}
void debug_print(double x) {cerr << x;}
void debug_print(long double x) {cerr << x;}
void debug_print(char x) {cerr << '\'' << x << '\'';}
void debug_print(const char *x) {cerr << '\"' << x << '\"';}
void debug_print(const string &x) {cerr << '\"' << x << '\"';}
void debug_print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void debug_print(const pair<T, V> &x) {cerr << '{'; debug_print(x.first); cerr << ','; debug_print(x.second); cerr << '}';}
template<typename T> void debug_print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), debug_print(i); cerr << "}";}

void debug_print_() {cerr << "]\n";}
template <typename T, typename... V>
void debug_print_(T t, V... v) {debug_print(t); if (sizeof...(v)) cerr << ", "; debug_print_(v...);}

#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "] = ["; debug_print_(x)
#else
#define debug(x...)
#endif

```
{% endraw %}

<a href="../index.html">Back to top page</a>

