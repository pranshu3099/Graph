#include <bits/stdc++.h>
using namespace std;
class Graph
{
private:
    int u = 0, v = 0;

public:
    void add_edge(int, int, int);
};

vector<pair<int, int>> arr[6];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<float> dist(6, INFINITY);

void Graph::add_edge(int x, int y, int z)
{
    u = x;
    v = y;
    arr[u].push_back({z, v});
    // z is distance and v is destination node
}

void ShortestPath()
{

    while (!pq.empty())
    {

        int y = pq.top().second;
        for (auto x : arr[y])
        {
            int z = dist[y] + x.first;
            if (z < dist[x.second])
            {
                dist[x.second] = z;
                pq.push({z, x.second});
            }
        }
        pq.pop();
    }
}

int main()
{
    Graph G;

    G.add_edge(1, 2, 2);
    G.add_edge(1, 4, 1);
    G.add_edge(2, 1, 2);
    G.add_edge(2, 5, 5);
    G.add_edge(2, 3, 4);
    G.add_edge(3, 2, 4);
    G.add_edge(3, 4, 3);
    G.add_edge(3, 5, 1);
    G.add_edge(4, 1, 1);
    G.add_edge(4, 3, 3);
    G.add_edge(5, 2, 5);
    G.add_edge(5, 3, 1);

    int source = 1;
    // here 0 is the distance
    dist[1] = 0;
    pq.push(make_pair(0, source));
    ShortestPath();
    for (int i = source; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }

// TIME COMPLEXITY = O((N+E)LOG N)(where n+e for traversing nodes and edges and logn time to traverse priority queue)
// SPACE COMPLEXITY = O(n)+O(n)(distance array and a priority queue)


}
