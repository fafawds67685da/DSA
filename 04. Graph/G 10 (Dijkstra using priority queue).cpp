class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Step 1: Create adjacency list
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w)); // Because the graph is undirected
        }

        // Step 2: Initialize distance array and priority queue
        vector<int> distance(V, 1e9); // Set all distances to infinity (1e9)
        distance[src] = 0; // Distance to source is 0

        // Min-heap to store {distance, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        minHeap.push(make_pair(0, src));

        // Step 3: Process the queue
        while (!minHeap.empty()) {
            pair<int, int> current = minHeap.top();
            minHeap.pop();
            int currentDistance = current.first;
            int currentNode = current.second;

            // Visit all neighbors of currentNode
            for (int i = 0; i < adj[currentNode].size(); i++) {
                int neighborNode = adj[currentNode][i].first;
                int edgeWeight = adj[currentNode][i].second;

                // Relax the edge if a shorter path is found
                if (currentDistance + edgeWeight < distance[neighborNode]) {
                    distance[neighborNode] = currentDistance + edgeWeight;
                    minHeap.push(make_pair(distance[neighborNode], neighborNode));
                }
            }
        }

        return distance;
    }
};
