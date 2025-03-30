#include<bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];
int find(int node){
    if(par[node]==-1) return node;
    int leader = find(par[node]);
     par[node] = leader;
     return leader;
}
void dsu_union(int node1,int node2){
    int par_1 = find(node1);
    int par_2 = find(node2);
    if(group_size[par_1]>=group_size[par_2]){
      par[par_2] = par_1;
      group_size[par_1]+=group_size[par_2];
    }
    else{
        // if(group_size[par_1]>=group_size[par_2]){
            par[par_2] = par_1;
            group_size[par_1]+=group_size[par_2];
    }
}

int main(){
    int n,e;cin>>n>>e;
    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));
    int c = 0;
    while(e--){
        int a,b;cin>>a>>b;
        int par_a = find(a);
        int par_b = find(b);
        if(par_a == par_b){
            c++;
        }
        else{
            dsu_union(a,b);
        }
    }
    cout<<c<<endl;
    return 0;
}