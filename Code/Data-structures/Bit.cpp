const int ms = 2e6+5;
 
ll bit[ms];
int n;
 
ll query(ll i){ // querry de [1...i]
  ll ret =0;
  for(;i>0;i-= i & -i){
    ret+=bit[i];
  }
  return ret;
 
}
 
void update(ll i, ll u){
  for(;i<=ms; i+= i & -i){
    bit[i]+=u;
  }
}