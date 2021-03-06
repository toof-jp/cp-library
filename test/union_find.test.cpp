#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "src/template.hpp"
#include "src/union_find.hpp"

int main() {
  ll n, q;
  cin >> n >> q;

  UnionFind uf(n);
  rep(i, q) {
    ll t, u, v;
    cin >> t >> u >> v;
    if (t == 0) {
      uf.unite(u, v);
    } else {
      cout << uf.same(u, v) << el;
    }
  }
}
