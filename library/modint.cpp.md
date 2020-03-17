---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../assets/css/copy-button.css" />


# :warning: modint.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/modint.cpp">View this file on GitHub</a>
    - Last commit date: 2020-02-01 22:34:58+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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
struct ModInt {
  ll n;
  ModInt(const ll x = 0) : n(x) { while (n < 0) n += Mod; n %= Mod; }
  ModInt operator+(const ModInt r) const { return ModInt(*this) += r; }
  ModInt operator-(const ModInt r) const { return ModInt(*this) -= r; }
  ModInt operator*(const ModInt r) const { return ModInt(*this) *= r; }
  ModInt operator/(const ModInt r) const { return ModInt(*this) /= r; }
  ModInt &operator+=(const ModInt r) { n += r.n; if (n >= Mod) n -= Mod; return *this; }
  ModInt &operator-=(const ModInt r) { if (n < r.n) n += Mod; n -= r.n; return *this; }
  ModInt &operator*=(const ModInt r) { n = n * r.n % Mod; return *this; }
  ModInt &operator/=(const ModInt r) { return *this *= r.inv(); }
  ModInt pow(ll x) const { ModInt<Mod> ret(1), tmp(*this); while (x) { if (x&1) ret *= tmp; tmp *= tmp; x >>= 1; } return ret; }
  ModInt inv() const { return pow(Mod-2); }
  friend ostream& operator<<(ostream& os, const ModInt& obj) { return os << obj.n; }
  friend istream& operator>>(istream& is, ModInt& obj) { ll t; is >> t; obj = ModInt(t); return is; }
};
constexpr ll mod = 1000000007;
using mint = ModInt<mod>;
mint operator"" _mi(unsigned long long n) { return mint(n); }

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  mint m, n;
  cin >> m >> n;
  cout << m/n << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "modint.cpp"
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
struct ModInt {
  ll n;
  ModInt(const ll x = 0) : n(x) { while (n < 0) n += Mod; n %= Mod; }
  ModInt operator+(const ModInt r) const { return ModInt(*this) += r; }
  ModInt operator-(const ModInt r) const { return ModInt(*this) -= r; }
  ModInt operator*(const ModInt r) const { return ModInt(*this) *= r; }
  ModInt operator/(const ModInt r) const { return ModInt(*this) /= r; }
  ModInt &operator+=(const ModInt r) { n += r.n; if (n >= Mod) n -= Mod; return *this; }
  ModInt &operator-=(const ModInt r) { if (n < r.n) n += Mod; n -= r.n; return *this; }
  ModInt &operator*=(const ModInt r) { n = n * r.n % Mod; return *this; }
  ModInt &operator/=(const ModInt r) { return *this *= r.inv(); }
  ModInt pow(ll x) const { ModInt<Mod> ret(1), tmp(*this); while (x) { if (x&1) ret *= tmp; tmp *= tmp; x >>= 1; } return ret; }
  ModInt inv() const { return pow(Mod-2); }
  friend ostream& operator<<(ostream& os, const ModInt& obj) { return os << obj.n; }
  friend istream& operator>>(istream& is, ModInt& obj) { ll t; is >> t; obj = ModInt(t); return is; }
};
constexpr ll mod = 1000000007;
using mint = ModInt<mod>;
mint operator"" _mi(unsigned long long n) { return mint(n); }

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  mint m, n;
  cin >> m >> n;
  cout << m/n << endl;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

