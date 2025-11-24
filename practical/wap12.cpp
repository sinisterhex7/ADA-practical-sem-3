#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int n;                              // number of vertices
    vector<vector<int>> adj;            // adjacency list

public:
    // Constructor: create a graph with n vertices
    Graph(int vertices) {
        n = vertices;
        adj.resize(n);
    }

    // Method to read adjacency list from user
    void readGraph() {
        cout << "Enter adjacency list (enter -1 to stop each list):\n";
        for (int i = 0; i < n; i++) {
            cout << "Neighbors of vertex " << i << ": ";
            while (true) {
                int x;
                cin >> x;
                if (x == -1) break;
                adj[i].push_back(x);
            }
        }
    }

    // Method to print all edges
    void printEdges() const {
        cout << "\nGraph edges:\n";
        for (int i = 0; i < n; i++) {
            for (int j : adj[i]) {
                cout << i << " -> " << j << endl;
            }
        }
    }
};

int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    Graph g(n);     // create graph object

    g.readGraph();  // input adjacency list
    g.printEdges(); // print edges

    return 0;
}
