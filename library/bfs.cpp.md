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


# :warning: bfs.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/bfs.cpp">View this file on GitHub</a>
    - Last commit date: 2018-10-28 20:50:42+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
//
// https://beta.atcoder.jp/contests/atc002/tasks/abc007_3
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)
typedef pair<int, int> P;
int x4[4] = {1, -1, 0, 0}, y4[4] = {0, 0, 1, -1};

int INF = 1000000;
int R, C, sy, sx, gy, gx;
char field[60][60];
int minDis[60][60];

int bfs() {
  queue<P> que;
  rep(i, R) rep(j, C) minDis[i][j] = INF;
  que.push(P(sy-1, sx-1));
  minDis[sy-1][sx-1] = 0;

  while (que.size()) {
    P p = que.front(); que.pop();
    if (p.first == gy-1 && p.second == gx-1) break;

    rep(i, 4) {
      int ny = p.first + y4[i], nx = p.second + x4[i];

      if (0 <= nx && nx < C && 0 <= ny && ny < R && field[ny][nx] != '#' && minDis[ny][nx] == INF) {
        que.push(P(ny, nx));
        minDis[ny][nx] = minDis[p.first][p.second] + 1;
      }
    }
  }

  return minDis[gy-1][gx-1];
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  cin >> R >> C >> sy >> sx >> gy >> gx;
  rep(i, R) rep(j, C) cin >> field[i][j];

  cout << bfs() << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "bfs.cpp"
//
// https://beta.atcoder.jp/contests/atc002/tasks/abc007_3
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)
typedef pair<int, int> P;
int x4[4] = {1, -1, 0, 0}, y4[4] = {0, 0, 1, -1};

int INF = 1000000;
int R, C, sy, sx, gy, gx;
char field[60][60];
int minDis[60][60];

int bfs() {
  queue<P> que;
  rep(i, R) rep(j, C) minDis[i][j] = INF;
  que.push(P(sy-1, sx-1));
  minDis[sy-1][sx-1] = 0;

  while (que.size()) {
    P p = que.front(); que.pop();
    if (p.first == gy-1 && p.second == gx-1) break;

    rep(i, 4) {
      int ny = p.first + y4[i], nx = p.second + x4[i];

      if (0 <= nx && nx < C && 0 <= ny && ny < R && field[ny][nx] != '#' && minDis[ny][nx] == INF) {
        que.push(P(ny, nx));
        minDis[ny][nx] = minDis[p.first][p.second] + 1;
      }
    }
  }

  return minDis[gy-1][gx-1];
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  cin >> R >> C >> sy >> sx >> gy >> gx;
  rep(i, R) rep(j, C) cin >> field[i][j];

  cout << bfs() << endl;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

