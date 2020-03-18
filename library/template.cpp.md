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


# :heavy_check_mark: template.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/template.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-19 02:50:19+09:00




## Verified with

* :heavy_check_mark: <a href="../verify/test/DPL_5_A.test.cpp.html">test/DPL_5_A.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/DPL_5_B.test.cpp.html">test/DPL_5_B.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/DPL_5_D.test.cpp.html">test/DPL_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/DPL_5_E.test.cpp.html">test/DPL_5_E.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/binary_indexed_tree.test.cpp.html">test/binary_indexed_tree.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/cumulative_sum.test.cpp.html">test/cumulative_sum.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/dijkstra.test.cpp.html">test/dijkstra.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/powmod.test.cpp.html">test/powmod.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/prime_factorization.test.cpp.html">test/prime_factorization.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/segment_tree.test.cpp.html">test/segment_tree.test.cpp</a>
* :heavy_check_mark: <a href="../verify/test/union_find.test.cpp.html">test/union_find.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define per(i, n) for(ll i = n-1;i >= 0; i--)
#define all(v) (v).begin(), (v).end()
template<class T, class U> void cmax(T& a, U b) { if (a<b) a = b; }
template<class T, class U> void cmin(T& a, U b) { if (a>b) a = b; }

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "template.cpp"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pl = pair<ll, ll>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define per(i, n) for(ll i = n-1;i >= 0; i--)
#define all(v) (v).begin(), (v).end()
template<class T, class U> void cmax(T& a, U b) { if (a<b) a = b; }
template<class T, class U> void cmin(T& a, U b) { if (a>b) a = b; }

```
{% endraw %}

<a href="../index.html">Back to top page</a>

