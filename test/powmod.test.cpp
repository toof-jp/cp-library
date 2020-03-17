#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_B"

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> void cmax(T& a, U b) { if (a<b) a = b; }
template<class T, class U> void cmin(T& a, U b) { if (a>b) a = b; }

#include "../powmod.cpp"

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  int m, n;
  cin >> m >> n;
  cout << powmod(m, n, 1e9+7) << endl;
}
