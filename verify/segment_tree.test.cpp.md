---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 258, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../template.hpp:\
    \ line -1: no such header\n"
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
  dependsOn: []
  isVerificationFile: true
  path: verify/segment_tree.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/segment_tree.test.cpp
layout: document
redirect_from:
- /verify/verify/segment_tree.test.cpp
- /verify/verify/segment_tree.test.cpp.html
title: verify/segment_tree.test.cpp
---
