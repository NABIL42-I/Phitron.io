#include<bits/stdc++.h>
using namespace std;
int main(){
     int n; cin>>n;
    long long  a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    long long tar;cin>>tar;
    for(int i=0;i<n;i++){
        if(a[i]==tar){ 
            cout<<i;
           return 0;
        }
    }
    cout<<"-1";
    return 0;

}