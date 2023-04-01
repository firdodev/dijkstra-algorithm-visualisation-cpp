# dijkstra-algorithm-visualisation-cpp

    <p>This repository contains C++ code for implementing various graph algorithms, including Dijkstra's algorithm for finding the shortest path between nodes in a graph. It also includes code for visualizing graphs and graph algorithms using ASCII art and animations.</p>
	<h1>Installation</h2>
	
   <p>To use the code in this repository, simply clone the repository to your local machine:</p>
   <pre><code>git clone https://github.com/firdodev/dijkstra-algorithm-visualisation-cpp.git</code></pre>
   <p>Then, navigate to the <code>folder</code> directory and compile the code using your favorite C++ compiler. For example, with <code>g++</code>, you can compile the code using the following command:</p>
    <pre><code>g++ -Wall -Wextra -pedantic -std=c++17 App.cpp .\core\graph.cpp -o App</code></pre>
	
	or use <code>build.bat </code> to build it automaticlly.
    
   <h2>Usage</h2>
    <p>The program will prompt you to enter the number of nodes in the graph, the number of edges, and the starting node for the shortest path algorithm. Alternatively, you can modify the <code>App.cpp</code> file to use local inputs, as shown in the example code.</p>
    <p>After entering the inputs, the program will display a visualization of the graph and the calculated shortest distances from the starting node to all other nodes in the graph. The visualization will include ASCII art and animations to help you understand how the algorithm works.</p>
    
   <h2>Example</h2>
    <p>Here's an example of how to use the code to find the shortest path between nodes in a graph:</p>
    <pre><code class="language-cpp">#include &lt;iostream&gt;
	#include "graph.h"

int main() {
    Graph g(5);
    g.add_edge(0, 1, 2);
    g.add_edge(0, 2, 1);
    g.add_edge(1, 2, 3);
    g.add_edge(1, 3, 2);
    g.add_edge(2, 3, 1);
    g.add_edge(2, 4, 4);
    g.add_edge(3, 4, 3);
    
    std::cout << "Shortest distances from node 0:" << std::endl;
    std::vector<int> dist = g.shortest_path(0);
    
    return 0;
}</code></pre>
    <p>When you run this code, you should see a visualization of the graph and the calculated shortest distances from node 0 to all other nodes in the graph:</p>
    
   <h2>Contributing</h2>
    <p>If you find a bug or have an idea for a new feature, feel free to open an issue or submit a pull request. We welcome contributions from anyone who is interested in improving this code or adding new features.</p>
