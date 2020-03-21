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
    - Last commit date: 2020-03-21 17:26:17+09:00




## Required by

* :heavy_check_mark: <a href="binary_indexed_tree.cpp.html">binary_indexed_tree.cpp</a>
* :heavy_check_mark: <a href="combination.cpp.html">combination.cpp</a>
* :heavy_check_mark: <a href="cumulative_sum.cpp.html">cumulative_sum.cpp</a>
* :heavy_check_mark: <a href="dijkstra.cpp.html">dijkstra.cpp</a>
* :warning: <a href="div_round_up.cpp.html">div_round_up.cpp</a>
* :heavy_check_mark: <a href="modint.cpp.html">modint.cpp</a>
* :warning: <a href="popcount.cpp.html">popcount.cpp</a>
* :heavy_check_mark: <a href="powmod.cpp.html">powmod.cpp</a>
* :heavy_check_mark: <a href="prime_factorization.cpp.html">prime_factorization.cpp</a>
* :heavy_check_mark: <a href="segment_tree.cpp.html">segment_tree.cpp</a>
* :heavy_check_mark: <a href="union_find.cpp.html">union_find.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/DPL_5_A.test.cpp.html">verify/DPL_5_A.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_B.test.cpp.html">verify/DPL_5_B.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_D.test.cpp.html">verify/DPL_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_E.test.cpp.html">verify/DPL_5_E.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/binary_indexed_tree.test.cpp.html">verify/binary_indexed_tree.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/cumulative_sum.test.cpp.html">verify/cumulative_sum.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/dijkstra.test.cpp.html">verify/dijkstra.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/powmod.test.cpp.html">verify/powmod.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/prime_factorization.test.cpp.html">verify/prime_factorization.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/segment_tree.test.cpp.html">verify/segment_tree.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/template.test.cpp.html">verify/template.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/union_find.test.cpp.html">verify/union_find.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#pragma once

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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 2 "template.cpp"

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

```
{% endraw %}

<a href="../index.html">Back to top page</a>

