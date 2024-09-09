const ll N = 1e6+5;

const ll MAXN = 1e12;

bool prime[N];

vector <ll> sieve(){
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = false;

  vector <ll> primos;

  for (ll p = 2; p < N; p++) {
    if (prime[p]) {
      primos.push_back(p);
      for (ll i = p * 2; i < N; i += p)
        prime[i] = false;
    }
  }
  return primos;
}
