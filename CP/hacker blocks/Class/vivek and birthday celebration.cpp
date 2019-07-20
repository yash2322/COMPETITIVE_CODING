#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define max_val 150;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
vector<vector<ll>>adjl;
ll dfs(ll start,vector<bool>&visited){
    visited[start]=true;
    FORS(i,0,adjl[start].size()){
        if(!visited[adjl[start][i]])
            dfs(adjl[start][i],visited);
    }
}
int main(){
    ll n, e;
    cin>>n>>e;
  adjl.resize(n);
    FORS(i,0,e){
        ll s,d;
        cin>>s>>d;
        adjl[s-1].push_back(d-1);
    }
//     FORS(i,0,n){
//         FORS(j,0,adjl[i].size())
//         cout<<adjl[i][j]<<" ";
//         cout<<endl;
// }
    ll min_visit=n+2;
    FORS(i,0,n){
        ll count=0;
        vector<bool>visited(n,false);
        dfs(i,visited);
        FORS(i,0,n)
        if(visited[i])
            count++;
        if(count<min_visit)
            min_visit=count;
    }
    if(min_visit!=0)
    cout<<min_visit;
    else{
        cout<<1;
    }
    
    
}