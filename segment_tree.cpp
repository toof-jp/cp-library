template<class T>
struct SegmentTree {
  ll n;
  vector<T> data;
  T identity;
  using F = function<T(T, T)>;
  F operation;

  SegmentTree(ll n_, T identity, F operation) : n(n_), identity(identity), operation(operation) {
    n = 1;
    while (n < n_) n *= 2;
    data.assign(2*n, identity);
  }

  void change(ll p, T x) {
    p += n;
    data[p] = x;
    while (p > 1) {
      p /= 2;
      data[p] = operation(data[p*2], data[p*2+1]);
    }
  }

  T query(ll l, ll r) {
    l += n;
    r += n;
    T l_res = identity;
    T r_res = identity;
    while (l < r) {
      if (l&1) l_res = operation(l_res, data[l++]);
      l /= 2;
      if (r&1) r_res = operation(data[--r], r_res);
      r /= 2;
    }
    return operation(l_res, r_res);
  }

  T operator[](ll i) {
    return data[i+n];
  }
};
