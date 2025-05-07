//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // start se BFS karke cycle detect karo
    bool detect(int start, vector<vector<int>>& adj, vector<int>& visited) {
        queue<pair<int,int>> q;
        visited[start] = 1;            // mark visited
        q.push({start, -1});           // {node, parent}

        while (!q.empty()) {
            auto p = q.front(); q.pop();
            int node   = p.first;
            int parent = p.second;

            // saare neighbours dekhlo
            for (int nei : adj[node]) {
                if (!visited[nei]) {
                    visited[nei] = 1;    // ab visit mark karo
                    q.push({nei, node}); // enqueue karo with parent
                }
                else if (nei != parent) {
                    // visited hai aur parent nahi hai ⇒ cycle mil gaya
                    return true;
                }
            }
        }
        return false;  // poori component me cycle nahi mili
    }

    // edges vector of pairs di hui hai (0-based indexing)
    bool isCycle(int V, vector<vector<int>>& edges) {
        // pehle adjacency list banao
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            // seedha zero-based use karo, koi -1 conversion nahi
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // visited array har test-case me fresh banega kyunki main() har call pe naya Solution object banata hai
        vector<int> visited(V, 0);

        // disconnected components ke liye loop
        for (int i = 0; i < V; ++i) {
            if (!visited[i] && detect(i, adj, visited))
                return true;   // cycle milte hi true
        }
        return false;  // kahin bhi cycle nahi mili
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends