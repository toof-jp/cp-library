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


# :heavy_check_mark: test/dijkstra.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/dijkstra.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 21:51:39+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/dijkstra.cpp.html">dijkstra.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#include "../dijkstra.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll v, e, r;
  cin >> v >> e >> r;
  vector<vector<pll>> g(v);
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    g[s].emplace_back(t, d);
  }

  vl vec = dijkstra(v, r, g);

  for (auto&& i : vec) {
    if (i == INF) cout << "INF" << endl;
    else cout << i << endl;
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/dijkstra.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#line 1 "test/../dijkstra.cpp"
ll INF = 1LL<<60;
using pll = pair<ll, ll>;

vl dijkstra(ll n, ll s, vector<vector<pll>> G) {
  priority_queue<pll, vector<pll>, greater<pll>> que;
  vl d(n, INF);
  d[s] = 0;
  que.push(pll(0, s));

  while(!que.empty()) {
    pll p = que.top();
    que.pop();
    ll v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pll(d[e.first], e.first));
      }
    }
  }
  return d;
}
#line 15 "test/dijkstra.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll v, e, r;
  cin >> v >> e >> r;
  vector<vector<pll>> g(v);
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    g[s].emplace_back(t, d);
  }

  vl vec = dijkstra(v, r, g);

  for (auto&& i : vec) {
    if (i == INF) cout << "INF" << endl;
    else cout << i << endl;
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

