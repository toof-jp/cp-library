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
  dependsOn: []
  isVerificationFile: true
  path: test/template.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/template.test.cpp
layout: document
redirect_from:
- /verify/test/template.test.cpp
- /verify/test/template.test.cpp.html
title: test/template.test.cpp
---
