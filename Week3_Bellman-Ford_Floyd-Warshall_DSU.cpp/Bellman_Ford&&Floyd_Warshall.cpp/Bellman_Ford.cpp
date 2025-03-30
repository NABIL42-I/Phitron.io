// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, e;
//     cin >> n >> e;
    
//     long long adj_mat[n+1][n+1]; 

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == j) adj_mat[i][j] = 0;
//             else adj_mat[i][j] = LLONG_MAX;
//         }
//     }

//     while (e--) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         adj_mat[a][b] = c;
//     }
//     for (int k = 1; k <= n; k++) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX &&
//                     adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) {
//                     adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
//                 }
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++) {
//         if (adj_mat[i][i] < 0) {
//             cout << "Negative Cycle Detected\n";
//             return 0;
//         }
//     }

//     int src;
//     cin >> src;
    
//     int q;
//     cin >> q;
    
//     while (q--) {
//         int des;
//         cin >> des;
//         if (adj_mat[src][des] == LLONG_MAX) {
//             cout << "Not Possible\n";
//         } else {
//             cout << adj_mat[src][des] << endl;
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// class Edge {
//     public:
//     int u, v, w;
// };
// int main(){
//     int n, e;
//     cin>>n>> e;
//     vector<Edge> edges(e);
//     vector<long long> dist(n + 1,LLONG_MAX);
//     for (int i = 0; i < e; i++){
//         cin >> edges[i].u >> edges[i].v >> edges[i].w;
//     }
//     int src;
//     cin >> src;
//     dist[src] = 0;
//     for (int i = 1; i <= n - 1; i++){
//         for (auto edge : edges) {
//             if (dist[edge.u] != LLONG_MAX && dist[edge.u] + edge.w < dist[edge.v]) {
//                 dist[edge.v] = dist[edge.u] + edge.w;
//             }
//         }
//     }
//     for ( auto edge : edges){
//         if (dist[edge.u] != LLONG_MAX && dist[edge.u] + edge.w < dist[edge.v]) {
//             cout << "Negative Cycle Detected\n";
//             return 0;
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--){
//         int des;
//         cin >> des;
//         if (dist[des] == LLONG_MAX)
//             cout << "Not Possible\n";
//         else
//             cout << dist[des] << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
long long dis[10005];
class edge{
    public:
    int a,b,c;
    edge(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
bool cycle;
int n,e;
vector<edge>edge_list;
void bellman_ford(){
    for(int i = 1;i<=n-1;i++){
        for(auto ed: edge_list){
            int a,b,c;
            a = ed.a;b=ed.b;c = ed.c;
            if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b])
            dis[b] = dis[a]+c;
        }
    }
     cycle = false;
    for(auto ed : edge_list){
        int a,b,c;
        a = ed.a;b = ed.b;c=ed.c;
        if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b])
        {
            cycle = true;
            break;
        }
    }
  
}
int main(){
    cin>>n>>e;
    while(e--){
        long long a,b,c;cin>>a>>b>>c;
       edge_list.push_back(edge(a,b,c));
    }
    for(int i = 1;i<=n;i++) dis[i] = LLONG_MAX;
    int src;cin>>src;
    dis[src] = 0;
    bellman_ford();
    if(cycle) {
        cout<<"Negative Cycle Detected\n";
        return 0;
    }
    int q;cin>>q;
    while(q--){
        int des;cin>>des;
        if(dis[des]!=LLONG_MAX) cout<<dis[des]<<endl;
        else cout<<"Not Possible\n";
    }
    return 0;
}