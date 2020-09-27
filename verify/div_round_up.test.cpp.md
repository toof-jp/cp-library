---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  - icon: ':heavy_check_mark:'
    path: div_round_up.hpp
    title: div_round_up.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"verify/div_round_up.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
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
    \ cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3 \"div_round_up.hpp\"\
    \n\n// return ceil(n/m)\ninline ll div_round_up(ll n, ll m) {\n  return (n+m-1)\
    \ / m;\n}\n#line 5 \"verify/div_round_up.test.cpp\"\n\nint main() {\n  assert(div_round_up(5,\
    \ 3) == 2);\n  assert(div_round_up(0, 2) == 0);\n  assert(div_round_up(31, 7)\
    \ == 5);\n\n  cout << \"Hello World\" << el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../template.hpp\"\n#include \"../div_round_up.hpp\"\n\nint main()\
    \ {\n  assert(div_round_up(5, 3) == 2);\n  assert(div_round_up(0, 2) == 0);\n\
    \  assert(div_round_up(31, 7) == 5);\n\n  cout << \"Hello World\" << el;\n}\n"
  dependsOn:
  - template.hpp
  - div_round_up.hpp
  isVerificationFile: true
  path: verify/div_round_up.test.cpp
  requiredBy: []
  timestamp: '2020-04-27 01:07:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/div_round_up.test.cpp
layout: document
redirect_from:
- /verify/verify/div_round_up.test.cpp
- /verify/verify/div_round_up.test.cpp.html
title: verify/div_round_up.test.cpp
---
