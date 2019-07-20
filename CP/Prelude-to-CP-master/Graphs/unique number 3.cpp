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
sort(v.begin(),v.end());
bool found1=false;
for(ll i=0;i<n-2;i++){
    ll value=v[i]^v[i+1]*v[i+2];
    cout<<i<<" ";
    if(value==0)
        i+=2;
    else{
        //found1=true;
        cout<<v[i]<<" ";
        found1=true;
        break;
    }
}
if(!found1)
cout<<v[n-1];
}