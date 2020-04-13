#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A"

#include "../template.hpp"
#include "../powmod.hpp"

int main() {
  ll n, k;
  cin >> n >> k;
  ll mod = 1e9+7;
  cout << powmod(k, n, mod) << el;
}
