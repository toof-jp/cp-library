---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/segment_tree.test.cpp
    title: verify/segment_tree.test.cpp
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
    #line 3 \"segment_tree.hpp\"\n\ntemplate<class Monoid>\nstruct SegmentTree {\n\
    \  using T = typename Monoid::value_type;\n\n  ll n;\n  vector<T> tree;\n  const\
    \ Monoid ope;\n\n  SegmentTree(ll n_) : n(n_) {\n    tree.assign(2*n, ope.ide);\n\
    \  }\n\n  void build(const vector<T>& v) {\n    rep(i, v.size())\n      tree[i+n]\
    \ = v[i];\n    per(i, n)\n      tree[i] = ope(tree[i*2], tree[i*2+1]);\n  }\n\n\
    \  void change(ll p, const T& x) {\n    p += n;\n    tree[p] = x;\n    while (p\
    \ >>= 1)\n      tree[p] = ope(tree[p*2], tree[p*2+1]);\n  }\n\n  T query(ll l,\
    \ ll r) const {\n    T l_res{};\n    T r_res{};\n    for (l += n, r+= n; l < r;\
    \ l >>= 1, r >>= 1) {\n      if (l&1) l_res = ope(l_res, tree[l++]);\n      if\
    \ (r&1) r_res = ope(tree[--r], r_res);\n    }\n    return ope(l_res, r_res);\n\
    \  }\n\n  T operator[](ll i) {\n    return tree[i+n];\n  }\n};\n"
  code: "#pragma once\n#include \"template.hpp\"\n\ntemplate<class Monoid>\nstruct\
    \ SegmentTree {\n  using T = typename Monoid::value_type;\n\n  ll n;\n  vector<T>\
    \ tree;\n  const Monoid ope;\n\n  SegmentTree(ll n_) : n(n_) {\n    tree.assign(2*n,\
    \ ope.ide);\n  }\n\n  void build(const vector<T>& v) {\n    rep(i, v.size())\n\
    \      tree[i+n] = v[i];\n    per(i, n)\n      tree[i] = ope(tree[i*2], tree[i*2+1]);\n\
    \  }\n\n  void change(ll p, const T& x) {\n    p += n;\n    tree[p] = x;\n   \
    \ while (p >>= 1)\n      tree[p] = ope(tree[p*2], tree[p*2+1]);\n  }\n\n  T query(ll\
    \ l, ll r) const {\n    T l_res{};\n    T r_res{};\n    for (l += n, r+= n; l\
    \ < r; l >>= 1, r >>= 1) {\n      if (l&1) l_res = ope(l_res, tree[l++]);\n  \
    \    if (r&1) r_res = ope(tree[--r], r_res);\n    }\n    return ope(l_res, r_res);\n\
    \  }\n\n  T operator[](ll i) {\n    return tree[i+n];\n  }\n};\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: segment_tree.hpp
  requiredBy: []
  timestamp: '2020-10-10 18:22:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/segment_tree.test.cpp
documentation_of: segment_tree.hpp
layout: document
redirect_from:
- /library/segment_tree.hpp
- /library/segment_tree.hpp.html
title: segment_tree.hpp
---
