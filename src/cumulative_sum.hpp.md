---
data:
  _extendedDependsOn:
  - icon: ':warning:'
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
    #line 3 \"src/cumulative_sum.hpp\"\n\ntemplate<class T>\nstruct CumulativeSum\
    \ {\n  vector<T> v;\n\n  CumulativeSum(size_t n) : v(n+1) {};\n  CumulativeSum(vector<T>\
    \ v_) {\n    v.resize(v_.size()+1);\n    rep(i, v_.size())\n      v[i+1] = v_[i];\n\
    \  };\n\n  void add(size_t i, T x) {\n    v[i+1] += x;\n  }\n\n  // O(N)\n  void\
    \ build() {\n    if (v.size() == 0) return;\n    rep(i, v.size()-1)\n      v[i+1]\
    \ += v[i];\n  }\n\n  // O(1) sum [l, r]\n  T sum(size_t l, size_t r) const {\n\
    \    return l == 0 ? v[r+1] : v[r+1]-v[l];\n  }\n\n  // O(1) sum [0, r]\n  T sum(size_t\
    \ r) const {\n    return v[r+1];\n  }\n\n  T& operator[](size_t i) {\n    return\
    \ v[i];\n  }\n\n  const T& operator[](size_t i) const {\n    return v[i];\n  }\n\
    };\n"
  code: "#pragma once\n#include \"src/template.hpp\"\n\ntemplate<class T>\nstruct\
    \ CumulativeSum {\n  vector<T> v;\n\n  CumulativeSum(size_t n) : v(n+1) {};\n\
    \  CumulativeSum(vector<T> v_) {\n    v.resize(v_.size()+1);\n    rep(i, v_.size())\n\
    \      v[i+1] = v_[i];\n  };\n\n  void add(size_t i, T x) {\n    v[i+1] += x;\n\
    \  }\n\n  // O(N)\n  void build() {\n    if (v.size() == 0) return;\n    rep(i,\
    \ v.size()-1)\n      v[i+1] += v[i];\n  }\n\n  // O(1) sum [l, r]\n  T sum(size_t\
    \ l, size_t r) const {\n    return l == 0 ? v[r+1] : v[r+1]-v[l];\n  }\n\n  //\
    \ O(1) sum [0, r]\n  T sum(size_t r) const {\n    return v[r+1];\n  }\n\n  T&\
    \ operator[](size_t i) {\n    return v[i];\n  }\n\n  const T& operator[](size_t\
    \ i) const {\n    return v[i];\n  }\n};\n"
  dependsOn:
  - src/template.hpp
  isVerificationFile: false
  path: src/cumulative_sum.hpp
  requiredBy: []
  timestamp: '2020-11-27 15:20:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/cumulative_sum.hpp
layout: document
redirect_from:
- /library/src/cumulative_sum.hpp
- /library/src/cumulative_sum.hpp.html
title: src/cumulative_sum.hpp
---
