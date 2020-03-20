#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "../template.cpp"

int main() {
  ll n = 10;
  vl vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  vl vec_rep, vec_rep3, vec_per, vec_per3;

  rep(i, n) vec_rep.push_back(vec[i]);
  per(i, n) vec_per.push_back(vec[i]);
  rep3(i, 2, 7) vec_rep3.push_back(vec[i]);
  per3(i, 2, 7) vec_per3.push_back(vec[i]);

  assert(vec_rep == vl({3, 1, 4, 1, 5, 9, 2, 6, 5, 3}));
  assert(vec_per == vl({3, 5, 6, 2, 9, 5, 1, 4, 1, 3}));
  assert(vec_rep3 == vl({4, 1, 5, 9, 2}));
  assert(vec_per3 == vl({2, 9, 5, 1, 4}));

  ll maxi = 0;
  ll mini = 1LL<<60;
  rep(i, n) {
    cmax(maxi, vec[i]);
    cmin(mini, vec[i]);
  }
  assert(maxi == 9);
  assert(mini == 1);

  ll a, b;
  cin >> a >> b;
  cout << a+b << endl;
}
