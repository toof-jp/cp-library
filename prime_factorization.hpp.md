---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/prime_factorization.test.cpp
    title: verify/prime_factorization.test.cpp
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
    \ \"prime_factorization.hpp\"\n\nmap<ll, ll> prime_factorization(ll n) {\n  map<ll,\
    \ ll> m;\n  for (ll i = 2; i*i <= n; i++) {\n    while (n%i == 0) {\n      m[i]++;\n\
    \      n /= i;\n    }\n  }\n  if (n != 1) m[n]++;\n  return m;\n}\n"
  code: "#pragma once\n#include \"template.hpp\"\n\nmap<ll, ll> prime_factorization(ll\
    \ n) {\n  map<ll, ll> m;\n  for (ll i = 2; i*i <= n; i++) {\n    while (n%i ==\
    \ 0) {\n      m[i]++;\n      n /= i;\n    }\n  }\n  if (n != 1) m[n]++;\n  return\
    \ m;\n}\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: prime_factorization.hpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/prime_factorization.test.cpp
documentation_of: prime_factorization.hpp
layout: document
redirect_from:
- /library/prime_factorization.hpp
- /library/prime_factorization.hpp.html
title: prime_factorization.hpp
---
