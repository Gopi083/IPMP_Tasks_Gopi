#include <bits/stdc++.h>
using namespace std;
 
void addEdge(vector<int> adj[], int a, int b)
{   if(a!=b)
    {
    adj[a].push_back(b);
    adj[b].push_back(a);
    }
    else
    adj[a].push_back(b);
}
 
void graph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; ++i) {
        cout << " Adjacency list of vertex " << i<<" :";
        for (auto x : adj[i])
            cout << "-" << x;
        cout<<endl;
    }
}
 
int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 1);
    addEdge(adj, 4, 4);
    graph(adj, V);
    return 0;
}
