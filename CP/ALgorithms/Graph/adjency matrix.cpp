#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
void addEdge(long int a,long int b,vector<vector<long int>>&matrix)
{
    matrix[a][b]=1;
}
int main()
{
long int V,a,b,number_of_edges;
cin>>V;
vector<vector<long int>>matrix(V,vector<long int>(V,0));
cin>>number_of_edges;
FORS(i,0,number_of_edges)
{
    cin>>a>>b;
    addEdge(a,b,matrix);
}
FORS(i,0,V)
{
    FORS(j,0,V)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}
