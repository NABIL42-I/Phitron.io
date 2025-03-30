#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> coins(n);
    
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    sort(coins.begin(), coins.end());  // Step 1: Sort the coins
    
    vector<int> prefixSum(n + 1, 0);
    
    // Step 2: Compute Prefix Sum
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + coins[i];
    }

    int totalSum = prefixSum[n];  // Total sum of all coins
    int halfN = n / 2;  // Required subset size

    int minDiff = INT_MAX;

    // Step 3: Try different partitions
    for (int i = 0; i + halfN <= n; i++) {
        int sum1 = prefixSum[i + halfN] - prefixSum[i];  // Sum of chosen `halfN` elements
        int sum2 = totalSum - sum1;
        minDiff = min(minDiff, abs(sum2 - sum1));  // Update minimum difference
    }

    cout << minDiff << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
