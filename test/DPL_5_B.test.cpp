#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_B"

#include "../template.cpp"
#include "../modint.cpp"
#include "../combination.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  Combination<mint> c(max(n, k));
  cout << c.P(k, n) << endl;
}
