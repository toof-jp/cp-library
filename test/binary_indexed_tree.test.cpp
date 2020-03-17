#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#include "../binary_indexed_tree.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;

  BinaryIndexedTree<ll> bit(n);
  rep(i, n) {
    ll a;
    cin >> a;
    bit.add0(i, a);
  }

  rep(i, q) {
    ll t;
    cin >> t;
    if (t == 0) {
      ll p, x;
      cin >> p >> x;
      bit.add0(p, x);
    } else {
      ll l, r;
      cin >> l >> r;
      cout << bit.sum_between0(l, r-1) << endl;
    }
  }
}
