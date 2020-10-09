#pragma once
#include "template.hpp"

template<class Monoid>
struct SegmentTree {
  using T = typename Monoid::value_type;

  ll n;
  vector<T> tree;
  const Monoid ope;

  SegmentTree(ll n_) : n(n_) {
    tree.assign(2*n, ope.ide);
  }

  void build(const vector<T>& v) {
    rep(i, v.size())
      tree[i+n] = v[i];
    per(i, n)
      tree[i] = ope(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, const T& x) {
    p += n;
    tree[p] = x;
    while (p >>= 1)
      tree[p] = ope(tree[p*2], tree[p*2+1]);
  }

  T query(ll l, ll r) const {
    T l_res{};
    T r_res{};
    for (l += n, r+= n; l < r; l >>= 1, r >>= 1) {
      if (l&1) l_res = ope(l_res, tree[l++]);
      if (r&1) r_res = ope(tree[--r], r_res);
    }
    return ope(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};
