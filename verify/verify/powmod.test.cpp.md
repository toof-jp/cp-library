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


# :heavy_check_mark: verify/powmod.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/powmod.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-19 04:25:01+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B</a>


## Depends on

* :heavy_check_mark: <a href="../../library/powmod.cpp.html">powmod.cpp</a>
* :heavy_check_mark: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "../template.cpp"
#include "../powmod.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, n;
  cin >> m >> n;
  cout << powmod(m, n, 1e9+7) << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/powmod.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#line 2 "verify/../template.cpp"

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define per(i, n) for(ll i = n-1; i >= 0; i--)
#define all(v) begin(v), end(v)
template<class T, class U>
inline void cmax(T& a, U b) { if (a < b) a = b; }
template<class T, class U>
inline void cmin(T& a, U b) { if (a > b) a = b; }

struct IoSetup {
  IoSetup() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
  }
} io_setup;
#line 3 "verify/../powmod.cpp"

ll powmod(ll a, ll n, ll p) {
  ll res = 1;
  while (n) {
    if (n&1) res = res * a % p;
    a = a * a % p;
    n >>= 1;
  }
  return res;
}
#line 5 "verify/powmod.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, n;
  cin >> m >> n;
  cout << powmod(m, n, 1e9+7) << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

