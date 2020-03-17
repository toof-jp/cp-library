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
<script type="text/javascript" src="../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../assets/css/copy-button.css" />


# :warning: primefactorization.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/primefactorization.cpp">View this file on GitHub</a>
    - Last commit date: 2018-12-29 15:09:40+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
//
// https://beta.atcoder.jp/contests/abc052/tasks/arc067_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)

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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<ll, ll> m;
  rep(i, n) {
    for (auto&& j : PrimeFactorization(i+1)) {
      m[j.first] += j.second;
    }
  }

  ll ans = 1;
  const int MOD = (int)1e9+7;
  for (auto&& i : m) {
    ans = ans*(i.second+1)%MOD;
  }

  cout << ans << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "primefactorization.cpp"
//
// https://beta.atcoder.jp/contests/abc052/tasks/arc067_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)

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

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<ll, ll> m;
  rep(i, n) {
    for (auto&& j : PrimeFactorization(i+1)) {
      m[j.first] += j.second;
    }
  }

  ll ans = 1;
  const int MOD = (int)1e9+7;
  for (auto&& i : m) {
    ans = ans*(i.second+1)%MOD;
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

