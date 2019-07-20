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
vector<vector<pair<ll,ll>>>edge;
vector<ll>distance_array;
void addedge(int src,int dest,int wt){
    edge[src][dest]=wt;
    edge[dest][src]=wt;
}
int bellmanford(int n){
    FORS(i,0,n-1){
        FORS(j,1,n){
            if(i!=j&&distance_array[j]>distance_array[i]+edge[i][j].second);
                distance_array[j]=distance_array[i]+edge[i][j].second;
        }
    }
}
int main(){
    ll n;
    cin>>n;
    edge.resize(n);
    FORS(i,0,n){
        edge[i].resize(n);
    }
    FORS(i,0,n){
        ll src,dest,wt;
        cin>>src>>dest>>wt;
        addedge(src,dest,wt);
    }
    distance_array.resize(n);
    distance_array[0]=0;
    FORS(i,1,n){
        distance_array[i]=max_val;
    }
    bellman_ford(n);

}