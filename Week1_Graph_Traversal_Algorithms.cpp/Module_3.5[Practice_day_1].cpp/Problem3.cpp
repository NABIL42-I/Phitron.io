#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
void dfs(int src,int &count){
    vis[src] = true;
    for(int child: adj_list[src]){
        if(vis[child]==false){  
            count++;
        dfs(child,count);
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
    int count=1;
    vector<int>v;
    for(int i = 0;i<n;i++){
        if(vis[i]==false){
            dfs(i,count);
             v.push_back(count);
             count=1;
        }
       
    }
    sort(v.begin(),v.end());
    for(int val : v) cout<<val<<" ";
    return 0;
}


//                        Second
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> adj[1005]; // Adjacency list
// bool vis[1005];        // Visited array

// int dfs(int node) {
//     vis[node] = true;
//     int count = 1; // Counting the current node
//     for (int neighbor : adj[node]) {
//         if (!vis[neighbor]) {
//             count += dfs(neighbor);
//         }
//     }
//     return count;
// }

// int main() {
//     int nodes, edges;
//     cin >> nodes >> edges;

//     for (int i = 0; i < edges; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); // Since it's an undirected graph
//     }

//     vector<int> componentSizes;
//     fill(vis, vis + nodes + 1, false); // Initialize visited array

//     for (int i = 0; i < nodes; i++) {
//         if (!vis[i]) {  // If node is unvisited, it's a new component
//             componentSizes.push_back(dfs(i));
//         }
//     }

//     // Sorting component sizes in ascending order
//     sort(componentSizes.begin(), componentSizes.end());

//     // Printing the result
//     for (int size : componentSizes) {
//         cout << size << " ";
//     }
//     cout << endl;

//     return 0;
// }
