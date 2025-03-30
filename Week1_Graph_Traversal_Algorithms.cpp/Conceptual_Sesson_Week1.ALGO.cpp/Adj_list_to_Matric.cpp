#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    vector<int>adj_list[n];
    int a[n][n];
    while(e--){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(a,0,sizeof(a));
    // for(int i =0;i<n;i++){
    //     for(int val : adj_list[i]){
    //         a[i][val] = 1;
    //     }
    // }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<adj_list[i].size();j++){
           int val = adj_list[i][j];
           a[i][val] = 1;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
    return 0;
}