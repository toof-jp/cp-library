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


# :warning: prim_mst.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/prim_mst.cpp">View this file on GitHub</a>
    - Last commit date: 2020-01-17 11:28:35+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
// 壊れてる
// 未完成
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define rep(i, n) for(ll i = 0;i < n;i++)

const int INF = 1<<30;

ll Prim(ll V, vector<vector<int>> graph) {
  ll res = 0;
  vector<bool> used(V);
  vector<ll> mincost(V);
  rep(i, V) {
    mincost[i] = INF;
  }
  mincost[0] = 0;

  while (true) {
    ll v = -1;
    rep(u, V) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
    }

    if (v == -1) break;
    used[v] = true;
    res += mincost[v];

    rep(u, V) {
      mincost[u] = min(mincost[u], (ll)graph[v][u]);
    }
  }
  return res;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pii> x_list;
  vector<pii> y_list;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    x_list.push_back(pii(x, i));
    y_list.push_back(pii(y, i));
  }
  sort(x_list.begin(), x_list.end());
  sort(y_list.begin(), y_list.end());

  vector<vector<int>> graph(n, vector<int>(n, INF));
  rep(i, n-1) {
    pii a = x_list[i];
    pii b = x_list[i+1];
    graph[a.second][b.second] = graph[b.second][a.second]
    = min(graph[a.second][b.second], abs(a.first-b.first));

    pii c = y_list[i];
    pii d = y_list[i+1];
    graph[c.second][d.second] = graph[d.second][c.second]
    = min(graph[c.second][d.second], abs(c.first-d.first));
  }

  //rep(i, n) {
  //  rep(j, n) cerr << graph[i][j] << " ";
  //  cerr << endl;
  //}

  cout << Prim(n, graph);
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "prim_mst.cpp"
// 壊れてる
// 未完成
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define rep(i, n) for(ll i = 0;i < n;i++)

const int INF = 1<<30;

ll Prim(ll V, vector<vector<int>> graph) {
  ll res = 0;
  vector<bool> used(V);
  vector<ll> mincost(V);
  rep(i, V) {
    mincost[i] = INF;
  }
  mincost[0] = 0;

  while (true) {
    ll v = -1;
    rep(u, V) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
    }

    if (v == -1) break;
    used[v] = true;
    res += mincost[v];

    rep(u, V) {
      mincost[u] = min(mincost[u], (ll)graph[v][u]);
    }
  }
  return res;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pii> x_list;
  vector<pii> y_list;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    x_list.push_back(pii(x, i));
    y_list.push_back(pii(y, i));
  }
  sort(x_list.begin(), x_list.end());
  sort(y_list.begin(), y_list.end());

  vector<vector<int>> graph(n, vector<int>(n, INF));
  rep(i, n-1) {
    pii a = x_list[i];
    pii b = x_list[i+1];
    graph[a.second][b.second] = graph[b.second][a.second]
    = min(graph[a.second][b.second], abs(a.first-b.first));

    pii c = y_list[i];
    pii d = y_list[i+1];
    graph[c.second][d.second] = graph[d.second][c.second]
    = min(graph[c.second][d.second], abs(c.first-d.first));
  }

  //rep(i, n) {
  //  rep(j, n) cerr << graph[i][j] << " ";
  //  cerr << endl;
  //}

  cout << Prim(n, graph);
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

