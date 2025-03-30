// Leetcode 557
#include<bits/stdc++.h>
using namespace std;
void reverse(int l,int r,string &s){
    // for(int i = l,j=r;i<=j;i++,j--){
    //     swap(s[i],s[j]);
    // }
    while(l<r){
        int temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}
int main(){
    string s;getline(cin,s);
    int l= 0,r=0,len = s.size();
    while(r<len){
        if(s[r]==' '){
            reverse(l,r-1,s);
            l = r+1;
        }
        r++;
    }
    // Reverse Last Word In The String 
    reverse(l,r-1,s);
    cout<<s<<endl;
    return 0;
}