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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        FORS(i,0,n){
            ll inp;
            cin>>inp;
            v.push_back(inp);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        FORS(i,0,k)
        sum+=v[i];
        cout<<sum<<endl;
    }
}