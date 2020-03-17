---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :heavy_check_mark: test/prime_factorization.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/prime_factorization.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-17 21:59:26+09:00


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/prime_factorization.cpp.html">prime_factorization.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#include "../prime_factorization.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  auto m = PrimeFactorization(n);

  cout << n << ": ";
  for (auto&& i : m) {
    rep(j, i.second) {
      cout << i.first << " ";
    }
  }
  cout << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/prime_factorization.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

#line 1 "test/../prime_factorization.cpp"
map<ll, ll> PrimeFactorization(ll n) {
  map<ll, ll> m;
  for (int i = 2; i*i <= n; i++) {
    while (n%i == 0) {
      m[i]++;
      n /= i;
    }
  }
  if (n != 1) m[n]++;
  return m;
}
#line 15 "test/prime_factorization.test.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  auto m = PrimeFactorization(n);

  cout << n << ": ";
  for (auto&& i : m) {
    rep(j, i.second) {
      cout << i.first << " ";
    }
  }
  cout << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

