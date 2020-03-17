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
    data.assign(2*n-1, identity);
  }

  void change(ll i, T x) {
    i += n-1;
    data[i] = x;
    while (i > 0) {
      i = (i-1)/2;
      data[i] = operation(data[i*2+1], data[i*2+2]);
    }
  }

  T query(ll a, ll b, ll k, ll l, ll r) {
    if (r <= a or b <= l) return identity;
    if (a <= l and r <= b) {
      return data[k];
    } else {
      T c1 = query(a, b, 2*k+1, l, (l+r)/2);
      T c2 = query(a, b, 2*k+2, (l+r)/2, r);
      return operation(c1, c2);
    }
  }

  T query(ll a, ll b) {
    return query(a, b, 0, 0, n);
  }

  T operator[](ll i) {
    return data[i+n-1];
  }
};
