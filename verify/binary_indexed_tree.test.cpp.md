---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: binary_indexed_tree.hpp
    title: binary_indexed_tree.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"verify/binary_indexed_tree.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#line 2 \"template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nusing\
    \ pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define rep(i, n) for(ll i = 0;\
    \ i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l; i < (ll)r; i++)\n#define\
    \ per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define per3(i, l, r) for(ll i =\
    \ (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v), end(v)\ntemplate<class T,\
    \ class U> inline void cmax(T &a, U b) { if (a < b) a = b; }\ntemplate<class T,\
    \ class U> inline void cmin(T &a, U b) { if (a > b) a = b; }\nconstexpr char el\
    \ = '\\n';\ntemplate<class T, class U> ostream &operator<<(ostream &os, const\
    \ pair<T, U> &p) { os << p.first << \" \" << p.second; return os; }\ntemplate<class\
    \ T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is >> p.first\
    \ >> p.second; return is; }\ntemplate<class T> ostream &operator<<(ostream &os,\
    \ const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != (ll)v.size() ?\
    \ \" \" : \"\"); return os; }\ntemplate<class T> istream &operator>>(istream &is,\
    \ vector<T> &v) { for(T &i : v) is >> i; return is; }\nstruct IoSetup {\n  IoSetup()\
    \ { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(15);\
    \ cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3 \"binary_indexed_tree.hpp\"\
    \n\ntemplate<typename ComumutativeMonoid>\nstruct BinaryIndexedTree {\n  using\
    \ T = typename ComumutativeMonoid::value_type;\n  // 1-indexed\n  ll n;\n  vector<T>\
    \ tree;\n  const ComumutativeMonoid ope;\n\n  BinaryIndexedTree(ll n) : n(n),\
    \ ope(ComumutativeMonoid()) {\n    tree.assign(n+1, ope.ide);\n  }\n\n  void add(ll\
    \ p, T a) {\n    for (ll x = p+1; x <= n; x += x&-x) {\n      tree[x] = ope(tree[x],\
    \ a);\n    }\n  }\n\n  // sum [0, r)\n  T sum(ll r) const {\n    T sum = ope.ide;\n\
    \    for (ll x = r; x > 0; x -= x&-x) {\n      sum = ope(sum, tree[x]);\n    }\n\
    \    return sum;\n  }\n\n  /*\n  // bit[1] + bit[2] + ... + bit[x] >= w;\n  ll\
    \ lower_bound(T w) const {\n    if (w <= 0) return 0;\n    ll x = 0, r = 1;\n\
    \    while (r < n) r <<= 1;\n    for (ll k = r; k > 0; k >>= 1){\n      if(x+k\
    \ <= n && tree[x+k] < w){\n        w -= tree[x+k];\n        x += k;\n      }\n\
    \    }\n    return x+1;\n  }\n  */\n};\n#line 5 \"verify/binary_indexed_tree.test.cpp\"\
    \n\ntemplate <class T>\nstruct Plus {\n  using value_type = T;\n\n  T operator()(const\
    \ T& l, const T& r) const {\n    return l + r;\n  }\n  const T ide{};\n};\n\n\
    int main() {\n  ll n, q;\n  cin >> n >> q;\n\n  BinaryIndexedTree<Plus<ll>> bit(n);\n\
    \n  rep(i, n) {\n    ll a;\n    cin >> a;\n    bit.add(i, a);\n  }\n\n  rep(i,\
    \ q) {\n    ll t, a, b;\n    cin >> t >> a >> b;\n    if (t == 0) {\n      bit.add(a,\
    \ b);\n    } else {\n      cout << bit.sum(b) - bit.sum(a) << el;\n    }\n  }\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../template.hpp\"\n#include \"../binary_indexed_tree.hpp\"\n\ntemplate\
    \ <class T>\nstruct Plus {\n  using value_type = T;\n\n  T operator()(const T&\
    \ l, const T& r) const {\n    return l + r;\n  }\n  const T ide{};\n};\n\nint\
    \ main() {\n  ll n, q;\n  cin >> n >> q;\n\n  BinaryIndexedTree<Plus<ll>> bit(n);\n\
    \n  rep(i, n) {\n    ll a;\n    cin >> a;\n    bit.add(i, a);\n  }\n\n  rep(i,\
    \ q) {\n    ll t, a, b;\n    cin >> t >> a >> b;\n    if (t == 0) {\n      bit.add(a,\
    \ b);\n    } else {\n      cout << bit.sum(b) - bit.sum(a) << el;\n    }\n  }\n\
    }\n"
  dependsOn:
  - template.hpp
  - binary_indexed_tree.hpp
  isVerificationFile: true
  path: verify/binary_indexed_tree.test.cpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/binary_indexed_tree.test.cpp
layout: document
redirect_from:
- /verify/verify/binary_indexed_tree.test.cpp
- /verify/verify/binary_indexed_tree.test.cpp.html
title: verify/binary_indexed_tree.test.cpp
---
