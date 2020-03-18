#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A"

#include "../template.cpp"
#include "../powmod.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  ll mod = 1e9+7;
  cout << powmod(k, n, mod) << endl;
}
