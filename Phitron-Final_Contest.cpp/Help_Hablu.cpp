#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        long long dp[4] = {1, 0, 0, 0}; 
        for (char ch : s) {
            for (int j = 3; j >= 1; j--) { 
                if (ch == t[j - 1]) {
                    dp[j] += dp[j - 1];
                }
            }
        }
        cout << dp[3] << "\n";
    }

    return 0;
}