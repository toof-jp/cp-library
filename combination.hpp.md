---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_B.test.cpp
    title: verify/DPL_5_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_D.test.cpp
    title: verify/DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_E.test.cpp
    title: verify/DPL_5_E.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
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
    #line 3 \"combination.hpp\"\n\n// T modint\ntemplate<class T>\nstruct Combination\
    \ {\n  vector<T> fact, inv_fact;\n  Combination(ll n) : fact(n+1), inv_fact(n+1)\
    \ {\n    fact[0] = T(1);\n    for (ll i = 1; i <= n; i++) fact[i] = fact[i-1]\
    \ * static_cast<T>(i);\n    inv_fact[n] = fact[n].inv();\n    for (ll i = n; i\
    \ > 0; i--) inv_fact[i-1] = inv_fact[i] * static_cast<T>(i);\n  }\n\n  T P(ll\
    \ n, ll k) const {\n    if (n < k or k < 0) return T(0);\n    return fact[n] *\
    \ inv_fact[n-k];\n  }\n\n  T C(ll n, ll k) const {\n    if (n < k or k < 0) return\
    \ T(0);\n    return fact[n] * inv_fact[n-k] * inv_fact[k];\n  }\n\n  T H(ll n,\
    \ ll k) const {\n    if (n < 0 or k < 0) return T(0);\n    if (n == 0 and k ==\
    \ 0) return T(1);\n    return C(n+k-1, n-1);\n  }\n};\n"
  code: "#pragma once\n#include \"template.hpp\"\n\n// T modint\ntemplate<class T>\n\
    struct Combination {\n  vector<T> fact, inv_fact;\n  Combination(ll n) : fact(n+1),\
    \ inv_fact(n+1) {\n    fact[0] = T(1);\n    for (ll i = 1; i <= n; i++) fact[i]\
    \ = fact[i-1] * static_cast<T>(i);\n    inv_fact[n] = fact[n].inv();\n    for\
    \ (ll i = n; i > 0; i--) inv_fact[i-1] = inv_fact[i] * static_cast<T>(i);\n  }\n\
    \n  T P(ll n, ll k) const {\n    if (n < k or k < 0) return T(0);\n    return\
    \ fact[n] * inv_fact[n-k];\n  }\n\n  T C(ll n, ll k) const {\n    if (n < k or\
    \ k < 0) return T(0);\n    return fact[n] * inv_fact[n-k] * inv_fact[k];\n  }\n\
    \n  T H(ll n, ll k) const {\n    if (n < 0 or k < 0) return T(0);\n    if (n ==\
    \ 0 and k == 0) return T(1);\n    return C(n+k-1, n-1);\n  }\n};\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: combination.hpp
  requiredBy: []
  timestamp: '2020-10-10 18:22:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/DPL_5_D.test.cpp
  - verify/DPL_5_B.test.cpp
  - verify/DPL_5_E.test.cpp
documentation_of: combination.hpp
layout: document
redirect_from:
- /library/combination.hpp
- /library/combination.hpp.html
title: combination.hpp
---
