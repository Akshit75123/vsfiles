
// given an undirected graph having n nodes,the task is to print the nodes having second maximum degree.
#include <iostream>
#include <vector>

using namespace std;

void findSecondMaxDegree(vector<vector<int>> &graph)
{
    int n = graph.size();      // Number of nodes
    vector<int> degrees(n, 0); // Store the degrees of each node
    int maxDegree = 0, secondMaxDegree = 0;

    // Calculate the degrees of each node
    for (int i = 0; i < n; i++)
    {
        degrees[i] = graph[i].size();

        // Update maximum and second maximum degrees
        if (degrees[i] > maxDegree)
        {
            secondMaxDegree = maxDegree;
            maxDegree = degrees[i];
        }
        else if (degrees[i] > secondMaxDegree && degrees[i] < maxDegree)
        {
            secondMaxDegree = degrees[i];
        }
    }

    // Print the nodes with the second maximum degree
    cout << "Nodes with second maximum degree: ";
    for (int i = 0; i < n; i++)
    {
        if (degrees[i] == secondMaxDegree)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n; // Number of nodes
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<vector<int>> graph(n);

    cout << "Enter the number of edges: ";
    int edges;
    cin >> edges;

    cout << "Enter the edges:" << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    findSecondMaxDegree(graph);

    return 0;
}




