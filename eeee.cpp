  #include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
         vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            graph[u].emplace_back(v, prob);
            graph[v].emplace_back(u, prob);
        }
        
         priority_queue<pair<double, int>> pq;  
        vector<double> maxProb(n, 0.0);   
        maxProb[start_node] = 1.0;  
        pq.emplace(1.0, start_node);
        
        while (!pq.empty()) {
            double prob = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
             if (prob < maxProb[node]) continue;
            
             for (auto& neighbor : graph[node]) {
                int next_node = neighbor.first;
                double edgeProb = neighbor.second;
                
                 double newProb = prob * edgeProb;
                if (newProb > maxProb[next_node]) {
                    maxProb[next_node] = newProb;
                    pq.emplace(newProb, next_node);
                }
            }
        }
        
         return maxProb[end_node];
    }
};
