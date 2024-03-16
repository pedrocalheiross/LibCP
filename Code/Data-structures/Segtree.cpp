const int ms = 2e5+5;

ll seg[4*ms];

int n;

void build(vector<ll> &v, int l=0, int r=n-1, int idx = 0){
  if(l == r){
    seg[idx] = v[l];
    return;
  }

  int m = (l+r)/2;
  int left = 2*idx +1;
  int right = 2*idx +2;

  build(v,l,m,left), build(v,m+1,r,right);

  seg[idx] = seg[left] + seg[right];
}

void update (int pos, int num, int l =0, int r =n-1, int idx=0){
  if(l == r){
    seg[idx] = num;
    return;
  }
 
  int m = (l+r)/2;
  int left = 2*idx +1;
  int right = 2*idx +2;

  if(pos <= m){
    update(pos,num,l,m,left);
  }
  else{
    update(pos,num,m+1,r,right);
  }

  seg[idx] = seg[left] + seg[right];

}

ll query(int L, int R, int l=0, int r=n-1, int idx=0){

  if(R<l || L > r){
    return 0; // elemento neutro
  }
  if(L <= l && r <= R){
    return seg[idx];
  }

  int m = (l+r)/2;
  int left = 2*idx +1;
  int right = 2*idx +2;

  return query(L,R,l,m,left) + query(L,R,m+1,r,right);

}