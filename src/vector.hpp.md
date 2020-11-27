---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
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
    #line 3 \"src/vector.hpp\"\n\ntemplate<class T>\nstruct Vector : public std::vector<T>\
    \ {\n  const ll l, r;\n\n  // [0, r)\n  Vector(ll r_) : vector<T>(r_), l(0), r(r_)\
    \ {};\n\n  // [l, r)\n  Vector(ll l_, ll r_, const T& value = T())\n    : vector<T>(r_-l_,\
    \ value), l(l_), r(r_) {};\n\n  T& operator[](ll i) {\n    return vector<T>::operator[](i-l);\n\
    \  }\n};\n"
  code: "#pragma once\n#include \"template.hpp\"\n\ntemplate<class T>\nstruct Vector\
    \ : public std::vector<T> {\n  const ll l, r;\n\n  // [0, r)\n  Vector(ll r_)\
    \ : vector<T>(r_), l(0), r(r_) {};\n\n  // [l, r)\n  Vector(ll l_, ll r_, const\
    \ T& value = T())\n    : vector<T>(r_-l_, value), l(l_), r(r_) {};\n\n  T& operator[](ll\
    \ i) {\n    return vector<T>::operator[](i-l);\n  }\n};\n"
  dependsOn:
  - src/template.hpp
  isVerificationFile: false
  path: src/vector.hpp
  requiredBy: []
  timestamp: '2020-11-26 22:58:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/vector.hpp
layout: document
redirect_from:
- /library/src/vector.hpp
- /library/src/vector.hpp.html
title: src/vector.hpp
---
