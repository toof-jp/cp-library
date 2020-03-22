#pragma once
#include "template.cpp"

struct UnionFind {
  struct Node {
    ll parent;
    ll size;
  };
  vector<Node> tree;

  UnionFind(ll size) : tree(size) {
    rep(i, size) {
      tree[i].parent = i;
      tree[i].size = 1;
    }
  }

  ll find(ll x) {
    while (tree[x].parent != x) {
      ll p = tree[x].parent;
      tree[x].parent = tree[p].parent;
      x = p;
    }
    return x;
  }

  void unite(ll x, ll y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    if (tree[x].size < tree[y].size) swap(x, y);
    tree[y].parent = x;
    tree[x].size += tree[y].size;
  }

  bool same(ll x, ll y) {
    return find(x) == find(y);
  }
};
