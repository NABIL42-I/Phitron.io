#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(long long i = 0;i<n-2;i++){
            cin>>v[i];
        }
        long long tar_sum;cin>>tar_sum;
        long long sum = 0;
        for(long long i = 0;i<n-2;i++)
         sum+=v[i];
         cout<<(tar_sum-sum)+1<<"\n";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> remaining_elements(n - 2);
//         long long remaining_sum = 0;
        
//         for (int i = 0; i < n - 2; i++) {
//             cin >> remaining_elements[i];
//             remaining_sum += remaining_elements[i];
//         }
        
//         long long original_sum;
//         cin >> original_sum;
        
//         long long missing_sum = original_sum - remaining_sum;
//         cout << (missing_sum + 1) << endl;  // Number of valid pairs
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     solve();
//     return 0;
// }
