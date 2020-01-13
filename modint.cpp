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

template <ll Mod>
struct modint {
  ll n;

  modint(const ll x = 0) : n(x) { while (n < 0) n += Mod; n %= Mod; }
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
  modint &operator*=(const modint r) { n = n * r.n % Mod; return *this; }
  modint &operator/=(const modint r) { return *this *= r.inv(); }
  modint pow(ll x) const {
    modint<Mod> ret(1), tmp(*this);
    while (x) {
      if (x&1) ret *= tmp;
      tmp *= tmp;
      x >>= 1;
    }
    return ret;
  }
  modint inv() const { return pow(Mod-2); }
  friend ostream& operator<<(ostream& os, const modint& obj) { return os << obj.n; }
  friend istream& operator>>(istream& is, modint& obj) { ll t; is >> t; obj = modint(t); return is; }
};
constexpr ll mod = 1000000007;
using mint = modint<mod>;

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  mint m, n;
  cin >> m >> n;
  cout << m/n << endl;
}
