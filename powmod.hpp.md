---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_A.test.cpp
    title: verify/DPL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/powmod.test.cpp
    title: verify/powmod.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n\
    #define rep(i, n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll\
    \ i = l; i < (ll)r; i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n\
    #define per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v),\
    \ end(v)\ntemplate<class T, class U> inline void cmax(T &a, U b) { if (a < b)\
    \ a = b; }\ntemplate<class T, class U> inline void cmin(T &a, U b) { if (a > b)\
    \ a = b; }\nconstexpr char el = '\\n';\ntemplate<class T, class U> ostream &operator<<(ostream\
    \ &os, const pair<T, U> &p) { os << p.first << \" \" << p.second; return os; }\n\
    template<class T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is\
    \ >> p.first >> p.second; return is; }\ntemplate<class T> ostream &operator<<(ostream\
    \ &os, const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != (ll)v.size()\
    \ ? \" \" : \"\"); return os; }\ntemplate<class T> istream &operator>>(istream\
    \ &is, vector<T> &v) { for(T &i : v) is >> i; return is; }\nstruct IoSetup {\n\
    \  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed <<\
    \ setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3\
    \ \"powmod.hpp\"\n\nll powmod(ll a, ll n, ll p) {\n  ll res = 1;\n  while (n)\
    \ {\n    if (n&1) res = res * a % p;\n    a = a * a % p;\n    n >>= 1;\n  }\n\
    \  return res;\n}\n"
  code: "#pragma once\n#include \"template.hpp\"\n\nll powmod(ll a, ll n, ll p) {\n\
    \  ll res = 1;\n  while (n) {\n    if (n&1) res = res * a % p;\n    a = a * a\
    \ % p;\n    n >>= 1;\n  }\n  return res;\n}\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: powmod.hpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/DPL_5_A.test.cpp
  - verify/powmod.test.cpp
documentation_of: powmod.hpp
layout: document
redirect_from:
- /library/powmod.hpp
- /library/powmod.hpp.html
title: powmod.hpp
---
