#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
vector<pair<int,int>>Edge_list;
while(e--){
    int a,b;cin>>a>>b;
    Edge_list.push_back({a,b});
}
cout<<endl<<endl;
for(pair<int,int>i:Edge_list){
       cout<<i.first<<" "<<i.second<<endl;
}
return 0;
}