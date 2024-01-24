vector<int> adj[nodes];
    for(auto it:graph)
        adj[it[0]].push_back(it[1]);