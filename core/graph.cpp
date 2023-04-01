#include "graph.h"
#include <functional>
#include <queue>
#include <climits>
#include <iostream>
#include <iomanip>

const int INF = INT_MAX;

Graph::Graph(int num_nodes){
  adjacency_list.resize(num_nodes);
}

void Graph::add_edges(int u, int v, int weight){
  adjacency_list[u].push_back(std::make_pair(v, weight));
  adjacency_list[v].push_back(std::make_pair(u, weight));
}

std::vector<int> Graph::shortest_path(int start){
std::vector<int> dist(adjacency_list.size(), INF);
    dist[start] = 0;
    
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;
    pq.push(std::make_pair(0, start));
    
    int iteration = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        // print a header for the current iteration
        std::cout << "Iteration " << iteration++ << ":" << std::endl;
        
        // display the current state of the algorithm
        for (int i = 0; i < adjacency_list.size(); i++) {
            std::cout << "+";
            for (int j = 0; j < 6; j++) {
                std::cout << "-";
            }
            std::cout << "+";
        }
        std::cout << std::endl;
        
        for (int i = 0; i < adjacency_list.size(); i++) {
            std::cout << "| ";
            if (i == start) {
                std::cout << "S";
            } else {
                std::cout << " ";
            }
            std::cout << " | ";
            if (i == u) {
                std::cout << "O-->";
            } else {
                std::cout << "    ";
            }
            std::cout << " | ";
            if (dist[i] == INF) {
                std::cout << "INF ";
            } else {
                std::cout << std::setw(3) << dist[i] << " ";
            }
            std::cout << "|";
        }
        std::cout << std::endl;
        
        for (int i = 0; i < adjacency_list.size(); i++) {
            std::cout << "+";
            for (int j = 0; j < 6; j++) {
                std::cout << "-";
            }
            std::cout << "+";
        }
        std::cout << std::endl;
        
        for (auto neighbor : adjacency_list[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            int alt = dist[u] + weight;
            
            if (alt < dist[v]) {
                dist[v] = alt;
                pq.push(std::make_pair(dist[v], v));
            }
        }
    }
    
    std::cout << "Final shortest distances from node " << start << ":" << std::endl;
    for (int i = 0; i < dist.size(); i++) {
        std::cout << i << ": ";
        if (dist[i] == INT_MAX) {
            std::cout << "INF";
        } else {
            std::cout << dist[i];
        }
        std::cout << std::endl;
    }
    
    return dist;
}

