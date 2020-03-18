#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#include "../template.cpp"
#include "../segment_tree.cpp"
#include "../modint.cpp"

using modint = ModInt<998244353>;

struct f{
  modint a, b;
  f(ll a = 1, ll b = 0) : a(a), b(b) {};
  f(modint a, modint b) : a(a), b(b) {};
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;
  SegmentTree<f> seg(n, f(), [](f l, f r){ return f(r.a*l.a, r.a*l.b+r.b); });

  vector<f> vec(n);
  rep(i, n) {
    cin >> vec[i].a >> vec[i].b;
  }

  seg.build(vec);

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, c, d;
      cin >> p >> c >> d;
      seg.change(p, f(c, d));
    } else {
      ll l, r, x;
      cin >> l >> r >> x;
      f e = seg.query(l, r);
      cout << e.a*modint(x)+e.b << endl;
    }
  }
}
