#include<bits/stdc++.h>
using namespace std;
int dp[1003][1003];
int w[1003],v[1003];
int rec(int i,int mw){
    if(i<0||mw<=0) return 0;
    if(dp[i][mw]!=-1) return dp[i][mw];
    if(w[i]<=mw){
        int l = rec(i-1,mw-w[i])+v[i];
        int r = rec(i-1,mw);
         return dp[i][mw] =  max(l,r);
    }
    else{
        return dp[i][mw] = rec(i-1,mw);
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        int n,mx;cin>>n>>mx;
        for(int i = 0;i<n;i++)
        cin>>w[i];
        for(int i = 0;i<n;i++)
        cin>>v[i];
        // for(int i = 0;i<=n;i++){
        //     for(int j = 0;j<=mx;j++){
        //         dp[i][j] = -1;
        //     }
        // }
        memset(dp,-1,sizeof(dp));
        cout<<rec(n-1,mx)<<endl;
    }
    return 0;
}