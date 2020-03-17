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
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :x: test/DPL_5_D.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/DPL_5_D.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-18 05:32:10+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D</a>


## Depends on

* :x: <a href="../../library/combination.cpp.html">combination.cpp</a>
* :question: <a href="../../library/modint.cpp.html">modint.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D"

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

#include "../modint.cpp"
#include "../combination.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  Combination<mint> c(n+k);
  cout << c.H(k, n) << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/DPL_5_D.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D"

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

#line 1 "test/../modint.cpp"
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
#line 2 "test/../combination.cpp"
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

// T modint
template<class T>
struct Combination {
  vector<T> fact, inv_fact;
  Combination(ll n) : fact(n+1), inv_fact(n+1) {
    fact[0] = T(1);
    for (ll i = 1; i <= n; i++) fact[i] = fact[i-1] * static_cast<T>(i);
    inv_fact[n] = fact[n].inv();
    for (ll i = n; i > 0; i--) inv_fact[i-1] = inv_fact[i] * static_cast<T>(i);
  }

  T P(ll n, ll k) const {
    if (n < k or k < 0) return T(0);
    return fact[n] * inv_fact[n-k];
  }

  T C(ll n, ll k) const {
    if (n < k or k < 0) return T(0);
    return fact[n] * inv_fact[n-k] * inv_fact[k];
  }

  T H(ll n, ll k) const {
    if (n < 0 or k < 0) return T(0);
    if (n == 0 and k == 0) return T(1);
    return C(n+k-1, n-1);
  }
};

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

}
#line 16 "test/DPL_5_D.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  Combination<mint> c(n+k);
  cout << c.H(k, n) << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

