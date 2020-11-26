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
    #line 3 \"src/union_find.hpp\"\n\nstruct UnionFind {\n  struct Node {\n    ll\
    \ parent;\n    ll size;\n  };\n  vector<Node> data;\n  ll num;\n\n  UnionFind(ll\
    \ size) : data(size) {\n    rep(i, size) {\n      data[i].parent = i;\n      data[i].size\
    \ = 1;\n    }\n    num = size;\n  }\n\n  ll find(ll x) {\n    while (data[x].parent\
    \ != x) {\n      ll p = data[x].parent;\n      data[x].parent = data[p].parent;\n\
    \      x = p;\n    }\n    return x;\n  }\n\n  void unite(ll x, ll y) {\n    x\
    \ = find(x);\n    y = find(y);\n    if (x == y) return;\n\n    if (data[x].size\
    \ < data[y].size) swap(x, y);\n    data[y].parent = x;\n    data[x].size += data[y].size;\n\
    \    num--;\n  }\n\n  bool same(ll x, ll y) {\n    return find(x) == find(y);\n\
    \  }\n\n  ll count() const {\n    return num;\n  }\n};\n"
  code: "#pragma once\n#include \"template.hpp\"\n\nstruct UnionFind {\n  struct Node\
    \ {\n    ll parent;\n    ll size;\n  };\n  vector<Node> data;\n  ll num;\n\n \
    \ UnionFind(ll size) : data(size) {\n    rep(i, size) {\n      data[i].parent\
    \ = i;\n      data[i].size = 1;\n    }\n    num = size;\n  }\n\n  ll find(ll x)\
    \ {\n    while (data[x].parent != x) {\n      ll p = data[x].parent;\n      data[x].parent\
    \ = data[p].parent;\n      x = p;\n    }\n    return x;\n  }\n\n  void unite(ll\
    \ x, ll y) {\n    x = find(x);\n    y = find(y);\n    if (x == y) return;\n\n\
    \    if (data[x].size < data[y].size) swap(x, y);\n    data[y].parent = x;\n \
    \   data[x].size += data[y].size;\n    num--;\n  }\n\n  bool same(ll x, ll y)\
    \ {\n    return find(x) == find(y);\n  }\n\n  ll count() const {\n    return num;\n\
    \  }\n};\n"
  dependsOn:
  - src/template.hpp
  isVerificationFile: false
  path: src/union_find.hpp
  requiredBy: []
  timestamp: '2020-11-26 22:58:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/union_find.hpp
layout: document
redirect_from:
- /library/src/union_find.hpp
- /library/src/union_find.hpp.html
title: src/union_find.hpp
---
