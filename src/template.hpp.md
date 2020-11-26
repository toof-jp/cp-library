---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/binary_indexed_tree.hpp
    title: src/binary_indexed_tree.hpp
  - icon: ':warning:'
    path: src/combination.hpp
    title: src/combination.hpp
  - icon: ':warning:'
    path: src/cumulative_sum.hpp
    title: src/cumulative_sum.hpp
  - icon: ':warning:'
    path: src/debug.hpp
    title: src/debug.hpp
  - icon: ':warning:'
    path: src/dijkstra.hpp
    title: src/dijkstra.hpp
  - icon: ':warning:'
    path: src/div_round_up.hpp
    title: src/div_round_up.hpp
  - icon: ':warning:'
    path: src/modint.hpp
    title: src/modint.hpp
  - icon: ':warning:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  - icon: ':warning:'
    path: src/powmod.hpp
    title: src/powmod.hpp
  - icon: ':warning:'
    path: src/prime_factorization.hpp
    title: src/prime_factorization.hpp
  - icon: ':warning:'
    path: src/segment_tree.hpp
    title: src/segment_tree.hpp
  - icon: ':warning:'
    path: src/union_find.hpp
    title: src/union_find.hpp
  - icon: ':warning:'
    path: src/vector.hpp
    title: src/vector.hpp
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
    \ cout << fixed << setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define rep(i,\
    \ n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l; i < (ll)r;\
    \ i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define per3(i, l,\
    \ r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v), end(v)\n#define\
    \ rall(v) rbegin(v), rend(v)\ntemplate<class T, class U> inline void cmax(T &a,\
    \ U b) { if (a < b) a = b; }\ntemplate<class T, class U> inline void cmin(T &a,\
    \ U b) { if (a > b) a = b; }\nconstexpr char el = '\\n';\ntemplate<class T, class\
    \ U> ostream &operator<<(ostream &os, const pair<T, U> &p) { os << p.first <<\
    \ \" \" << p.second; return os; }\ntemplate<class T, class U> istream &operator>>(istream\
    \ &is, pair<T, U> &p) { is >> p.first >> p.second; return is; }\ntemplate<class\
    \ T> ostream &operator<<(ostream &os, const vector<T> &v) { rep(i, v.size()) os\
    \ << v[i] << (i+1 != (ll)v.size() ? \" \" : \"\"); return os; }\ntemplate<class\
    \ T> istream &operator>>(istream &is, vector<T> &v) { for(T &i : v) is >> i; return\
    \ is; }\nstruct IoSetup {\n  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false);\
    \ cout << fixed << setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/template.hpp
  requiredBy:
  - src/union_find.hpp
  - src/binary_indexed_tree.hpp
  - src/div_round_up.hpp
  - src/prime_factorization.hpp
  - src/powmod.hpp
  - src/popcount.hpp
  - src/segment_tree.hpp
  - src/modint.hpp
  - src/combination.hpp
  - src/cumulative_sum.hpp
  - src/debug.hpp
  - src/dijkstra.hpp
  - src/vector.hpp
  timestamp: '2020-11-26 22:58:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/template.hpp
layout: document
redirect_from:
- /library/src/template.hpp
- /library/src/template.hpp.html
title: src/template.hpp
---
