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
class edges{
    public:
     int source,destination,wt;
};
class Set{
    public:
    int parent,rank;
};
int find_fn(int i,Set *set){
    if(set[i].parent!=i){
        set[i].parent=find_fn(set[i].parent,set);
    }
return set[i].parent;
}
int find_fn2(int i,Set *set){
    if(set[i].parent!=i){
        return find_fn2(set[i].parent,set);
    }
return set[i].parent;
}
void Union(Set *set,int v,int u){
int v_root=find_fn(v,set);
int u_root=find_fn(u,set);
if(set[v_root].rank<=set[u_root].rank){
    set[v_root].parent=u_root;
    set[u_root].rank++;
}
else if(set[v_root].rank>set[u_root].rank)
    {
        set[u_root].parent=v_root;
        set[v_root].rank++;
    }
}

bool mycomp(edges e1,edges e2){
    return e1.wt<e2.wt;
}
int kruskal(edges *edge,int e, int n){
    sort(edge,edge+e,mycomp);
    Set *set=new Set[n];
    for(int i=0;i<n;i++){
        set[i].parent=i;
        set[i].rank=-1;
    }
    int total_weight=0;
    for(int i=0;i<n;i++){
        edges current_edge=edge[i];
        int srcParent=find_fn(current_edge.source,set);
        int destParent=find_fn(current_edge.destination,set);
        if(srcParent!=destParent){
            Union(set,srcParent,destParent);
            total_weight+=current_edge.wt;
        }
    }
    return total_weight;
}
int main(){
int n,e;
cin>>n>>e;
edges *edge=new edges[e];
FORS(i,0,e){
int s,d,w;
cin>>s>>d>>w;
edge[i].wt=w-1; // input starting from 1
edge[i].source=s;
edge[i].destination=d-1;
}
cout<<kruskal(edge,e,n);
}