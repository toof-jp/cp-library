// https://onlinejudge.u-aizu.ac.jp/solutions/problem/0022/review/4031365/toof/C++14
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

template<class T>
struct CumulativeSum {
  vector<T> v;

  CumulativeSum(size_t n) : v(n+1) {};
  CumulativeSum(vector<T> v_) : v(v_) {
    v.push_back(T());
  };

  void add(size_t i, T x) {
    v[i] += x;
  }

  // O(N)
  void build() {
    for (size_t i = v.size()-1; i > 0; i--)
      v[i-1] += v[i];
  }

  // O(1) sum [l, r]
  T sum(size_t l, size_t r) const {
    return v[l]-v[r+1];
  }

  // O(1) sum [0, r]
  T sum(size_t r) const {
    return sum(0, r);
  }
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  while (true) {
    ll n;
    cin >> n;
    if (n == 0) break;

    vector<ll> v(n);
    rep(i, n) {
      cin >> v[i];
    }

    CumulativeSum<ll> c(v);
    c.build();

    ll ans = -1e10;
    rep(i, n) {
      for (ll j = i; j < n; j++) {
        cmax(ans, c.sum(i, j));
      }
    }
    cout << ans << endl;
  }
}
