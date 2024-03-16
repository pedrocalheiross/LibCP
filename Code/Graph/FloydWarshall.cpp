const ll MXN = 1e5+5;
const ll INF = 1e18+5;
ll d[n+1][n+1];
  
for(int i = 0; i<=n;i++){
    for(int j=0;j<=n;j++){
        if(i==j)d[i][j]=0;
        else{
            d[i][j]= INF;
        }
    }
}


for(int i=0;i<m;i++){
    cin>>a>>b>>c;
    if(c<d[a][b]){
        d[a][b] = d[b][a] = c;
    }
}

for (int k = 1; k <= n; k++)
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 

