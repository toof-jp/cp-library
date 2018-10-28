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
