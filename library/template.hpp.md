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


# :heavy_check_mark: template.hpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/template.hpp">View this file on GitHub</a>
    - Last commit date: 2020-03-22 22:35:17+09:00




## Required by

* :heavy_check_mark: <a href="binary_indexed_tree.hpp.html">binary_indexed_tree.hpp</a>
* :heavy_check_mark: <a href="combination.hpp.html">combination.hpp</a>
* :heavy_check_mark: <a href="cumulative_sum.hpp.html">cumulative_sum.hpp</a>
* :heavy_check_mark: <a href="dijkstra.hpp.html">dijkstra.hpp</a>
* :heavy_check_mark: <a href="div_round_up.hpp.html">div_round_up.hpp</a>
* :heavy_check_mark: <a href="modint.hpp.html">modint.hpp</a>
* :heavy_check_mark: <a href="popcount.hpp.html">popcount.hpp</a>
* :heavy_check_mark: <a href="powmod.hpp.html">powmod.hpp</a>
* :heavy_check_mark: <a href="prime_factorization.hpp.html">prime_factorization.hpp</a>
* :heavy_check_mark: <a href="segment_tree.hpp.html">segment_tree.hpp</a>
* :heavy_check_mark: <a href="union_find.hpp.html">union_find.hpp</a>


## Verified with

* :heavy_check_mark: <a href="../verify/verify/DPL_5_A.test.cpp.html">verify/DPL_5_A.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_B.test.cpp.html">verify/DPL_5_B.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_D.test.cpp.html">verify/DPL_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/DPL_5_E.test.cpp.html">verify/DPL_5_E.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/binary_indexed_tree.test.cpp.html">verify/binary_indexed_tree.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/cumulative_sum.test.cpp.html">verify/cumulative_sum.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/dijkstra.test.cpp.html">verify/dijkstra.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/div_round_up.test.cpp.html">verify/div_round_up.test.cpp</a>
* :heavy_check_mark: <a href="../verify/verify/popcount.test.cpp.html">verify/popcount.test.cpp</a>
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
    cerr << fixed << setprecision(15);
  }
} io_setup;

constexpr char el = '\n';

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
    cerr << fixed << setprecision(15);
  }
} io_setup;

constexpr char el = '\n';

```
{% endraw %}

<a href="../index.html">Back to top page</a>

