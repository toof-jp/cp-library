---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/debug.hpp
    title: src/debug.hpp
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
  bundledCode: "#line 1 \"test/debug.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
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
    #line 3 \"src/debug.hpp\"\n\n// https://codeforces.com/blog/entry/68809\nvoid\
    \ debug_print(int x) {cerr << x;}\nvoid debug_print(long x) {cerr << x;}\nvoid\
    \ debug_print(long long x) {cerr << x;}\nvoid debug_print(unsigned x) {cerr <<\
    \ x;}\nvoid debug_print(unsigned long x) {cerr << x;}\nvoid debug_print(unsigned\
    \ long long x) {cerr << x;}\nvoid debug_print(float x) {cerr << x;}\nvoid debug_print(double\
    \ x) {cerr << x;}\nvoid debug_print(long double x) {cerr << x;}\nvoid debug_print(char\
    \ x) {cerr << '\\'' << x << '\\'';}\nvoid debug_print(const char *x) {cerr <<\
    \ '\\\"' << x << '\\\"';}\nvoid debug_print(const string &x) {cerr << '\\\"' <<\
    \ x << '\\\"';}\nvoid debug_print(bool x) {cerr << (x ? \"true\" : \"false\");}\n\
    template<typename T, typename V> void debug_print(const pair<T, V> &x) {cerr <<\
    \ '{'; debug_print(x.first); cerr << ','; debug_print(x.second); cerr << '}';}\n\
    template<typename T> void debug_print(const T &x) {int f = 0; cerr << '{'; for\
    \ (auto &i: x) cerr << (f++ ? \",\" : \"\"), debug_print(i); cerr << \"}\";}\n\
    \nvoid debug_print_() {cerr << \"]\\n\";}\ntemplate <typename T, typename... V>\n\
    void debug_print_(T t, V... v) {debug_print(t); if (sizeof...(v)) cerr << \",\
    \ \"; debug_print_(v...);}\n\n#ifdef LOCAL\n  #define debug(x...) cerr << \"[\"\
    \ << #x << \"] = [\"; debug_print_(x)\n#else\n  #define debug(x...)\n#endif\n\
    #line 5 \"test/debug.test.cpp\"\n\nint main() {\n  ll n = 10;\n  double m = 3.141592;\n\
    \  bool f = true;\n\n  debug(n, m, f);\n\n  vector<int> a(n);\n  debug(a);\n\n\
    \  vector<vl> b(n, vl(n));\n  debug(b);\n\n  cout << \"Hello World\" << el;\n\
    }\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"src/template.hpp\"\n#include \"src/debug.hpp\"\n\nint main() {\n\
    \  ll n = 10;\n  double m = 3.141592;\n  bool f = true;\n\n  debug(n, m, f);\n\
    \n  vector<int> a(n);\n  debug(a);\n\n  vector<vl> b(n, vl(n));\n  debug(b);\n\
    \n  cout << \"Hello World\" << el;\n}\n"
  dependsOn:
  - src/template.hpp
  - src/debug.hpp
  isVerificationFile: true
  path: test/debug.test.cpp
  requiredBy: []
  timestamp: '2020-11-27 17:14:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/debug.test.cpp
layout: document
redirect_from:
- /verify/test/debug.test.cpp
- /verify/test/debug.test.cpp.html
title: test/debug.test.cpp
---
