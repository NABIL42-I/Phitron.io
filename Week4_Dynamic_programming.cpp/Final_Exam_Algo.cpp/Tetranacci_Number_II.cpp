#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    ll dp[100];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    for(ll i = 4;i<=n;i++)
       dp[i] = dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
    cout<<dp[n];
    return 0;
}