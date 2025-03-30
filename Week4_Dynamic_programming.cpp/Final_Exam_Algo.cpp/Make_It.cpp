#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool rec(int i,int tar){
   if(i>tar) return false;
   if(i==tar) return true;
   if(dp[i]!=-1) return dp[i];
   int l = rec(i+3,tar);
   int r = rec(i*2,tar);
   return dp[i]=l||r;
}
int main(){
    memset(dp,-1,sizeof(dp));
    bool l=  rec(1,100005);
    int t;cin>>t;
    while(t--){
         int val;cin>>val;
     if(dp[val]==-1) cout<<"NO\n";
     else cout<<"YES\n";
    }
    return 0;
}