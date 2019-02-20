#include <bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;

using  namespace std;
class Graph{

int v;
vector<vector<long int>>adj_list;
public:
    Graph(long int vertices);
    void addEdge(long int a,long int b);

    void BFS(long int s);
};
Graph::Graph(long int vertices)
{
    this->v=vertices;
    adj_list.resize(v);
}
void Graph::addEdge(long int a,long int b)
{
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
}
void Graph::BFS(long int s)
{
    vector<bool>visited(this->v,false);
    queue<long int>next_exploring;
    next_exploring.push(s);
    visited[s]=true;
    while(!next_exploring.empty())
    {
        long int temp=next_exploring.front();
        cout<<"CURRENT NODE : "<<temp<<"\n";
        next_exploring.pop();
        for(long int i=0;i<adj_list[temp].size();i++)
        {
            if(!visited[adj_list[temp][i]])
            {
                next_exploring.push(adj_list[temp][i]);
                visited[adj_list[temp][i]]=true;
            }
        }
    }
}
int main()
{
  Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout<<"Enter the starting point\n";
    int start_v;
    cin>>start_v;
    cout<<"BFS :: IS AS FOLLOWS\n";
    g.BFS(start_v);
}

