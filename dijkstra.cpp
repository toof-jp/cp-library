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
