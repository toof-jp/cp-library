#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_E"

#include "../template.cpp"
#include "../modint.cpp"
#include "../combination.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  Combination<mint> c(n+k);
  cout << c.C(k, n) << endl;
}
