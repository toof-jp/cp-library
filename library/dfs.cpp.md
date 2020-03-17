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


# :warning: dfs.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/dfs.cpp">View this file on GitHub</a>
    - Last commit date: 2018-10-28 17:53:00+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
//
// https://beta.atcoder.jp/contests/atc001/tasks/dfs_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)

int H, W;
char field[600][600];
bool reached[600][600];

int dfs(int x, int y) {
  if (x < 0 || W <= x || y < 0 || H <= y) return 0;
  if (field[y][x] == '#') return 0;
  if (reached[y][x]) return 0;

  reached[y][x] = true;

  dfs(x+1, y);
  dfs(x-1, y);
  dfs(x, y+1);
  dfs(x, y-1);
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  cin >> H >> W;

  int sx, sy, gx, gy;
  rep(i, H) rep(j, W) {
    char c;
    cin >> c;
    if (c == 's') sx = j; sy = i;
    if (c == 'g') gx = j; gy = i;
    field[i][j] = c;
  }

  dfs(sx, sy);

  cout << (reached[gy][gx] ? "Yes" : "No") << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "dfs.cpp"
//
// https://beta.atcoder.jp/contests/atc001/tasks/dfs_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)

int H, W;
char field[600][600];
bool reached[600][600];

int dfs(int x, int y) {
  if (x < 0 || W <= x || y < 0 || H <= y) return 0;
  if (field[y][x] == '#') return 0;
  if (reached[y][x]) return 0;

  reached[y][x] = true;

  dfs(x+1, y);
  dfs(x-1, y);
  dfs(x, y+1);
  dfs(x, y-1);
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  cin >> H >> W;

  int sx, sy, gx, gy;
  rep(i, H) rep(j, W) {
    char c;
    cin >> c;
    if (c == 's') sx = j; sy = i;
    if (c == 'g') gx = j; gy = i;
    field[i][j] = c;
  }

  dfs(sx, sy);

  cout << (reached[gy][gx] ? "Yes" : "No") << endl;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

