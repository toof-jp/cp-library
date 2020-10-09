---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: modint.hpp
    title: modint.hpp
  - icon: ':heavy_check_mark:'
    path: segment_tree.hpp
    title: segment_tree.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_set_range_composite
    links:
    - https://judge.yosupo.jp/problem/point_set_range_composite
  bundledCode: "#line 1 \"verify/segment_tree.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
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
    \ \"segment_tree.hpp\"\n\ntemplate<class Monoid>\nstruct SegmentTree {\n  using\
    \ T = typename Monoid::value_type;\n\n  ll n;\n  vector<T> tree;\n  const Monoid\
    \ ope;\n\n  SegmentTree(ll n) : n(n) {\n    tree.assign(2*n, ope.ide);\n  }\n\n\
    \  void build(const vector<T>& v) {\n    rep(i, v.size())\n      tree[i+n] = v[i];\n\
    \    per(i, n)\n      tree[i] = ope(tree[i*2], tree[i*2+1]);\n  }\n\n  void change(ll\
    \ p, const T& x) {\n    p += n;\n    tree[p] = x;\n    while (p >>= 1)\n     \
    \ tree[p] = ope(tree[p*2], tree[p*2+1]);\n  }\n\n  T query(ll l, ll r) const {\n\
    \    T l_res{};\n    T r_res{};\n    for (l += n, r+= n; l < r; l >>= 1, r >>=\
    \ 1) {\n      if (l&1) l_res = ope(l_res, tree[l++]);\n      if (r&1) r_res =\
    \ ope(tree[--r], r_res);\n    }\n    return ope(l_res, r_res);\n  }\n\n  T operator[](ll\
    \ i) {\n    return tree[i+n];\n  }\n};\n#line 3 \"modint.hpp\"\n\ntemplate <ll\
    \ Mod>\nstruct ModInt {\n  ll n;\n\n  ModInt(const ll x = 0) : n(x) {\n    while\
    \ (n < 0) n += Mod;\n    n %= Mod;\n  }\n\n  inline constexpr ModInt operator+(const\
    \ ModInt r) const noexcept { return ModInt(*this) += r; }\n  inline constexpr\
    \ ModInt operator-(const ModInt r) const noexcept { return ModInt(*this) -= r;\
    \ }\n  inline constexpr ModInt operator*(const ModInt r) const noexcept { return\
    \ ModInt(*this) *= r; }\n  inline constexpr ModInt operator/(const ModInt r) const\
    \ noexcept { return ModInt(*this) /= r; }\n  inline constexpr ModInt &operator+=(const\
    \ ModInt r) noexcept {\n    n += r.n;\n    if (n >= Mod) n -= Mod;\n    return\
    \ *this;\n  }\n  inline constexpr ModInt &operator-=(const ModInt r) noexcept\
    \ {\n    if (n < r.n) n += Mod;\n    n -= r.n;\n    return *this;\n  }\n  inline\
    \ constexpr ModInt &operator*=(const ModInt r) noexcept {\n    n = n * r.n % Mod;\n\
    \    return *this;\n  }\n  inline constexpr ModInt &operator/=(const ModInt r)\
    \ noexcept { return *this *= r.inv(); }\n\n  inline constexpr ModInt pow(ll x)\
    \ const noexcept {\n    ModInt<Mod> ret(1), tmp(*this);\n    while (x) {\n   \
    \   if (x&1) ret *= tmp;\n      tmp *= tmp;\n      x >>= 1;\n    }\n    return\
    \ ret;\n  }\n  inline constexpr ModInt inv() const noexcept { return pow(Mod-2);\
    \ }\n\n  friend ostream& operator<<(ostream& os, const ModInt& obj) { return os\
    \ << obj.n; }\n  friend istream& operator>>(istream& is, ModInt& obj) {\n    ll\
    \ t;\n    is >> t;\n    obj = ModInt(t);\n    return is;\n  }\n};\n\nconstexpr\
    \ ll mod = 1000000007;\nusing mint = ModInt<mod>;\nmint operator\"\" _mi(unsigned\
    \ long long n) { return mint(n); }\n#line 6 \"verify/segment_tree.test.cpp\"\n\
    \nusing modint = ModInt<998244353>;\n\nstruct Func{\n  modint a, b;\n  Func(ll\
    \ a = 1, ll b = 0) : a(a), b(b) {};\n  Func(modint a, modint b) : a(a), b(b) {};\n\
    };\n\nstruct F{\n  using value_type = Func;\n\n  Func operator()(const Func& l,\
    \ const Func& r) const {\n    return Func(r.a*l.a, r.a*l.b+r.b);\n  }\n  const\
    \ Func ide = Func();\n};\n\nint main() {\n  ll n, q;\n  cin >> n >> q;\n  SegmentTree<F>\
    \ seg(n);\n\n  vector<Func> vec(n);\n  rep(i, n) {\n    cin >> vec[i].a >> vec[i].b;\n\
    \  }\n\n  seg.build(vec);\n\n  rep(i, q) {\n    ll t, a, b, c;\n    cin >> t >>\
    \ a >> b >> c;\n    if (t == 0) {\n      seg.change(a, Func(b, c));\n    } else\
    \ {\n      Func e = seg.query(a, b);\n      cout << e.a*modint(c)+e.b << el;\n\
    \    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n\n#include \"../template.hpp\"\n#include \"../segment_tree.hpp\"\n#include \"\
    ../modint.hpp\"\n\nusing modint = ModInt<998244353>;\n\nstruct Func{\n  modint\
    \ a, b;\n  Func(ll a = 1, ll b = 0) : a(a), b(b) {};\n  Func(modint a, modint\
    \ b) : a(a), b(b) {};\n};\n\nstruct F{\n  using value_type = Func;\n\n  Func operator()(const\
    \ Func& l, const Func& r) const {\n    return Func(r.a*l.a, r.a*l.b+r.b);\n  }\n\
    \  const Func ide = Func();\n};\n\nint main() {\n  ll n, q;\n  cin >> n >> q;\n\
    \  SegmentTree<F> seg(n);\n\n  vector<Func> vec(n);\n  rep(i, n) {\n    cin >>\
    \ vec[i].a >> vec[i].b;\n  }\n\n  seg.build(vec);\n\n  rep(i, q) {\n    ll t,\
    \ a, b, c;\n    cin >> t >> a >> b >> c;\n    if (t == 0) {\n      seg.change(a,\
    \ Func(b, c));\n    } else {\n      Func e = seg.query(a, b);\n      cout << e.a*modint(c)+e.b\
    \ << el;\n    }\n  }\n}\n"
  dependsOn:
  - template.hpp
  - segment_tree.hpp
  - modint.hpp
  isVerificationFile: true
  path: verify/segment_tree.test.cpp
  requiredBy: []
  timestamp: '2020-10-09 18:57:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/segment_tree.test.cpp
layout: document
redirect_from:
- /verify/verify/segment_tree.test.cpp
- /verify/verify/segment_tree.test.cpp.html
title: verify/segment_tree.test.cpp
---
