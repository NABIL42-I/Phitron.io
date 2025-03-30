#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    int adj_matrix[n][n];
   for(int i =0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(i==j) adj_matrix[i][j] = 1;
    }
   }
   while(e--){
    int a,b;cin>>a>>b;
    adj_matrix[a][b] = 1;
    adj_matrix[b][a] = 1; 
   }
   
   vector<int>adj_list[n];
   for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(adj_matrix[i][j]==1){
            adj_list[i].push_back(j);
        }
    }
   }
   for(int val : adj_list[1]) cout<<val<<" ";
   return 0;

}