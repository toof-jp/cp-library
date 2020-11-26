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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../template.hpp\"\n#include \"../binary_indexed_tree.hpp\"\n\ntemplate\
    \ <class T>\nstruct Plus {\n  using value_type = T;\n\n  T operator()(const T&\
    \ l, const T& r) const {\n    return l + r;\n  }\n  const T ide{};\n};\n\nint\
    \ main() {\n  ll n, q;\n  cin >> n >> q;\n\n  BinaryIndexedTree<Plus<ll>> bit(n);\n\
    \n  rep(i, n) {\n    ll a;\n    cin >> a;\n    bit.add(i, a);\n  }\n\n  rep(i,\
    \ q) {\n    ll t, a, b;\n    cin >> t >> a >> b;\n    if (t == 0) {\n      bit.add(a,\
    \ b);\n    } else {\n      cout << bit.sum(b) - bit.sum(a) << el;\n    }\n  }\n\
    }\n"
  dependsOn: []
  isVerificationFile: true
  path: verify/binary_indexed_tree.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/binary_indexed_tree.test.cpp
layout: document
redirect_from:
- /verify/verify/binary_indexed_tree.test.cpp
- /verify/verify/binary_indexed_tree.test.cpp.html
title: verify/binary_indexed_tree.test.cpp
---
