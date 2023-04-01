#include "core\graph.h"
#include <iostream>

int main(){
  Graph g(5);
    g.add_edges(0, 1, 2);
    g.add_edges(0, 2, 1);
    g.add_edges(1, 2, 3);
    g.add_edges(1, 3, 2);
    g.add_edges(2, 3, 1);
    g.add_edges(2, 4, 4);
    g.add_edges(3, 4, 3);
    
    std::cout << "Shortest distances from node 0:" << std::endl;
    std::vector<int> dist = g.shortest_path(0);
    
    return 0; 
}
