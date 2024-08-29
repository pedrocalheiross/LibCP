const int ms = 1e7+100;//tamanho max da string
const int sigma = 2;//tamanho do alfabeto

int trie[ms][sigma],z,cnt[ms];

void insert (int x){
  int cur =0;
  for(int i = 31; i>=0; i--){
    int id = ((x>>i) & 1);
    if(!trie[cur][id]){
      trie[cur][id] = ++z;
    }
    cur = trie[cur][id];
    cnt[cur]++;
  }
}

void del (int x){
  int cur =0;
  for(int i = 31; i>=0; i--){
    int id = ((x>>i) & 1);
    cur = trie[cur][id];
    cnt[cur]--;
  }
}  

int query(int x){
  int cur =0;
  int ans = 0;
  for(int i = 31; i>=0; i--){
    int id = ((x>>i) & 1);
    if(trie[cur][(id^1)] && cnt[trie[cur][(id^1)]]){
      cur = trie[cur][(id^1)];
      ans+= (1<<i);
    }
    else{
      cur = trie[cur][id];
    }
  }
  return ans;
}
