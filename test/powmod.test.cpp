#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "src/template.hpp"
#include "src/powmod.hpp"

int main() {
  int m, n;
  cin >> m >> n;
  cout << powmod(m, n, 1e9+7) << el;
}
