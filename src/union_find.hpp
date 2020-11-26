#pragma once
#include "template.hpp"

struct UnionFind {
  struct Node {
    ll parent;
    ll size;
  };
  vector<Node> data;
  ll num;

  UnionFind(ll size) : data(size) {
    rep(i, size) {
      data[i].parent = i;
      data[i].size = 1;
    }
    num = size;
  }

  ll find(ll x) {
    while (data[x].parent != x) {
      ll p = data[x].parent;
      data[x].parent = data[p].parent;
      x = p;
    }
    return x;
  }

  void unite(ll x, ll y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    if (data[x].size < data[y].size) swap(x, y);
    data[y].parent = x;
    data[x].size += data[y].size;
    num--;
  }

  bool same(ll x, ll y) {
    return find(x) == find(y);
  }

  ll count() const {
    return num;
  }
};
