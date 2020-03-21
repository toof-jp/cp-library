#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_E"

#include "../template.cpp"
#include "../modint.cpp"
#include "../combination.cpp"

int main() {
  ll n, k;
  cin >> n >> k;
  Combination<mint> c(n+k);
  cout << c.C(k, n) << el;
  cout << flush;
}
