vector<int> zfunc(string &s){

  int n = s.size(), l=0,r= 0;

  vector<int> z(n,0);

  for(int i = 1; i<n;i++){
     
    if( i <= r)z[i] = min(r-i+1,z[i-l]);

    while(z[i]+i < n && s[z[i]] == s[z[i]+i]) z[i]++;

    if(i+z[i]-1 > r) l = i, r= i+z[i]-1;


  }

  return z;

}
