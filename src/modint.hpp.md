---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/DPL_5_B.test.cpp
    title: test/DPL_5_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/DPL_5_D.test.cpp
    title: test/DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/DPL_5_E.test.cpp
    title: test/DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/segment_tree.test.cpp
    title: test/segment_tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n\
    #define rep(i, n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll\
    \ i = l; i < (ll)r; i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n\
    #define per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v),\
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
    mint operator\"\" _mi(unsigned long long n) { return mint(n); }\n"
  code: "#pragma once\n#include \"template.hpp\"\n\ntemplate <ll Mod>\nstruct ModInt\
    \ {\n  ll n;\n\n  ModInt(const ll x = 0) : n(x) {\n    while (n < 0) n += Mod;\n\
    \    n %= Mod;\n  }\n\n  inline constexpr ModInt operator+(const ModInt r) const\
    \ noexcept { return ModInt(*this) += r; }\n  inline constexpr ModInt operator-(const\
    \ ModInt r) const noexcept { return ModInt(*this) -= r; }\n  inline constexpr\
    \ ModInt operator*(const ModInt r) const noexcept { return ModInt(*this) *= r;\
    \ }\n  inline constexpr ModInt operator/(const ModInt r) const noexcept { return\
    \ ModInt(*this) /= r; }\n  inline constexpr ModInt &operator+=(const ModInt r)\
    \ noexcept {\n    n += r.n;\n    if (n >= Mod) n -= Mod;\n    return *this;\n\
    \  }\n  inline constexpr ModInt &operator-=(const ModInt r) noexcept {\n    if\
    \ (n < r.n) n += Mod;\n    n -= r.n;\n    return *this;\n  }\n  inline constexpr\
    \ ModInt &operator*=(const ModInt r) noexcept {\n    n = n * r.n % Mod;\n    return\
    \ *this;\n  }\n  inline constexpr ModInt &operator/=(const ModInt r) noexcept\
    \ { return *this *= r.inv(); }\n\n  inline constexpr ModInt pow(ll x) const noexcept\
    \ {\n    ModInt<Mod> ret(1), tmp(*this);\n    while (x) {\n      if (x&1) ret\
    \ *= tmp;\n      tmp *= tmp;\n      x >>= 1;\n    }\n    return ret;\n  }\n  inline\
    \ constexpr ModInt inv() const noexcept { return pow(Mod-2); }\n\n  friend ostream&\
    \ operator<<(ostream& os, const ModInt& obj) { return os << obj.n; }\n  friend\
    \ istream& operator>>(istream& is, ModInt& obj) {\n    ll t;\n    is >> t;\n \
    \   obj = ModInt(t);\n    return is;\n  }\n};\n\nconstexpr ll mod = 1000000007;\n\
    using mint = ModInt<mod>;\nmint operator\"\" _mi(unsigned long long n) { return\
    \ mint(n); }\n"
  dependsOn:
  - src/template.hpp
  isVerificationFile: false
  path: src/modint.hpp
  requiredBy: []
  timestamp: '2020-11-26 22:58:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/DPL_5_D.test.cpp
  - test/DPL_5_E.test.cpp
  - test/segment_tree.test.cpp
  - test/DPL_5_B.test.cpp
documentation_of: src/modint.hpp
layout: document
redirect_from:
- /library/src/modint.hpp
- /library/src/modint.hpp.html
title: src/modint.hpp
---
