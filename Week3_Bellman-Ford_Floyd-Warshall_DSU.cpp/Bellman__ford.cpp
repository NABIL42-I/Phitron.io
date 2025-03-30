#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int a;
    int b;
    int c;
    edge(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int main(){
    vector<edge>adj_list;
    vector<int>dis(100);
    int n,e;cin>>n>>e;
    while(e--){
    int a,b,c;cin>>a>>b>>c;
        // edge ok(a,b,c);
        // adj_list.push_back(ok);
        adj_list.push_back(edge(a,b,c));
        adj_list.push_back(edge(b,a,c));
    }
    for(int i= 0;i<n;i++)
        dis[i] = INT_MAX;
    dis[0] = 0;    
    for(int i = 0;i<n-1;i++){
        for(edge ed : adj_list){
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if(dis[a]!=INT_MAX && dis[a]+c<dis[b])
            dis[b] = dis[a]+c;
        }
    }
    for(int i =0;i<n;i++)
        cout<<i<<" -> "<<dis[i]<<endl;
    return 0;
}