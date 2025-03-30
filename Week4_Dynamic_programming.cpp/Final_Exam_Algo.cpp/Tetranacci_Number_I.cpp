#include<bits/stdc++.h>
using namespace std;
long long dp[35];
long long rec(long long n){
    if(n<2) return n;
    if(n==2) return 1;
    if(n==3) return 2;
    if(dp[n]!=-1) return dp[n];
   dp[n] = rec(n-1)+rec(n-2)+rec(n-3)+rec(n-4);
   return dp[n];
}
int main(){
    long long n;cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(n);
    return 0;
}
// The array dp[30] can only store values for n up to 29. If n >= 30, 
// the program will cause a segmentation fault due to accessing out-of-bounds memory.