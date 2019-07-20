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
int subset_sum(ll sum,ll n,vector<ll>values,vector<ll>subsets,ll x){
if(sum==0){
    FORE(i,subsets.size(),0)
    cout<<subsets[i]<<" ";
    cout<<endl;
    return 0;
}
if(n==x)
return 0;

subset_sum(sum,n,values,subsets,x+1);
subsets.push_back(values[x]);
subset_sum(sum-values[x],n,values,subsets,x+1);
}

int main(){
    ll n,sum;
    cin>>n;
    vector<ll>value,subsets;
    FORS(i,0,n){
        ll input;
        cin>>input;
        value.push_back(input);
    }
    cin>>sum;
    subset_sum(sum,n,value,subsets,0);
}