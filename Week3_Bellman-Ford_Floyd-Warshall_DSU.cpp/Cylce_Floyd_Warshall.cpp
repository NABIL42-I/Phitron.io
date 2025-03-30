#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;cin>>n>>e;
int adj_matrix[n][n];

for(int i =0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(i==j)
        adj_matrix[i][j] = 0;
        else 
        adj_matrix[i][j] = INT_MAX;
    }
}
while(e--){
    int a,b,c;cin>>a>>b>>c;
     adj_matrix[a][b] = c;
    //  adj_matrix[b][a] = c;
     adj_matrix[a][b] = min(adj_matrix[a][b],c);
}
for(int k = 0;k<n;k++){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(adj_matrix[i][k]!=INT_MAX && adj_matrix[k][j]!=INT_MAX && adj_matrix[i][k]+adj_matrix[k][j] < adj_matrix[i][j])
              adj_matrix[i][j] = adj_matrix[i][k]+adj_matrix[k][j];
        }
    }
}
bool cycle = false;
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(adj_matrix[i][j]<0) {
            cycle = true;
            break;
        }
    }
}
if(cycle) cout<<"Negative Weighted\n";
else{  
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(adj_matrix[i][j]==INT_MAX)
            cout<<"INF ";
        else 
            cout<<adj_matrix[i][j]<<" ";
        
    }
    cout<<endl;
}
}
return 0;
}