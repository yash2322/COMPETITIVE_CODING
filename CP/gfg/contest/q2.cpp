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
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>v;
        vector<ll>present(100001,0);
        FORS(i,0,n){
            ll inp;
            cin>>inp;
            v.push_back(inp);
            present[inp]=1;
        }
        bool condition=false;
    FORS(i,0,n){
       if(present[v[i]^c]==1){
           condition=true;
           break;
       }
    }
    if(condition)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    }
}