//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
    vector<vector<int>> dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // ye 4 direction offsets hain: up, right, down, left

void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& vis, int n, int m, int s, int e, vector<pair<int,int>>& vec) { // dfs helper
    vis[r][c] = true; // is cell ko visited mark kar diya
    vec.push_back({r - s, c - e}); // base (s,e) ke respect mein relative position store kiya

    for (auto& dir : dirs) { // har possible direction ke liye
        int nr = r + dir[0]; // next row
        int nc = c + dir[1]; // next col
        // boundary check + ensure not visited + ensure land (grid cell == 1)
        if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] && grid[nr][nc]) 
            dfs(nr, nc, grid, vis, n, m, s, e, vec); // recursive call
    }
} 

public:
int countDistinctIslands(vector<vector<int>>& grid) { // main function
    int n = grid.size(), m = grid[0].size(); // n rows, m cols
    vector<vector<bool>> vis(n, vector<bool>(m, false)); // visited matrix init false
    set<vector<pair<int,int>>> st; // unique island shapes store karne ke liye set

    for (int i = 0; i < n; i++) { // sab rows loop
        for (int j = 0; j < m; j++) { // sab cols loop
            vector<pair<int,int>> vec; // current island shape
            if (grid[i][j] && !vis[i][j]) { // agar land hai aur abhi tak visit nahi hua
                dfs(i, j, grid, vis, n, m, i, j, vec); // dfs se shape capture karo
                st.insert(vec); // set mein daal do
            }
        }
    }

    return st.size(); // distinct islands count return
}

  
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends