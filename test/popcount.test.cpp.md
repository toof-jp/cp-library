---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/popcount.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#line 2 \"src/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    using ll = long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define\
    \ rep(i, n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l;\
    \ i < (ll)r; i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define\
    \ per3(i, l, r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v),\
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
    #line 3 \"src/popcount.hpp\"\n\nint popcount(int n) {\n  return __builtin_popcount(n);\n\
    }\n\nll popcount(ll n) {\n  return __builtin_popcountll(n);\n}\n#line 5 \"test/popcount.test.cpp\"\
    \n\nint main() {\n  assert(popcount(0b10010101) == 4);\n  assert(popcount(0b11010111)\
    \ == 6);\n  assert(popcount(0b00000000) == 0);\n\n  cout << \"Hello World\" <<\
    \ el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"src/template.hpp\"\n#include \"src/popcount.hpp\"\n\nint main()\
    \ {\n  assert(popcount(0b10010101) == 4);\n  assert(popcount(0b11010111) == 6);\n\
    \  assert(popcount(0b00000000) == 0);\n\n  cout << \"Hello World\" << el;\n}\n"
  dependsOn:
  - src/template.hpp
  - src/popcount.hpp
  isVerificationFile: true
  path: test/popcount.test.cpp
  requiredBy: []
  timestamp: '2020-11-27 17:14:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/popcount.test.cpp
layout: document
redirect_from:
- /verify/test/popcount.test.cpp
- /verify/test/popcount.test.cpp.html
title: test/popcount.test.cpp
---
