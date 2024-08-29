void kahn(){
    vector<int> topo_order;
    priority_queue<int, vector<int>,cmp> PQ;
    for(int u=0; u<n;u++)if(indegree[u]==0) PQ.push(u);
    while(!PQ.empty()){
        int u = PQ.top();PQ.pop();
        topo_order.push_back(u);
        for(int v:adj[u])if(--indegree[v]==0)PQ.push(v);
    }
}