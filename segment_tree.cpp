template<class T>
struct SegmentTree {
  ll n;
  vector<T> tree;
  T identity;
  using F = function<T(T, T)>;
  F operation;

  SegmentTree(ll n_, T identity, F operation) : n(n_), identity(identity), operation(operation) {
    n = 1;
    while (n < n_) n *= 2;
    tree.assign(2*n, identity);
  }

  void build(const vector<T> &v) {
    rep(i, v.size()) {
      tree[i+n] = v[i];
    }
    for (ll i = n-1; i >= 0; i--) tree[i] = operation(tree[i*2], tree[i*2+1]);
  }

  void change(ll p, T x) {
    p += n;
    tree[p] = x;
    while (p > 1) {
      p /= 2;
      tree[p] = operation(tree[p*2], tree[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = identity;
    T r_res = identity;
    while (l < r) {
      if (l&1) l_res = operation(l_res, tree[l++]);
      l /= 2;
      if (r&1) r_res = operation(tree[--r], r_res);
      r /= 2;
    }
    return operation(l_res, r_res);
  }

  T operator[](ll i) {
    return tree[i+n];
  }
};
