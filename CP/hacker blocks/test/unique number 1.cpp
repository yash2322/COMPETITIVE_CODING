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
    ll n,inp;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
        v.push_back(inp);
    }
    bool found=false;
    for(ll i=0;i<n-1;i+=2){
        ll value=v[i]^v[i+1];
       // cout<<value<<endl;
        if(value){
            found=true;
            cout<<v[i];
            return 0;
        }
    }
    if(!found)
    cout<<v[n-1];
}