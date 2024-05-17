/* #include <iostream>
#include <vector>
using namespace std;

// undirected graph (no weight)

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int>AdjList[vertex] ;           // size would be equal to the nmbr of vertices

    int u, v;
    for(int i=0; i<edges; i++){
        cin >> u >> v;
        AdjList[u].push_back(v);   
        AdjList[v].push_back(u);

    }   


    // Print the list
    for(int i = 0; i < vertex ; i++)
    {
        cout << i << "->";
        for( int j = 0; j < AdjList[i].size(); j++)
        {
            cout << AdjList[i][j] << " ";
        }
            cout << endl;
    }

    /*  0->1 2
        1->0 2 3
        2->1 0 4
        3->1 4
        4->3 2    */







// for undirected weighted graph

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<pair<int, int> >AdjList[vertex];

    int u, v, wgt;
    for (int i=0; i<edges; i++){
        cin>>u>>v>>wgt;
        AdjList[u].push_back(make_pair(v, wgt));
        AdjList[v].push_back(make_pair(u, wgt));
    }

    // Print the list
    for(int i = 0; i < vertex ; i++)
    {
        cout << i << "->";
        for( int j = 0; j < AdjList[i].size(); j++)
        {
            cout << AdjList[i][j].first << " " << AdjList[i][j].second << " ";
        }
            cout << endl;
    }
}   

/* 0->1 10 2 5
   1->0 10 2 9 3 8
   2->1 9 4 5 0 5
   3->1 8 4 11
   4->3 11 2 5 */