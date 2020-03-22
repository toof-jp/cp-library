#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "../template.hpp"
#include "../popcount.hpp"

int main() {
  assert(popcount(0b10010101) == 4);
  assert(popcount(0b11010111) == 6);
  assert(popcount(0b00000000) == 0);

  ll a, b;
  cin >> a >> b;
  cout << a+b << el;
  cout << flush;
}
