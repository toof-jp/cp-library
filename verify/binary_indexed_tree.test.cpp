#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../template.cpp"
#include "../binary_indexed_tree.cpp"

int main() {
  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<ll> bit(n);
  rep(i, n) {
    ll a;
    cin >> a;
    bit.add0(i, a);
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, x;
      cin >> p >> x;
      bit.add0(p, x);
    } else {
      ll l, r;
      cin >> l >> r;
      cout << bit.sum_between0(l, r-1) << endl;
    }
  }
}
