---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: powmod.hpp
    title: powmod.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
  bundledCode: "#line 1 \"verify/powmod.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#line 2 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
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
    #line 3 \"powmod.hpp\"\n\nll powmod(ll base, ll exp, ll mod) {\n  ll res = 1;\n\
    \  while (exp) {\n    if (exp&1) res = res * base % mod;\n    base = base * base\
    \ % mod;\n    exp >>= 1;\n  }\n  return res;\n}\n#line 5 \"verify/powmod.test.cpp\"\
    \n\nint main() {\n  int m, n;\n  cin >> m >> n;\n  cout << powmod(m, n, 1e9+7)\
    \ << el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include \"../template.hpp\"\n#include \"../powmod.hpp\"\n\nint main() {\n\
    \  int m, n;\n  cin >> m >> n;\n  cout << powmod(m, n, 1e9+7) << el;\n}\n"
  dependsOn:
  - template.hpp
  - powmod.hpp
  isVerificationFile: true
  path: verify/powmod.test.cpp
  requiredBy: []
  timestamp: '2020-10-16 19:19:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/powmod.test.cpp
layout: document
redirect_from:
- /verify/verify/powmod.test.cpp
- /verify/verify/powmod.test.cpp.html
title: verify/powmod.test.cpp
---
