#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include "../template.hpp"
#include "../prime_factorization.hpp"

int main() {
  ll n;
  cin >> n;

  auto m = prime_factorization(n);

  cout << n << ": ";
  vl ans;
  for (auto&& i : m) {
    rep(j, i.second) {
      ans.push_back(i.first);
    }
  }
  cout << ans << el;
}
