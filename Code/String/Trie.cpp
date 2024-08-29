const int ms = 1e6+5;//tamanho max da string
const int sigma = 26;//tamanho do alfabeto

int trie[ms][sigma],terminal[ms],z;

void init(){
  memset(trie[0],0,sizeof trie[0]);
  z = 1;
}

void insert (string &p){
  int cur =0;
  for(int i = 0; i<p.size(); i++){
    int id = p[i]- 'a'+1;
    if(!trie[cur][id]){
      memset(trie[z],0,sizeof trie[z]);
      trie[cur][id] = z++;
    }
    cur = trie[cur][id];
  }
  terminal[cur]++;
}

int count(string &p){
  int cur = 0;
  for(int i =0; i<p.size();i++){
    int id = p[i]- 'a'+1;
    if(trie[cur][id]== -1){
      return false;
    }
    cur = trie[cur][id];
  }
  return terminal[cur];
}
