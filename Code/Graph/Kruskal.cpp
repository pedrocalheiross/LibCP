  ll n,m,a,b,c;
  
  cin>>n>>m;
  
  vector<tuple<ll,ll,ll>> e(m);
  DSU dsu = DSU(n);
  
  for(int i=0;i<m;i++){
      cin>>a>>b>>c;
      a--;
      b--;
      e.push_back({c,a,b});
  }
  
  ll mstCost=0,comp=0;
  
  sort(all(e));

  for(auto[w,u,v] : e){
      if(dsu.root(u)!= dsu.root(v)){
          comp++;
          mstCost+=w;
          dsu.unite(u,v);
      }
  }
  
  if(comp != n-1){
      cout<<"IMPOSSIBLE";
  }
  else{
      cout<<mstCost;
  }
  cout<<"\n";
