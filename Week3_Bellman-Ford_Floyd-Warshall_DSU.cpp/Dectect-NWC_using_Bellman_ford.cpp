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
vector<edge>adj_list;
vector<int>dis(100);
int n,e;
void bellman_ford(int src){
    dis[src] = 0;
    for(int i = 0;i<n-1;i++){
        for(edge ed : adj_list){
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if(dis[a]!=INT_MAX && dis[a]+c<dis[b])
            dis[b] = dis[a]+c;
        }
    }
    bool flag = false;
    for(edge ed : adj_list){
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if(dis[a]!=INT_MAX && dis[a]+c < dis[b]){ 
            flag = true;
            break;
        }
        }
        if(flag){ 
            cout<<"Negative Cycle Detected\n";
        }
        else {
            for (int i = 0; i < n; i++) {
                if (dis[i] == INT_MAX) {
                    cout << i << " -> INF\n";
                } else {
                    cout << i << " -> " << dis[i] << endl;
                }
            }
        }
}
int main(){
    cin>>n>>e;
    adj_list.clear();
    while(e--){
    int a,b,c;cin>>a>>b>>c;
        // edge ok(a,b,c);
        // adj_list.push_back(ok);
        adj_list.push_back(edge(a,b,c));
        // adj_list.push_back(edge(b,a,c));
    }
    for(int i= 0;i<n;i++)
    dis[i] = INT_MAX;
  bellman_ford(0);
    return 0;
}