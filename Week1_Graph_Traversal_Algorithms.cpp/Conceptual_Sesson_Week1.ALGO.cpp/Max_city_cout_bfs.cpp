#include<bits/stdc++.h>
using namespace std;
int r,c;
char graph[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j){
    if(i<0||i>=r||j<0||j>=c) return false;
    else return true;
}
// void bfs(int sr,int sc){
//     queue<pair<int,int>>q;
//     q.push({sr,sc});
//     vis[sr][sc] = true;
//     while(!q.empty()){
//         pair<int,int>par = q.front();
//        q.pop();
//        int par_r = par.first;
//        int par_c = par.second;
//            "vis[par_r][par_c] = true; 
//                 [❌ Incorrect BFS	A node can be pushed multiple times before being marked as visited, leading to overcounting]";
//        for(int i =0;i<4;i++){
//      int c_r = par_r + d[i].first;
//      int c_c = par_c + d[i].second;
//     if(valid(c_r,c_c)&&!vis[c_r][c_c]&&graph[c_r][c_c]=='.'){
//          q.push({c_r,c_c});
//          vis[c_r][c_c] = true;
//     }
//        }
//     }
// }
int bfs(int sr,int sc){
    queue<pair<int,int>>q;
    q.push({sr,sc});
    vis[sr][sc] = true;
    int cnt=0;
    while(!q.empty()){
        cnt++;
        pair<int,int>par = q.front();
       q.pop();
       int par_r = par.first;
       int par_c = par.second;
    //    vis[par_r][par_c] = true;// wrong
       for(int i =0;i<4;i++){
     int c_r = par_r + d[i].first;
     int c_c = par_c + d[i].second;
    if(valid(c_r,c_c)&&!vis[c_r][c_c]&&graph[c_r][c_c]=='.'){
         q.push({c_r,c_c});
         vis[c_r][c_c] = true;
    }
       }
    }
    return cnt;
}

int main(){
    cin>>r>>c;
    for(int i =0;i<r;i++){
        for(int j = 0;j<c;j++)
        cin>>graph[i][j];
    }
    memset(vis,false,sizeof(vis));
int max_size = 0;
  for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        if(graph[i][j]=='.'){
            if(!vis[i][j]){
                int c= 0;
             c = bfs(i,j);
             if(max_size<c){
                max_size= c;
             }
            }
        }
    }
  }
//   cout<<max_size<<" in"<<"("<<row<<","<<col<<")"<<endl;        source Node
cout<<max_size<<endl;

return 0;
}




//            Second Approch "*max_element(v.begin(), v.end())"
// #include<bits/stdc++.h>
// using namespace std;

// int r, c;
// char graph[1005][1005];
// bool vis[1005][1005];
// vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// bool valid(int i, int j) {
//     return i >= 0 && i < r && j >= 0 && j < c;
// }

// int bfs(int sr, int sc) {
//     queue<pair<int, int>> q;
//     q.push({sr, sc});
//     vis[sr][sc] = true;
//     int cnt = 0;
    
//     while (!q.empty()) {
//         cnt++;
//         pair<int, int> par = q.front();
//         q.pop();
//         int par_r = par.first;
//         int par_c = par.second;
        
//         for (int i = 0; i < 4; i++) {
//             int c_r = par_r + d[i].first;
//             int c_c = par_c + d[i].second;
            
//             if (valid(c_r, c_c) && !vis[c_r][c_c] && graph[c_r][c_c] == '.') {
//                 q.push({c_r, c_c});
//                 vis[c_r][c_c] = true; // Fix applied here
//             }
//         }
//     }
//     return cnt;
// }

// int main() {
//     cin >> r >> c;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++)
//             cin >> graph[i][j];
//     }
    
//     memset(vis, false, sizeof(vis));
//     vector<int> v;
    
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             if (graph[i][j] == '.' && !vis[i][j]) {
//                 v.push_back(bfs(i, j));
//             }
//         }
//     }
    
//     for (int val : v) {
//         cout << val << " ";
//     }
//     cout << "\nMax component size: " << *max_element(v.begin(), v.end()) << endl;
    
//     return 0;
// }
