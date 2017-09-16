#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> graph[], int a, int b)
{
	graph[a].push_back(b);
	graph[b].push_back(a);
}


int main()
{
	int v=5;
	vector<int> graph[v];

	addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);	
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    for (int i=0;i<v;i++)
    {
    	for (vector<int>::iterator it = graph[i].begin(); it != graph[i].end(); ++it)
    	{
    		cout<< *it << " ";
    	}

    	cout<<endl;
    }
}