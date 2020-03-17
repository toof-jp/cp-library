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


# :x: dijkstra.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/dijkstra.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 21:42:00+09:00




## Verified with

* :x: <a href="../verify/test/dijkstra.test.cpp.html">test/dijkstra.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
ll INF = 1LL<<60;
using pll = pair<ll, ll>;

vl dijkstra(ll n, ll s, vector<vector<pll>> G) {
  priority_queue<pll, vector<pll>, greater<pll>> que;
  vl d(n, INF);
  d[s] = 0;
  que.push(pii(0, s));

  while(!que.empty()) {
    pll p = que.top();
    que.pop();
    ll v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pii(d[e.first], e.first));
      }
    }
  }
  return d;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "dijkstra.cpp"
ll INF = 1LL<<60;
using pll = pair<ll, ll>;

vl dijkstra(ll n, ll s, vector<vector<pll>> G) {
  priority_queue<pll, vector<pll>, greater<pll>> que;
  vl d(n, INF);
  d[s] = 0;
  que.push(pii(0, s));

  while(!que.empty()) {
    pll p = que.top();
    que.pop();
    ll v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pii(d[e.first], e.first));
      }
    }
  }
  return d;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

