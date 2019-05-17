#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())

//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
/*ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}*/



ll nodes,edges,i,j;
vector<vector<long int>>adjency_matrix;
vector<bool>visited(100001,false);
vector<long int>clr;
bool bipartite()
{
    clr[0] = 1;
    queue <int> q;
    q.push(0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        FORS(i,0,nodes)
        {
            if (adjency_matrix[temp][i] && clr[i] == -1)
            {
                clr[i] = 1 - clr[temp];
                q.push(i);
            }
            else if (adjency_matrix[temp][i] && clr[i] == clr[temp])
                return 0;
        }
    }
    return 1;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll x,y;
    cin>>nodes>>edges;
    adjency_matrix.resize(nodes+1);
    clr.resize(nodes,-1);
    FORS(i,0,nodes)
       {
         adjency_matrix[i].resize(nodes+1);
       }
    FORS(i,0,edges)
    {
        cin>>x>>y;
        x--;
        y--;
        adjency_matrix[x][y]=1;
        adjency_matrix[y][x]=1;
    }
    if(bipartite())
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
    return 0;
}
