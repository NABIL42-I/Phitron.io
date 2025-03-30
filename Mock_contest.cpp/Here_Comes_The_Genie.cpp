// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<long long> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     sort(a.rbegin(), a.rend()); 
//     int total = a[0]; int prev = a[0];

//    for(int  i =1;i<n;i++){
//     if(a[i]==prev){
//         total +=(a[i]-1);
//         if(a[i]-1>0)
//         prev = a[i]-1;
//     }
//     else if(prev<a[i]){
//         total+=prev-1;
//         if(prev--)
//         prev--;
//     }
//     else{
//          total +=a[i];
//          prev = a[i];
//     }

//    }
//     cout << total << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    long long total = 0;
    int prev = INT_MAX; 

    for (int i = 0; i < n; i++) {
        if (a[i] >= prev) { 
            prev = max(0, prev - 1);
        } else {
            prev = a[i];
        }
        total += prev;
    }

    cout << total << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<long long> balls(n);
//     for (int i = 0; i < n; i++) {
//         cin >> balls[i];
//     }
    
//     sort(balls.rbegin(), balls.rend()); 
    
//     long long total = 0;
//     long long last_taken = balls[0] + 1; 
    
//     for (int i = 0; i < n; i++) {
//         if (balls[i] >= last_taken) {
//             balls[i] = last_taken - 1; 
//         }
//         if (balls[i] > 0) { 
//             total += balls[i];
//             last_taken = balls[i];
//         }
//     }
    
//     cout << total << endl;
//     return 0;
// }
