#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_E"

#include "../template.hpp"
#include "../modint.hpp"
#include "../combination.hpp"

int main() {
  ll n, k;
  cin >> n >> k;
  Combination<mint> c(n+k);
  cout << c.C(k, n) << el;
}
