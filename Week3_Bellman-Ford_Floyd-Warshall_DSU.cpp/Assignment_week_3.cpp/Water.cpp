//না, এটি 2-pointer technique নয়। এটি একটি single pass (O(n)) পদ্ধতি যেখানে আমরা একটি লুপের মাধ্যমে সর্বোচ্চ এবং দ্বিতীয় সর্বোচ্চ উচ্চতা খুঁজে বের করছি।
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;cin>>q;
    while(q--){ 
    vector<int>v;
    int n;cin>>n;
    while(n--){
        int val;cin>>val;
        v.push_back(val);
    }
    int mx1=INT_MIN,mx2 = INT_MIN;
    int f = 0,e =0;
    for(int i =0;i<v.size();i++){
        if(v[i]>mx1){
            mx2 = mx1;
            mx1 = v[i];
            e = f; // পুরানো সর্বোচ্চ সংখ্যার ইনডেক্স সংরক্ষণ
            f = i;
        }
       else if(v[i]>mx2 && mx1!=v[i]){ 
       mx2 = v[i];
       e = i;
       }
    }

   if(f<e)
   cout<<f<<" "<<e<<endl;
   else 
   cout<<e<<" "<<f<<endl;
}
return 0;
}
// 🔹 2-pointer Technique ব্যাখ্যা
// 2-pointer technique সাধারণত তখন ব্যবহার করা হয় যখন দুইটি ভিন্ন পয়েন্টার (indices) নিয়ে সমস্যা সমাধান করা হয়, এবং দুই দিক থেকে আগানো বা সংকুচিত (shrink) করা হয়।

// যেমন, Container With Most Water সমস্যায়, আমরা দুটি পয়েন্টার নিচ্ছি:

// i = 0 (বাম থেকে শুরু)
// j = n-1 (ডান থেকে শুরু)
// প্রতি ধাপে, আমরা i বা j কে সরিয়ে সমস্যার সমাধান করছি।