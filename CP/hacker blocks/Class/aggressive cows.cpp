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
bool possibe(vector<ll>v,ll mid,ll n,ll c){
    ll last_cow=v[0],current_cow=1;
    FORS(i,0,n){
        if(v[i]-last_cow>=mid){
            current_cow++;
            last_cow=v[i];
        }
        if(current_cow==c)
        return 1;
    }
    if(current_cow==n)
    return 1;
    else return 0;
}
int main(){
    ll n,c;
    cin>>n>>c;
    vector<ll>v;
    FORS(i,0,n){
        ll inp;
        cin>>inp;
        v.push_back(inp);
    }
    sort(v.begin(),v.end());
    ll res=-1;
    ll f=0,l=n-1,mid=(f+l)/2;
    while(f<=l){
        if(possibe(v,mid,n,c)){
            res=mid;
            f=mid+1;
        }
        else
            l=mid-1;
    }
}