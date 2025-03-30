#include<bits/stdc++.h>
using namespace std;
int main(){
    int service =0;
    int t;cin>>t;
    int unsatisfied = 0;
    for(int i = 0;i<t;i++){
        int ser_time,max_wait;cin>>ser_time>>max_wait;
        max_wait+=i;
        if(ser_time +service <max_wait)  unsatisfied++;
        else service+=ser_time;
    }
    cout<<unsatisfied<<endl;
    return 0;
}