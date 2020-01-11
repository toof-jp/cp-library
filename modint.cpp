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

// http://noshi91.hatenablog.com/entry/2019/03/31/174006
template <uint_fast64_t Mod>
struct modint {
  using u64 = uint_fast64_t;

  u64 n;

  modint(const u64 x = 0) : n(x % Mod) {}
  modint operator+(const modint r) const { return modint(*this) += r; }
  modint operator-(const modint r) const { return modint(*this) -= r; }
  modint operator*(const modint r) const { return modint(*this) *= r; }
  modint operator/(const modint r) const { return modint(*this) /= r; }
  modint &operator+=(const modint r) {
    n += r.n;
    if (n >= Mod) n -= Mod;
    return *this;
  }
  modint &operator-=(const modint r) {
    if (n < r.n) n += Mod;
    n -= r.n;
    return *this;
  }
  modint &operator*=(const modint r) {
    n = n * r.n % Mod;
    return *this;
  }
  modint &operator/=(const modint r) {
    *this *= r.inv();
    return *this;
  }
  modint pow(u64 x) const {
    modint<Mod> ret(1), tmp(*this);
    while (x) {
      if (x&1) ret *= tmp;
      tmp *= tmp;
      x >>= 1;
    }
    return ret;
  }
  modint inv() const {
    return pow(Mod-2);
  }
};
constexpr ll mod = 1000000007;
using mint = modint<mod>;

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  constexpr ll mod = 1e9+7;
  modint<mod> m, n;
  cin >> m.n >> n.n;
  cout << (m/n).n << endl;
}
