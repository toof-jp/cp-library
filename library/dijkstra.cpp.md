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


# :warning: dijkstra.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/dijkstra.cpp">View this file on GitHub</a>
    - Last commit date: 2020-01-12 00:44:00+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
//
// https://beta.atcoder.jp/contests/abc035/tasks/abc035_d
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)

int INF = 1<<30;
const int maxn = 1e5+10;
int n;

// グラフは隣接行列で渡す
vector<int> dijkstra(int s, vector<vector<pii>> G) {
  priority_queue<pii, vector<pii>, greater<pii>> que;
  vector<int> d(n, INF);
  d[s] = 0;
  que.push(pii(0, s));

  while(!que.empty()) {
    pii p = que.top(); que.pop();
    int v = p.second;
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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, t;
  cin >> n >> m >> t;
  int A[maxn];
  rep(i, n) cin >> A[i];
  vector<vector<pii>> G1(maxn);
  vector<vector<pii>> G2(maxn);
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G1[a].push_back(pii(b, c));
    G2[b].push_back(pii(a, c));
  }

  auto d1 = dijkstra(0, G1);
  auto d2 = dijkstra(0, G2);
  ll ans = 0;
  rep(i, n) {
    ans = max(ans, (ll)A[i] * (t-d1[i]-d2[i]));
  }
  cout << ans << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "dijkstra.cpp"
//
// https://beta.atcoder.jp/contests/abc035/tasks/abc035_d
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)

int INF = 1<<30;
const int maxn = 1e5+10;
int n;

// グラフは隣接行列で渡す
vector<int> dijkstra(int s, vector<vector<pii>> G) {
  priority_queue<pii, vector<pii>, greater<pii>> que;
  vector<int> d(n, INF);
  d[s] = 0;
  que.push(pii(0, s));

  while(!que.empty()) {
    pii p = que.top(); que.pop();
    int v = p.second;
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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, t;
  cin >> n >> m >> t;
  int A[maxn];
  rep(i, n) cin >> A[i];
  vector<vector<pii>> G1(maxn);
  vector<vector<pii>> G2(maxn);
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G1[a].push_back(pii(b, c));
    G2[b].push_back(pii(a, c));
  }

  auto d1 = dijkstra(0, G1);
  auto d2 = dijkstra(0, G2);
  ll ans = 0;
  rep(i, n) {
    ans = max(ans, (ll)A[i] * (t-d1[i]-d2[i]));
  }
  cout << ans << endl;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

