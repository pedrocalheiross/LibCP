const ll MXN = 1e5+5;
const ll INF = LLONG_MAX;

vector<pii> adj[MXN];
vector<ll> parent(MXN,-1);
vector<ll> dist(MXN,INF);

void dijkstra(ll node){
  dist[node] = 0;
  priority_queue<pii,vector<pii>, greater<pii>> pq;
  pq.push({0,node});
  while(!pq.empty()){
    pii curr = pq.top(); pq.pop();
    ll d = curr.first, out = curr.second;
    if(d > dist[out]) continue;
    for(pii nb : adj[out]){
      ll currD = dist[out] + nb.second;
      if(currD < dist[nb.first]){
        dist[nb.first] = currD;
        parent[nb.first] = out;
        pq.push({currD,nb.first});
      }
    }
  }
}
