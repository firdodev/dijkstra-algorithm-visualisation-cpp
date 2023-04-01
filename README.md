# dijkstra-algorithm-visualisation-cpp

This repository contains C++ code for implementing various graph algorithms, including Dijkstra's algorithm for finding the shortest path between nodes in a graph. It also includes code for visualizing graphs and graph algorithms using ASCII art.

## Installation

To use the code in this repository, simply clone the repository to your local machine:

```powershell
git clone https://github.com/firdodev/dijkstra-algorithm-visualisation-cpp.git
```


Then, navigate to the `main` directory and compile the code using your favorite C++ compiler. For example, with `g++`, you can compile the code using the following command:

```powershell
g++ -Wall -Wextra -pedantic -std=c++17 App.cpp .\core\graph.cpp -o App
```

or use `build.bat` for auto build.

## Usage

Once you have compiled the code, you can run it using the following command:
./App


The program will prompt you to enter the number of nodes in the graph, the number of edges, and the starting node for the shortest path algorithm. Alternatively, you can modify the `App.cpp` file to use local inputs, as shown in the example code.

After entering the inputs, the program will display a visualization of the graph and the calculated shortest distances from the starting node to all other nodes in the graph. The visualization will include ASCII art and animations to help you understand how the algorithm works.

## Example

Here's an example of how to use the code to find the shortest path between nodes in a graph:

```cpp
#include <iostream>
#include "core\graph.h"

int main() {
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
```

When you run this code, you should see a visualization of the graph and the calculated shortest distances from node 0 to all other nodes in the graph:
```cpp
Iteration 0:
+------++------++------++------++------+
| S | O--> |   0 ||   |      | INF ||   |      | INF ||   |      | INF ||   |      | INF |
+------++------++------++------++------+
Iteration 1:
+------++------++------++------++------+
| S |      |   0 ||   |      |   2 ||   | O--> |   1 ||   |      | INF ||   |      | INF |
+------++------++------++------++------+
Iteration 2:
+------++------++------++------++------+
| S |      |   0 ||   | O--> |   2 ||   |      |   1 ||   |      |   2 ||   |      |   5 |
+------++------++------++------++------+
Iteration 3:
+------++------++------++------++------+
| S |      |   0 ||   |      |   2 ||   |      |   1 ||   | O--> |   2 ||   |      |   5 |
+------++------++------++------++------+
Iteration 4:
+------++------++------++------++------+
| S |      |   0 ||   |      |   2 ||   |      |   1 ||   |      |   2 ||   | O--> |   5 |
+------++------++------++------++------+
Final shortest distances from node 0:
0: 0
1: 2
2: 1
3: 2
4: 5
```

## Contributing
If you find a bug or have an idea for a new feature, feel free to open an issue or submit a pull request. We welcome contributions from anyone who is interested in improving this code or adding new features.

## License
This code is licensed under the MIT License.

The MIT License is a permissive open source license that allows for commercial use, modification, distribution, and private use. It is often used for open source software projects because it allows other developers to freely use and modify the code while still protecting the original author's copyright.



