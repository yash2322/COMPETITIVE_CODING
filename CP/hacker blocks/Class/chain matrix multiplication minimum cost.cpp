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
int chain_mul(vector<ll>v,ll start_index,ll j){
    if(abs(start_index-j)==1){
        return 0;
    }
    int result=INT_MAX;
    FORS(i,start_index,j-1){
        int retval=chain_mul(v,start_index,i+1)+chain_mul(v,i+1,j)+v[start_index-1]*v[i]*v[j-1];
        if(retval<result)
        result=retval;
    }
    return result;
}
int main(){
    ll n,inp;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
        v.push_back(inp);
    }
    cout<<chain_mul(v,1,n);
}