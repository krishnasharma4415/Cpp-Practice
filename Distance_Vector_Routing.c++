#include <iostream>
#include <vector>
using namespace std;

void distanceVectorRouting(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<vector<int>> distance = graph;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (distance[i][k] != INT_MAX && distance[k][j] != INT_MAX)
                    distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Distance vector for node " << i << ": ";
        for (int j = 0; j < n; j++)
        {
            if (distance[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << distance[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix (use INT_MAX for no edge):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 0 && i != j)
                graph[i][j] = INT_MAX;
        }

    distanceVectorRouting(graph);
    return 0;
}
