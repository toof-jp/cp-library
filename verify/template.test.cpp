#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "../template.cpp"

int main() {
  ll n = 10;
  vl vec(n);
  iota(all(vec), 0);
  rep(i, n) {
    assert(i == vec[i]);
  }
  per(i, n) {
    assert(i == vec[i]);
  }
  vl vec2 = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  ll maxi = 0;
  ll mini = 1LL<<60;
  rep(i, n) {
    cmax(maxi, vec2[i]);
    cmin(mini, vec2[i]);
  }
  assert(maxi == 9);
  assert(mini == 1);

  ll a, b;
  cin >> a >> b;
  cout << a+b << endl;
}
