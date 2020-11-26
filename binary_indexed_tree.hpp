#pragma once
#include "template.hpp"

template<class ComumutativeMonoid>
struct BinaryIndexedTree {
  using T = typename ComumutativeMonoid::value_type;
  // 1-indexed
  ll n;
  vector<T> tree;
  const ComumutativeMonoid ope;

  BinaryIndexedTree(ll n_) : n(n_), ope(ComumutativeMonoid()) {
    tree.assign(n+1, ope.ide);
  }

  void add(ll p, T a) {
    for (ll x = p+1; x <= n; x += x&-x) {
      tree[x] = ope(tree[x], a);
    }
  }

  // sum [0, r)
  T sum(ll r) const {
    T sum = ope.ide;
    for (ll x = r; x > 0; x -= x&-x) {
      sum = ope(sum, tree[x]);
    }
    return sum;
  }

  /*
  // bit[1] + bit[2] + ... + bit[x] >= w;
  ll lower_bound(T w) const {
    if (w <= 0) return 0;
    ll x = 0, r = 1;
    while (r < n) r <<= 1;
    for (ll k = r; k > 0; k >>= 1){
      if(x+k <= n && tree[x+k] < w){
        w -= tree[x+k];
        x += k;
      }
    }
    return x+1;
  }
  */
};
