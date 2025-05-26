vector<ll> getFact(ll y){
  vector<ll> ret;
  for(ll i =2; i*i <=y;i++){
    while(y%i==0){
      ret.push_back(i);
      y/=i;
    }
  }
  if(y>1) ret.push_back(y);
  return ret;
}
