---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/binary_indexed_tree.hpp
    title: src/binary_indexed_tree.hpp
  - icon: ':heavy_check_mark:'
    path: src/combination.hpp
    title: src/combination.hpp
  - icon: ':heavy_check_mark:'
    path: src/cumulative_sum.hpp
    title: src/cumulative_sum.hpp
  - icon: ':heavy_check_mark:'
    path: src/debug.hpp
    title: src/debug.hpp
  - icon: ':heavy_check_mark:'
    path: src/dijkstra.hpp
    title: src/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: src/div_round_up.hpp
    title: src/div_round_up.hpp
  - icon: ':heavy_check_mark:'
    path: src/modint.hpp
    title: src/modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  - icon: ':heavy_check_mark:'
    path: src/powmod.hpp
    title: src/powmod.hpp
  - icon: ':heavy_check_mark:'
    path: src/prime_factorization.hpp
    title: src/prime_factorization.hpp
  - icon: ':heavy_check_mark:'
    path: src/segment_tree.hpp
    title: src/segment_tree.hpp
  - icon: ':heavy_check_mark:'
    path: src/union_find.hpp
    title: src/union_find.hpp
  - icon: ':warning:'
    path: src/vector.hpp
    title: src/vector.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/DPL_5_A.test.cpp
    title: test/DPL_5_A.test.cpp
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
    path: test/binary_indexed_tree.test.cpp
    title: test/binary_indexed_tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/cumulative_sum.test.cpp
    title: test/cumulative_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/debug.test.cpp
    title: test/debug.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/dijkstra.test.cpp
    title: test/dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/div_round_up.test.cpp
    title: test/div_round_up.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/popcount.test.cpp
    title: test/popcount.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/powmod.test.cpp
    title: test/powmod.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/prime_factorization.test.cpp
    title: test/prime_factorization.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/segment_tree.test.cpp
    title: test/segment_tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/template.test.cpp
    title: test/template.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/union_find.test.cpp
    title: test/union_find.test.cpp
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
  - src/cumulative_sum.hpp
  - src/div_round_up.hpp
  - src/union_find.hpp
  - src/binary_indexed_tree.hpp
  - src/prime_factorization.hpp
  - src/modint.hpp
  - src/powmod.hpp
  - src/dijkstra.hpp
  - src/popcount.hpp
  - src/combination.hpp
  - src/segment_tree.hpp
  - src/vector.hpp
  - src/debug.hpp
  timestamp: '2020-11-26 22:58:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/dijkstra.test.cpp
  - test/segment_tree.test.cpp
  - test/cumulative_sum.test.cpp
  - test/DPL_5_D.test.cpp
  - test/prime_factorization.test.cpp
  - test/div_round_up.test.cpp
  - test/DPL_5_B.test.cpp
  - test/powmod.test.cpp
  - test/popcount.test.cpp
  - test/DPL_5_A.test.cpp
  - test/union_find.test.cpp
  - test/debug.test.cpp
  - test/binary_indexed_tree.test.cpp
  - test/template.test.cpp
  - test/DPL_5_E.test.cpp
documentation_of: src/template.hpp
layout: document
redirect_from:
- /library/src/template.hpp
- /library/src/template.hpp.html
title: src/template.hpp
---
