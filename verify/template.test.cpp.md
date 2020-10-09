---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"verify/template.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
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
    \ &os, const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != (ll)v.size()\
    \ ? \" \" : \"\"); return os; }\ntemplate<class T> istream &operator>>(istream\
    \ &is, vector<T> &v) { for(T &i : v) is >> i; return is; }\nstruct IoSetup {\n\
    \  IoSetup() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed <<\
    \ setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n#line 4\
    \ \"verify/template.test.cpp\"\n\nint main() {\n  ll n = 10;\n  vl vec = {3, 1,\
    \ 4, 1, 5, 9, 2, 6, 5, 3};\n  vl vec_rep, vec_rep3, vec_per, vec_per3;\n\n  rep(i,\
    \ n) vec_rep.push_back(vec[i]);\n  per(i, n) vec_per.push_back(vec[i]);\n  rep3(i,\
    \ 2, 7) vec_rep3.push_back(vec[i]);\n  per3(i, 2, 7) vec_per3.push_back(vec[i]);\n\
    \n  assert(vec_rep == vl({3, 1, 4, 1, 5, 9, 2, 6, 5, 3}));\n  assert(vec_per ==\
    \ vl({3, 5, 6, 2, 9, 5, 1, 4, 1, 3}));\n  assert(vec_rep3 == vl({4, 1, 5, 9, 2}));\n\
    \  assert(vec_per3 == vl({2, 9, 5, 1, 4}));\n\n  ll maxi = 0;\n  ll mini = 1LL<<60;\n\
    \  rep(i, n) {\n    cmax(maxi, vec[i]);\n    cmin(mini, vec[i]);\n  }\n  assert(maxi\
    \ == 9);\n  assert(mini == 1);\n\n  cout << \"Hello World\" << el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../template.hpp\"\n\nint main() {\n  ll n = 10;\n  vl vec = {3,\
    \ 1, 4, 1, 5, 9, 2, 6, 5, 3};\n  vl vec_rep, vec_rep3, vec_per, vec_per3;\n\n\
    \  rep(i, n) vec_rep.push_back(vec[i]);\n  per(i, n) vec_per.push_back(vec[i]);\n\
    \  rep3(i, 2, 7) vec_rep3.push_back(vec[i]);\n  per3(i, 2, 7) vec_per3.push_back(vec[i]);\n\
    \n  assert(vec_rep == vl({3, 1, 4, 1, 5, 9, 2, 6, 5, 3}));\n  assert(vec_per ==\
    \ vl({3, 5, 6, 2, 9, 5, 1, 4, 1, 3}));\n  assert(vec_rep3 == vl({4, 1, 5, 9, 2}));\n\
    \  assert(vec_per3 == vl({2, 9, 5, 1, 4}));\n\n  ll maxi = 0;\n  ll mini = 1LL<<60;\n\
    \  rep(i, n) {\n    cmax(maxi, vec[i]);\n    cmin(mini, vec[i]);\n  }\n  assert(maxi\
    \ == 9);\n  assert(mini == 1);\n\n  cout << \"Hello World\" << el;\n}\n"
  dependsOn:
  - template.hpp
  isVerificationFile: true
  path: verify/template.test.cpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/template.test.cpp
layout: document
redirect_from:
- /verify/verify/template.test.cpp
- /verify/verify/template.test.cpp.html
title: verify/template.test.cpp
---
