//
// https://beta.atcoder.jp/contests/abc052/tasks/arc067_a
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define FOR(i, m, n) for(ll i = m;i < n;i++)
int MOD = 1000000007;

vector<int> prime;
int prime_factor[1010] = {};

void primeenumeration(int n) {
  FOR(i, 2, n+1) {
    bool flag = true;
    FOR(j, 2, i) {
      if (j*j > i) break;
      if (i%j == 0) {
        flag = false;
        break;
      }
    }
    if (flag) prime.push_back(i);
  }
}

void primefactorization(int n) {
  for (int i = 0; n >= prime[i];) {
    if (n%prime[i] == 0) {
      n /= prime[i];
      prime_factor[prime[i]]++;
    } else {
      i++;
    }
  }
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int n;
  cin >> n;

  primeenumeration(1000);

  rep(i, n+1) {
    primefactorization(i);
  }

  ll ans = 1;
  rep(i, n+1) {
    ans = ans * (prime_factor[i]+1) % MOD;
  }

  cout << ans << endl;
}
