#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
class Graph{
    public:
    int v;
    list<pair<int,int>>*adj;
    Graph(int v){
        this->v=v;
        adj=new list<pair<int,int>>[v];
    }
void addEdge(int wt,int src,int dest){
        adj[src].push_back({wt,dest});
     adj[dest].push_back({wt,src});
}
}
int prims(){
    int totalweght=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<int,int>) pq;
    pq.push({0,0});
    unordered_map<int,bool>visited;
    //setup
    while(!pq.empty()){
    int curr_v=pq.top().second;
    if(visited.find(curr_v)!=visited.end()){
        pq.pop();
        continue;
    }
    visited[curr_v]=true;
    totalweght+=pq.top().second;
    pq.pop();
    for(auto neighbour:adj[curr_v]){
        pq.push({neighbour.first,neighbour.second});
    }
    }   
    return totalweght;
}
int main(){
Graph g(7);
FORS(i,0,n){
    ll wt,src,dest;
    cin>>wt>>src>>dest;
    g.addEgde(wt,src,dest);
}   
prims();
}