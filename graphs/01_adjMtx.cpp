// Representation of Graphs in the form of Adjacency Matrix.

#include <iostream>
#include <vector>
using namespace std;

// adjacency matrix
// indirected unweighted graph

int main()
{
    int vertex, edges;
    cin>>vertex>>edges;

    // let's build our matrix.
    vector<vector<bool> >AdjMat(vertex, vector<bool>(vertex, 0));     // for unweighted;      // this zero initializes the whole matrix with 0
    // vector<vector<int> >AdjMat(vertex, vector<int>(vertex, 0));     // for weighted;

    int u, v; //int weight
    for (int i= 0; i < edges; i++)
    {
        cin >> u >> v;             // we take inputs of all the vertices forming an edge.
                                   // cin >> u >> v >> weight;
        AdjMat[u][v] = 1;          // AdjMat[u][v] = weight;     
        AdjMat[v][u] = 1;          // AdjMat[v][u] = weight;             // this 2nd line for AdjMat[v][u] will be eliminated for directed graph. 
    }

    // prints my matrix
    for(int i=0 ; i < vertex; i++){
        for(int j=0 ; j < vertex; j++)
            cout<<AdjMat[i][j]<<" ";
        
        cout<<endl;
    }
    /* 0 1 1 0 0
       1 0 1 1 0
       1 1 0 0 1
       0 1 0 0 1
       0 0 1 1 0  */

}
