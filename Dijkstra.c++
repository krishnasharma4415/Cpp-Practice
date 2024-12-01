#include <iostream>
#include <vector>
#include <limits>
using namespace std;

#define INF numeric_limits<int>::max()

void dijkstra(vector<vector<int>> &graph, int src)
{
    int n = graph.size();
    vector<int> dist(n, INF);
    vector<bool> visited(n, false);

    dist[src] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minDist = INF, u = -1;

        for (int v = 0; v < n; v++)
            if (!visited[v] && dist[v] <= minDist)
            {
                minDist = dist[v];
                u = v;
            }

        visited[u] = true;

        for (int v = 0; v < n; v++)
            if (!visited[v] && graph[u][v] && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < n; i++)
        cout << i << "\t" << dist[i] << endl;
}

int main()
{
    int n, src;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix (use 0 for no edge):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << "Enter the source vertex: ";
    cin >> src;

    dijkstra(graph, src);
    return 0;
}
