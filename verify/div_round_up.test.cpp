#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "../template.hpp"
#include "../div_round_up.hpp"

int main() {
  assert(div_round_up(5, 3) == 2);
  assert(div_round_up(0, 2) == 0);
  assert(div_round_up(31, 7) == 5);

  ll a, b;
  cin >> a >> b;
  cout << a+b << el;
  cout << flush;
}
