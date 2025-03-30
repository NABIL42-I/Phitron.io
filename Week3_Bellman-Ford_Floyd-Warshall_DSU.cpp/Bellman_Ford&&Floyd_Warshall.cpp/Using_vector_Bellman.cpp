#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<pair<int, long long>>> edge_list(n + 1);  // Adjacency list

    while (e--) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list[a].push_back({b, c});  // Store destination and weight
    }

    // Example: Printing the adjacency list
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (auto [b, c] : edge_list[i]) {
            cout << "(" << b << ", " << c << ") ";
        }
        cout << endl;
    }

    return 0;
}
