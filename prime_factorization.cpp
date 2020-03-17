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
