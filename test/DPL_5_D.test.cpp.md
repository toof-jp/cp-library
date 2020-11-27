---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/combination.hpp
    title: src/combination.hpp
  - icon: ':heavy_check_mark:'
    path: src/modint.hpp
    title: src/modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D
  bundledCode: "#line 1 \"test/DPL_5_D.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D\"\
    \n\n#line 2 \"src/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    using ll = long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define\
    \ rep(i, n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l;\
    \ i < (ll)r; i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define\
    \ per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v),\
    \ end(v)\n#define rall(v) rbegin(v), rend(v)\ntemplate<class T, class U> inline\
    \ void cmax(T &a, U b) { if (a < b) a = b; }\ntemplate<class T, class U> inline\
    \ void cmin(T &a, U b) { if (a > b) a = b; }\nconstexpr char el = '\\n';\ntemplate<class\
    \ T, class U> ostream &operator<<(ostream &os, const pair<T, U> &p) { os << p.first\
    \ << \" \" << p.second; return os; }\ntemplate<class T, class U> istream &operator>>(istream\
    \ &is, pair<T, U> &p) { is >> p.first >> p.second; return is; }\ntemplate<class\
    \ T> ostream &operator<<(ostream &os, const vector<T> &v) { rep(i, v.size()) os\
    \ << v[i] << (i+1 != (ll)v.size() ? \" \" : \"\"); return os; }\ntemplate<class\
    \ T> istream &operator>>(istream &is, vector<T> &v) { for(T &i : v) is >> i; return\
    \ is; }\nstruct IoSetup {\n  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false);\
    \ cout << fixed << setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n\
    #line 3 \"src/modint.hpp\"\n\ntemplate <ll Mod>\nstruct ModInt {\n  ll n;\n\n\
    \  ModInt(const ll x = 0) : n(x) {\n    while (n < 0) n += Mod;\n    n %= Mod;\n\
    \  }\n\n  inline constexpr ModInt operator+(const ModInt r) const noexcept { return\
    \ ModInt(*this) += r; }\n  inline constexpr ModInt operator-(const ModInt r) const\
    \ noexcept { return ModInt(*this) -= r; }\n  inline constexpr ModInt operator*(const\
    \ ModInt r) const noexcept { return ModInt(*this) *= r; }\n  inline constexpr\
    \ ModInt operator/(const ModInt r) const noexcept { return ModInt(*this) /= r;\
    \ }\n  inline constexpr ModInt &operator+=(const ModInt r) noexcept {\n    n +=\
    \ r.n;\n    if (n >= Mod) n -= Mod;\n    return *this;\n  }\n  inline constexpr\
    \ ModInt &operator-=(const ModInt r) noexcept {\n    if (n < r.n) n += Mod;\n\
    \    n -= r.n;\n    return *this;\n  }\n  inline constexpr ModInt &operator*=(const\
    \ ModInt r) noexcept {\n    n = n * r.n % Mod;\n    return *this;\n  }\n  inline\
    \ constexpr ModInt &operator/=(const ModInt r) noexcept { return *this *= r.inv();\
    \ }\n\n  inline constexpr ModInt pow(ll x) const noexcept {\n    ModInt<Mod> ret(1),\
    \ tmp(*this);\n    while (x) {\n      if (x&1) ret *= tmp;\n      tmp *= tmp;\n\
    \      x >>= 1;\n    }\n    return ret;\n  }\n  inline constexpr ModInt inv()\
    \ const noexcept { return pow(Mod-2); }\n\n  friend ostream& operator<<(ostream&\
    \ os, const ModInt& obj) { return os << obj.n; }\n  friend istream& operator>>(istream&\
    \ is, ModInt& obj) {\n    ll t;\n    is >> t;\n    obj = ModInt(t);\n    return\
    \ is;\n  }\n};\n\nconstexpr ll mod = 1000000007;\nusing mint = ModInt<mod>;\n\
    mint operator\"\" _mi(unsigned long long n) { return mint(n); }\n#line 3 \"src/combination.hpp\"\
    \n\n// T modint\ntemplate<class T>\nstruct Combination {\n  vector<T> fact, inv_fact;\n\
    \  Combination(ll n) : fact(n+1), inv_fact(n+1) {\n    fact[0] = T(1);\n    for\
    \ (ll i = 1; i <= n; i++) fact[i] = fact[i-1] * static_cast<T>(i);\n    inv_fact[n]\
    \ = fact[n].inv();\n    for (ll i = n; i > 0; i--) inv_fact[i-1] = inv_fact[i]\
    \ * static_cast<T>(i);\n  }\n\n  T P(ll n, ll k) const {\n    if (n < k or k <\
    \ 0) return T(0);\n    return fact[n] * inv_fact[n-k];\n  }\n\n  T C(ll n, ll\
    \ k) const {\n    if (n < k or k < 0) return T(0);\n    return fact[n] * inv_fact[n-k]\
    \ * inv_fact[k];\n  }\n\n  T H(ll n, ll k) const {\n    if (n < 0 or k < 0) return\
    \ T(0);\n    if (n == 0 and k == 0) return T(1);\n    return C(n+k-1, n-1);\n\
    \  }\n};\n#line 6 \"test/DPL_5_D.test.cpp\"\n\nint main() {\n  ll n, k;\n  cin\
    \ >> n >> k;\n  Combination<mint> c(n+k);\n  cout << c.H(k, n) << el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_D\"\
    \n\n#include \"src/template.hpp\"\n#include \"src/modint.hpp\"\n#include \"src/combination.hpp\"\
    \n\nint main() {\n  ll n, k;\n  cin >> n >> k;\n  Combination<mint> c(n+k);\n\
    \  cout << c.H(k, n) << el;\n}\n"
  dependsOn:
  - src/template.hpp
  - src/modint.hpp
  - src/combination.hpp
  isVerificationFile: true
  path: test/DPL_5_D.test.cpp
  requiredBy: []
  timestamp: '2020-11-27 17:14:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/DPL_5_D.test.cpp
layout: document
redirect_from:
- /verify/test/DPL_5_D.test.cpp
- /verify/test/DPL_5_D.test.cpp.html
title: test/DPL_5_D.test.cpp
---
