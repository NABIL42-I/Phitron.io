// https://leetcode.com/problems/keys-and-rooms/






// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// bool canVisitAllRooms(vector<vector<int>>& rooms) {
//     int n = rooms.size();
//     vector<bool> visited(n, false);  // Track visited rooms
//     queue<int> q;
    
//     q.push(0);   // Start from room 0
//     visited[0] = true;
    
//     while (!q.empty()) {
//         int room = q.front();
//         q.pop();
        
//         // Collect keys and visit new rooms
//         for (int key : rooms[room]) {
//             if (!visited[key]) {
//                 visited[key] = true;
//                 q.push(key);
//             }
//         }
//     }

//     // Check if all rooms are visited
//     for (bool v : visited) {
//         if (!v) return false;
//     }
//     return true;
// }