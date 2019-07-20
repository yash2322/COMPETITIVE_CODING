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
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
        v.push_back(inp);
    }
    int ans[n+1];
    ans[0]=0;
    FORS(i,1,n+1){
        ll fina_max=INT_MIN;
        FORS(j,0,i)
            fina_max=max(fina_max,v[j]+ans[i-j-1]]);
        ans[i]=fina_max;
    }
    cout<<fina_max;
}