#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../template.hpp"
#include "../div_round_up.hpp"

int main() {
  assert(div_round_up(5, 3) == 2);
  assert(div_round_up(0, 2) == 0);
  assert(div_round_up(31, 7) == 5);

  cout << "Hello World" << endl;
}
