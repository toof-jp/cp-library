#pragma once
#include "template.cpp"

template<class Monoid>
struct SegmentTree {
  using T = typename Monoid::value_type;

  ll n;
  vector<T> tree;
  const Monoid ope;

  SegmentTree(ll n_) : n(n_) {
    n = 1;
    while (n < n_) n *= 2;
    tree.assign(2*n, ope.ide);
  }

  void build(const vector<T>& v) {
    rep(i, v.size()) {
      tree[i+n] = v[i];
    }
    for (ll i = n-1; i >= 0; i--) tree[i] = ope(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, const T& x) {
    p += n;
    tree[p] = x;
    while (p > 1) {
      p /= 2;
      tree[p] = ope(tree[p*2], tree[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = ope.ide;
    T r_res = ope.ide;
    while (l < r) {
      if (l&1) l_res = ope(l_res, tree[l++]);
      l /= 2;
      if (r&1) r_res = ope(tree[--r], r_res);
      r /= 2;
    }
    return ope(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};
