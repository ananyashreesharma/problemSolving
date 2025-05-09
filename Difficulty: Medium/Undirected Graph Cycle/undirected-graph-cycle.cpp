//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // // start se BFS karke cycle detect karo
    // bool detect(int start, vector<vector<int>>& adj, vector<int>& visited) {
    //     queue<pair<int,int>> q;
    //     visited[start] = 1;            // mark visited
    //     q.push({start, -1});           // {node, parent}

    //     while (!q.empty()) {
    //         auto p = q.front(); q.pop();
    //         int node   = p.first;
    //         int parent = p.second;

    //         // saare neighbours dekhlo
    //         for (int nei : adj[node]) {
    //             if (!visited[nei]) {
    //                 visited[nei] = 1;    // ab visit mark karo
    //                 q.push({nei, node}); // enqueue karo with parent
    //             }
    //             else if (nei != parent) {
    //                 // visited hai aur parent nahi hai ⇒ cycle mil gaya
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;  // poori component me cycle nahi mili
    // }
    bool dfsdetect(int node,
                   int parent,
                   vector<vector<int>>& adj,
                   vector<int>& vis) {
        vis[node] = 1;
        for (int nei : adj[node]) {
            if (!vis[nei]) {
                if (dfsdetect(nei, node, adj, vis))
                    return true;
            }
            else if (nei != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> visited(V, 0);
        for (int i = 0; i < V; ++i) {
            if (!visited[i] && dfsdetect(i, -1, adj, visited))
                return true;
        }
        return false;
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