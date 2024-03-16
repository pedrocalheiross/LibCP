vector<int> getDivisors(int n){
  vector<int> div;
  for(int i = 1; i*i <=n;i++){
    int mirror = n/i;
    if(n%i == 0){
      div.push_back(i);
      if(i != mirror) div.push_back(mirror);
    }
  }
  sort(all(div));
  return div;
}
