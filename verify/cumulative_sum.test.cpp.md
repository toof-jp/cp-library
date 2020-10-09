---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: cumulative_sum.hpp
    title: cumulative_sum.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516
  bundledCode: "#line 1 \"verify/cumulative_sum.test.cpp\"\n#define  PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516\"\
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
    \ setprecision(15); cerr << fixed << setprecision(15); }\n} io_setup;\n#line 3\
    \ \"cumulative_sum.hpp\"\n\ntemplate<class T>\nstruct CumulativeSum {\n  vector<T>\
    \ v;\n\n  CumulativeSum(size_t n) : v(n+1) {};\n  CumulativeSum(vector<T> v_)\
    \ {\n    v.resize(v_.size()+1);\n    rep(i, v_.size())\n      v[i+1] = v_[i];\n\
    \  };\n\n  void add(size_t i, T x) {\n    v[i+1] += x;\n  }\n\n  // O(N)\n  void\
    \ build() {\n    if (v.size() == 0) return;\n    rep(i, v.size()-1)\n      v[i+1]\
    \ += v[i];\n  }\n\n  // O(1) sum [l, r]\n  T sum(size_t l, size_t r) const {\n\
    \    return l == 0 ? v[r+1] : v[r+1]-v[l];\n  }\n\n  // O(1) sum [0, r]\n  T sum(size_t\
    \ r) const {\n    return v[r+1];\n  }\n\n  T& operator[](size_t i) {\n    return\
    \ v[i];\n  }\n\n  const T& operator[](size_t i) const {\n    return v[i];\n  }\n\
    };\n#line 5 \"verify/cumulative_sum.test.cpp\"\n\nint main() {\n  while (1) {\n\
    \    ll n, k;\n    cin >> n >> k;\n    if (n == 0 and k == 0) return 0;\n    vl\
    \ a(n);\n    rep(i, n) {\n      cin >> a[i];\n    }\n\n    CumulativeSum<ll> cs(a);\n\
    \    cs.build();\n    ll ans = -1e4;\n    for (ll i = 0; i+k-1 < n; i++) {\n \
    \     cmax(ans, cs.sum(i, i+k-1));\n    }\n\n    cout << ans << el;\n  }\n}\n"
  code: "#define  PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516\"\
    \n\n#include \"../template.hpp\"\n#include \"../cumulative_sum.hpp\"\n\nint main()\
    \ {\n  while (1) {\n    ll n, k;\n    cin >> n >> k;\n    if (n == 0 and k ==\
    \ 0) return 0;\n    vl a(n);\n    rep(i, n) {\n      cin >> a[i];\n    }\n\n \
    \   CumulativeSum<ll> cs(a);\n    cs.build();\n    ll ans = -1e4;\n    for (ll\
    \ i = 0; i+k-1 < n; i++) {\n      cmax(ans, cs.sum(i, i+k-1));\n    }\n\n    cout\
    \ << ans << el;\n  }\n}\n"
  dependsOn:
  - template.hpp
  - cumulative_sum.hpp
  isVerificationFile: true
  path: verify/cumulative_sum.test.cpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/cumulative_sum.test.cpp
layout: document
redirect_from:
- /verify/verify/cumulative_sum.test.cpp
- /verify/verify/cumulative_sum.test.cpp.html
title: verify/cumulative_sum.test.cpp
---
