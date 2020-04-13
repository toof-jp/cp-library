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


# :heavy_check_mark: verify/debug.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/debug.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-14 02:21:31+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/debug.hpp.html">debug.hpp</a>
* :heavy_check_mark: <a href="../../library/template.hpp.html">template.hpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../template.hpp"
#include "../debug.hpp"

int main() {
  ll n = 10;
  double m = 3.141592;
  bool f = true;

  debug(n, m, f);

  vector<int> a(n);
  debug(a);

  vector<vl> b(n, vl(n));
  debug(b);

  cout << "Hello World" << el;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/debug.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

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
template<class T, class U>
inline void cmax(T& a, U b) { if (a < b) a = b; }
template<class T, class U>
inline void cmin(T& a, U b) { if (a > b) a = b; }

struct IoSetup {
  IoSetup() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    cerr << fixed << setprecision(15);
  }
} io_setup;

constexpr char el = '\n';

template<typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U>& p) {
  os << p.first << " " << p.second;
  return os;
}
template<typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}
template<typename T>
ostream &operator<<(ostream &os, const vector< T > &v) {
  rep(i, v.size())
    os << v[i] << (i + 1 != v.size() ? " " : "");
  return os;
}
template<typename T>
istream &operator>>(istream &is, vector< T > &v) {
  for(T &in : v) is >> in;
  return is;
}
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
#line 5 "verify/debug.test.cpp"

int main() {
  ll n = 10;
  double m = 3.141592;
  bool f = true;

  debug(n, m, f);

  vector<int> a(n);
  debug(a);

  vector<vl> b(n, vl(n));
  debug(b);

  cout << "Hello World" << el;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

