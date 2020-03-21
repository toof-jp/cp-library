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


# :heavy_check_mark: verify/dijkstra.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#e8418d1d706cd73548f9f16f1d55ad6e">verify</a>
* <a href="{{ site.github.repository_url }}/blob/master/verify/dijkstra.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-21 17:26:17+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/dijkstra.cpp.html">dijkstra.cpp</a>
* :heavy_check_mark: <a href="../../library/template.cpp.html">template.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include "../template.cpp"
#include "../dijkstra.cpp"

int main() {
  ll v, e, r;
  cin >> v >> e >> r;
  vector<vector<pl>> g(v);
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    g[s].emplace_back(t, d);
  }

  vl vec = dijkstra(v, r, g);

  for (auto&& i : vec) {
    if (i == INF) cout << "INF" << el;
    else cout << i << el;
  }
  cout << flush;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "verify/dijkstra.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

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
#line 3 "dijkstra.cpp"

ll INF = 1LL<<60;

vl dijkstra(ll n, ll s, vector<vector<pl>> G) {
  priority_queue<pl, vector<pl>, greater<pl>> que;
  vl d(n, INF);
  d[s] = 0;
  que.push(pl(0, s));

  while(!que.empty()) {
    pl p = que.top();
    que.pop();
    ll v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pl(d[e.first], e.first));
      }
    }
  }
  return d;
}
#line 5 "verify/dijkstra.test.cpp"

int main() {
  ll v, e, r;
  cin >> v >> e >> r;
  vector<vector<pl>> g(v);
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    g[s].emplace_back(t, d);
  }

  vl vec = dijkstra(v, r, g);

  for (auto&& i : vec) {
    if (i == INF) cout << "INF" << el;
    else cout << i << el;
  }
  cout << flush;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

