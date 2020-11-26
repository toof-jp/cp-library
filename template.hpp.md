---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: binary_indexed_tree.hpp
    title: binary_indexed_tree.hpp
  - icon: ':heavy_check_mark:'
    path: combination.hpp
    title: combination.hpp
  - icon: ':heavy_check_mark:'
    path: cumulative_sum.hpp
    title: cumulative_sum.hpp
  - icon: ':heavy_check_mark:'
    path: debug.hpp
    title: debug.hpp
  - icon: ':heavy_check_mark:'
    path: dijkstra.hpp
    title: dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: div_round_up.hpp
    title: div_round_up.hpp
  - icon: ':heavy_check_mark:'
    path: modint.hpp
    title: modint.hpp
  - icon: ':heavy_check_mark:'
    path: popcount.hpp
    title: popcount.hpp
  - icon: ':heavy_check_mark:'
    path: powmod.hpp
    title: powmod.hpp
  - icon: ':heavy_check_mark:'
    path: prime_factorization.hpp
    title: prime_factorization.hpp
  - icon: ':heavy_check_mark:'
    path: segment_tree.hpp
    title: segment_tree.hpp
  - icon: ':heavy_check_mark:'
    path: union_find.hpp
    title: union_find.hpp
  - icon: ':warning:'
    path: vector.hpp
    title: vector.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_A.test.cpp
    title: verify/DPL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_B.test.cpp
    title: verify/DPL_5_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_D.test.cpp
    title: verify/DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/DPL_5_E.test.cpp
    title: verify/DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/binary_indexed_tree.test.cpp
    title: verify/binary_indexed_tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/cumulative_sum.test.cpp
    title: verify/cumulative_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/debug.test.cpp
    title: verify/debug.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/dijkstra.test.cpp
    title: verify/dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/div_round_up.test.cpp
    title: verify/div_round_up.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/popcount.test.cpp
    title: verify/popcount.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/powmod.test.cpp
    title: verify/powmod.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/prime_factorization.test.cpp
    title: verify/prime_factorization.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/segment_tree.test.cpp
    title: verify/segment_tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/template.test.cpp
    title: verify/template.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/union_find.test.cpp
    title: verify/union_find.test.cpp
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
  path: template.hpp
  requiredBy:
  - union_find.hpp
  - binary_indexed_tree.hpp
  - div_round_up.hpp
  - prime_factorization.hpp
  - powmod.hpp
  - popcount.hpp
  - segment_tree.hpp
  - modint.hpp
  - combination.hpp
  - cumulative_sum.hpp
  - debug.hpp
  - dijkstra.hpp
  - vector.hpp
  timestamp: '2020-10-10 18:22:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/segment_tree.test.cpp
  - verify/div_round_up.test.cpp
  - verify/template.test.cpp
  - verify/DPL_5_D.test.cpp
  - verify/union_find.test.cpp
  - verify/dijkstra.test.cpp
  - verify/DPL_5_B.test.cpp
  - verify/cumulative_sum.test.cpp
  - verify/popcount.test.cpp
  - verify/prime_factorization.test.cpp
  - verify/DPL_5_E.test.cpp
  - verify/binary_indexed_tree.test.cpp
  - verify/debug.test.cpp
  - verify/DPL_5_A.test.cpp
  - verify/powmod.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
