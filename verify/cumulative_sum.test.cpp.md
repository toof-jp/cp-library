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
  code: "#define  PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516\"\
    \n\n#include \"../template.hpp\"\n#include \"../cumulative_sum.hpp\"\n\nint main()\
    \ {\n  while (1) {\n    ll n, k;\n    cin >> n >> k;\n    if (n == 0 and k ==\
    \ 0) return 0;\n    vl a(n);\n    rep(i, n) {\n      cin >> a[i];\n    }\n\n \
    \   CumulativeSum<ll> cs(a);\n    cs.build();\n    ll ans = -1e4;\n    for (ll\
    \ i = 0; i+k-1 < n; i++) {\n      cmax(ans, cs.sum(i, i+k-1));\n    }\n\n    cout\
    \ << ans << el;\n  }\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: verify/cumulative_sum.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/cumulative_sum.test.cpp
layout: document
redirect_from:
- /verify/verify/cumulative_sum.test.cpp
- /verify/verify/cumulative_sum.test.cpp.html
title: verify/cumulative_sum.test.cpp
---
