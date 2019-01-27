// https://atcoder.jp/contests/aising2019/tasks/aising2019_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define rep(i, n) for(ll i = 0;i < n;i++)
int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

class UnionFind {
private:
  vector<int> parent;
  vector<int> rank;

public:
  UnionFind(int size) : parent(size), rank(size, 0) {
    for (int i = 0; i < size; i++) {
      parent[i] = i;
    }
  }

  int find(int x) {
    if (parent[x] == x) {
      return x;
    } else {
      return parent[x] = find(parent[x]);
    }
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
      parent[x] = y;
    } else {
      parent[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  UnionFind uf(h*w);
  rep(i, h) rep(j, w) rep(k, 4) {
    int ni = i+dx[k];
    int nj = j+dy[k];
    if (0 <= ni && ni < h && 0 <= nj && nj < w && s[i][j] != s[ni][nj]) {
      uf.unite(i*w + j, ni*w + nj);
    }
  }

  vector<ll> black(h*w, 0), white(h*w, 0);
  rep(i, h) rep(j, w) {
    if (s[i][j] == '#') black[uf.find(i*w + j)]++;
    else white[uf.find(i*w + j)]++;
  }

  ll ans = 0;
  rep(i, h*w) {
    ans += black[i] * white[i];
  }
  cout << ans << endl;
}
