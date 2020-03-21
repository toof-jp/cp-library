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
