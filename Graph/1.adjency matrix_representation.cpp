//GRAPH using adjency matrix;

#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
    int vertices,start_v,end_vertex;
    cin>>vertices;
    vector<vector<int>> matrix(vertices);
    FORS(i,0,vertices)
    {
    cin>>start_v>>end_vertex;
    matrix[start_v].push_back(end_vertex);
    matrix[end_vertex].push_back(start_v);
    }
    FORS(i,0,vertices)
    {
        cout<<"vertex="<<i<<"\nHEAD=";
    for(auto x:matrix[i])
        cout<<"->"<<x;
    cout<<endl;
    }


}
