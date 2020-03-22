#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../template.hpp"
#include "../binary_indexed_tree.hpp"

template <class T>
struct Plus {
  using value_type = T;

  T operator()(const T& l, const T& r) const {
    return l + r;
  }
  const T ide{};
};

int main() {
  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<Plus<ll>> bit(n);

  rep(i, n) {
    ll a;
    cin >> a;
    bit.add(i, a);
  }

  rep(i, q) {
    ll t, a, b;
    cin >> t >> a >> b;
    if (t == 0) {
      bit.add(a, b);
    } else {
      cout << bit.sum(b) - bit.sum(a) << el;
    }
  }
  cout << flush;
}
