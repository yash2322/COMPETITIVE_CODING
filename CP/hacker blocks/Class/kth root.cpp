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
ll binary_s(ll start,ll end,ll n,ll k){
    ll mid=(start+end)/2;
    if(start<=end){
        if(pow(mid,k)==n)
            return mid;
        else if(pow(mid,k)<n)
            return binary_s(mid+1,end,n,k);
        else
            return binary_s(start,mid-1,n,k);   
    }
    return mid;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x=0;
        cin>>n>>k;
        cout<<binary_s(0,n,n,k)<<endl;
    }
}