---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  - icon: ':heavy_check_mark:'
    path: union_find.hpp
    title: union_find.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"verify/union_find.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#line 2 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    using ll = long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define\
    \ rep(i, n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l;\
    \ i < (ll)r; i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define\
    \ per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v),\
    \ end(v)\ntemplate<class T, class U> inline void cmax(T &a, U b) { if (a < b)\
    \ a = b; }\ntemplate<class T, class U> inline void cmin(T &a, U b) { if (a > b)\
    \ a = b; }\nconstexpr char el = '\\n';\ntemplate<class T, class U> ostream &operator<<(ostream\
    \ &os, const pair<T, U> &p) { os << p.first << \" \" << p.second; return os; }\n\
    template<class T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is\
    \ >> p.first >> p.second; return is; }\ntemplate<class T> ostream &operator<<(ostream\
    \ &os, const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != v.size() ?\
    \ \" \" : \"\"); return os; }\ntemplate<class T> istream &operator>>(istream &is,\
    \ vector<T> &v) { for(T &i : v) is >> i; return is; }\nstruct IoSetup {\n  IoSetup()\
    \ { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(15);\
    \ cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3 \"union_find.hpp\"\
    \n\nstruct UnionFind {\n  struct Node {\n    ll parent;\n    ll size;\n  };\n\
    \  vector<Node> data;\n  ll num;\n\n  UnionFind(ll size) : data(size) {\n    rep(i,\
    \ size) {\n      data[i].parent = i;\n      data[i].size = 1;\n    }\n    num\
    \ = size;\n  }\n\n  ll find(ll x) {\n    while (data[x].parent != x) {\n     \
    \ ll p = data[x].parent;\n      data[x].parent = data[p].parent;\n      x = p;\n\
    \    }\n    return x;\n  }\n\n  void unite(ll x, ll y) {\n    x = find(x);\n \
    \   y = find(y);\n    if (x == y) return;\n\n    if (data[x].size < data[y].size)\
    \ swap(x, y);\n    data[y].parent = x;\n    data[x].size += data[y].size;\n  \
    \  num--;\n  }\n\n  bool same(ll x, ll y) {\n    return find(x) == find(y);\n\
    \  }\n\n  ll count() const {\n    return num;\n  }\n};\n#line 5 \"verify/union_find.test.cpp\"\
    \n\nint main() {\n  ll n, q;\n  cin >> n >> q;\n\n  UnionFind uf(n);\n  rep(i,\
    \ q) {\n    ll t, u, v;\n    cin >> t >> u >> v;\n    if (t == 0) {\n      uf.unite(u,\
    \ v);\n    } else {\n      cout << uf.same(u, v) << el;\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../template.hpp\"\n#include \"../union_find.hpp\"\n\nint main() {\n  ll n,\
    \ q;\n  cin >> n >> q;\n\n  UnionFind uf(n);\n  rep(i, q) {\n    ll t, u, v;\n\
    \    cin >> t >> u >> v;\n    if (t == 0) {\n      uf.unite(u, v);\n    } else\
    \ {\n      cout << uf.same(u, v) << el;\n    }\n  }\n}\n"
  dependsOn:
  - template.hpp
  - union_find.hpp
  isVerificationFile: true
  path: verify/union_find.test.cpp
  requiredBy: []
  timestamp: '2020-09-27 19:05:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/union_find.test.cpp
layout: document
redirect_from:
- /verify/verify/union_find.test.cpp
- /verify/verify/union_find.test.cpp.html
title: verify/union_find.test.cpp
---
