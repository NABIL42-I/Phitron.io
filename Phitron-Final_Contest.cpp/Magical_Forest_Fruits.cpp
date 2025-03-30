#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;cin>>n; long long  t;cin>>t;
    vector<long long>v(n);
    for(long long i =0;i<n;i++) cin>>v[i];
    vector<long long >pre(n);
    pre[0] = v[0];
    for(long long i = 1;i<n;i++)
      pre[i] = pre[i-1] + v[i];
    while(t--){
        long long  l,r;cin>>l>>r;
        l--;r--;
        long long sum = 0;
        if(l==0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        cout<<sum<<endl;
    }
    return 0;

}