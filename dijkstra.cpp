#pragma once
#include "template.cpp"

ll INF = 1LL<<60;

vl dijkstra(ll n, ll s, vector<vector<pl>> G) {
  priority_queue<pl, vector<pl>, greater<pl>> que;
  vl d(n, INF);
  d[s] = 0;
  que.push(pl(0, s));

  while(!que.empty()) {
    pl p = que.top();
    que.pop();
    ll v = p.second;
    if (d[v] < p.first) continue;
    for (auto&& e : G[v]) {
      if (d[e.first] > d[v] + e.second) {
        d[e.first] = d[v] + e.second;
        que.push(pl(d[e.first], e.first));
      }
    }
  }
  return d;
}
