ll gcd(ll a, ll b){
  if(!b) return a;
  return gcd(b,a%b);
}
