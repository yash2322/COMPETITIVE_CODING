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
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,inp;
        cin>>n;
        vector<ll>cost,d;

        FORS(i,0,n){
            cin>>inp;
            cost.push_back(inp);
        }
        FORS(i,0,n){
            cin>>inp;
            d.push_back(inp);
        }
        ll current_cost=cost[0],current_distance=d[0],final_cost=cost[0]*d[0];
        FORS(i,1,n)
        {
            if(cost[i]>=current_cost){
                final_cost+=current_cost*d[i];
            }
            else{
                current_cost=cost[i];
                final_cost+=current_cost*d[i];
            }
        }
        cout<<final_cost<<endl;
    }
}