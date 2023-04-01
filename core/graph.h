#ifndef GRAPH_H
#define GRAPH_H


#include <vector>
#include <climits>
#include <utility>

class Graph{
public:
  Graph(int num_nodes);

  void add_edges(int u, int v, int weight);

  std::vector<int> shortest_path(int start);

private:
  std::vector<std::vector<std::pair<int, int>>> adjacency_list;
};

#endif
