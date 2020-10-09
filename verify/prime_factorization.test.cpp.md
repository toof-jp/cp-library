---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: prime_factorization.hpp
    title: prime_factorization.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
  bundledCode: "#line 1 \"verify/prime_factorization.test.cpp\"\n#define PROBLEM \"\
    http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\n\n#line 2\
    \ \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\nusing pl = pair<ll, ll>;\nusing vl = vector<ll>;\n#define rep(i,\
    \ n) for(ll i = 0; i < (ll)n; i++)\n#define rep3(i, l, r) for(ll i = l; i < (ll)r;\
    \ i++)\n#define per(i, n) for(ll i = (ll)n-1; i >= 0; i--)\n#define per3(i, l,\
    \ r) for(ll i = (ll)r-1; i >= (ll)l; i--)\n#define all(v) begin(v), end(v)\ntemplate<class\
    \ T, class U> inline void cmax(T &a, U b) { if (a < b) a = b; }\ntemplate<class\
    \ T, class U> inline void cmin(T &a, U b) { if (a > b) a = b; }\nconstexpr char\
    \ el = '\\n';\ntemplate<class T, class U> ostream &operator<<(ostream &os, const\
    \ pair<T, U> &p) { os << p.first << \" \" << p.second; return os; }\ntemplate<class\
    \ T, class U> istream &operator>>(istream &is, pair<T, U> &p) { is >> p.first\
    \ >> p.second; return is; }\ntemplate<class T> ostream &operator<<(ostream &os,\
    \ const vector<T> &v) { rep(i, v.size()) os << v[i] << (i+1 != (ll)v.size() ?\
    \ \" \" : \"\"); return os; }\ntemplate<class T> istream &operator>>(istream &is,\
    \ vector<T> &v) { for(T &i : v) is >> i; return is; }\nstruct IoSetup {\n  IoSetup()\
    \ { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(15);\
    \ cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3 \"prime_factorization.hpp\"\
    \n\nmap<ll, ll> prime_factorization(ll n) {\n  map<ll, ll> m;\n  for (ll i = 2;\
    \ i*i <= n; i++) {\n    while (n%i == 0) {\n      m[i]++;\n      n /= i;\n   \
    \ }\n  }\n  if (n != 1) m[n]++;\n  return m;\n}\n#line 5 \"verify/prime_factorization.test.cpp\"\
    \n\nint main() {\n  ll n;\n  cin >> n;\n\n  auto m = prime_factorization(n);\n\
    \n  cout << n << \": \";\n  vl ans;\n  for (auto&& i : m) {\n    rep(j, i.second)\
    \ {\n      ans.push_back(i.first);\n    }\n  }\n  cout << ans << el;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
    \n\n#include \"../template.hpp\"\n#include \"../prime_factorization.hpp\"\n\n\
    int main() {\n  ll n;\n  cin >> n;\n\n  auto m = prime_factorization(n);\n\n \
    \ cout << n << \": \";\n  vl ans;\n  for (auto&& i : m) {\n    rep(j, i.second)\
    \ {\n      ans.push_back(i.first);\n    }\n  }\n  cout << ans << el;\n}\n"
  dependsOn:
  - template.hpp
  - prime_factorization.hpp
  isVerificationFile: true
  path: verify/prime_factorization.test.cpp
  requiredBy: []
  timestamp: '2020-10-09 19:22:54+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/prime_factorization.test.cpp
layout: document
redirect_from:
- /verify/verify/prime_factorization.test.cpp
- /verify/verify/prime_factorization.test.cpp.html
title: verify/prime_factorization.test.cpp
---
