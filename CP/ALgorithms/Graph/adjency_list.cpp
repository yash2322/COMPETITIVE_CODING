#include <bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;

using  namespace std;
void addEdge(vector<vector<long int>>&adjList,long int a,long int b)
{
    adjList[a].push_back(b);
    adjList[b].push_back(a);
}

int main()
{
long int V,a,b,number_of_edges;
cin>>V;
vector<vector<long int>>adjency_list(V);
cin>>number_of_edges;
FORS(i,0,number_of_edges)
{
    cin>>a>>b;
    addEdge(adjency_list,a,b);
}
FORS(i,0,V)
{
    cout<<"V_start ";
    FORS(j,0,adjency_list[i].size())
    {
        cout<<" -> "<<adjency_list[i][j];
    }
    cout<<endl;
}
}
