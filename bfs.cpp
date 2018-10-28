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
