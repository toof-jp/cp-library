---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ src/lazy_segment_tree.hpp: line 2: #pragma once found in a non-first line\n"
  code: "// WIP\n#pragma once\n#include \"template.hpp\"\n\ntemplate<class Monoid>\n\
    struct LazySegmentTree {\n  using T = typename Monoid::value_type;\n\n  ll n;\n\
    \  vector<T> tree;\n  const Monoid ope;\n\n  SegmentTree(ll n) : n(n) {\n    tree.assign(2*n,\
    \ ope.ide);\n  }\n\n  void build(const vector<T>& v) {\n    rep(i, v.size())\n\
    \      tree[i+n] = v[i];\n    per(i, n)\n      tree[i] = ope(tree[i*2], tree[i*2+1]);\n\
    \  }\n\n  void change(ll p, const T& x) {\n    p += n;\n    tree[p] = x;\n   \
    \ while (p >>= 1)\n      tree[p] = ope(tree[p*2], tree[p*2+1]);\n  }\n\n  T query(ll\
    \ l, ll r) const {\n    T l_res{};\n    T r_res{};\n    for (l += n, r+= n; l\
    \ < r; l >>= 1, r >>= 1) {\n      if (l&1) l_res = ope(l_res, tree[l++]);\n  \
    \    if (r&1) r_res = ope(tree[--r], r_res);\n    }\n    return ope(l_res, r_res);\n\
    \  }\n\n  T operator[](ll i) {\n    return tree[i+n];\n  }\n};\n"
  dependsOn:
  - src/template.hpp
  isVerificationFile: false
  path: src/lazy_segment_tree.hpp
  requiredBy: []
  timestamp: '2022-06-23 22:24:35+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/lazy_segment_tree.hpp
layout: document
redirect_from:
- /library/src/lazy_segment_tree.hpp
- /library/src/lazy_segment_tree.hpp.html
title: src/lazy_segment_tree.hpp
---
