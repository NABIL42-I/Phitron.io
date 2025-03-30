#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
void dfs(int src,int &c){
    vis[src] = true;
    for(int child: adj_list[src]){
        if(vis[child]==false){ 
            c++;
        dfs(child,c);
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int c=1;
    int node;cin>>node;
            dfs(node,c);
        cout<<c<<endl;
    return 0;
}

//          Second Approach
// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<int> adj[100]; // Adjacency list
// bool visited[100];    // To track visited nodes

// int bfs(int start) {
//     queue<int> q;
//     q.push(start);
//     visited[start] = true;
    
//     int count = 0; // To count the number of reachable nodes
    
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         count++;
        
//         for (int neighbor : adj[node]) {
//             if (!visited[neighbor]) {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//             }
//         }
//     }
    
//     return count;
// }

// int main() {
//     int nodes, edges;
//     cin >> nodes >> edges; // Number of nodes and edges
    
//     for (int i = 0; i < edges; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); // Since the graph is undirected
//     }

//     int startNode;
//     cin >> startNode;

//     cout << bfs(startNode) << endl;

//     return 0;
// }
