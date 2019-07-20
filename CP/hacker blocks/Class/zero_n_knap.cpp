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
ll zero_n(ll cap,ll n,vector<ll>weight,vector<ll>value){
    ll solve[W+1];
    memset(solve,0, sizeof(solve);
    FORS(i,0,cap+1){
     FORS(j,0,n)
        if(weight[j]<=i) 
        solve[i]=max(solve[i], solve[i-weight[j]]+value[j]);
    }
    return solve[W]; 
}
int main(){
ll cap,n;
cin>>n>>cap;
vector<ll>weight,value;
FORS(i,0,n){
    ll input;
    cin>>input;
    weight.push_back(input);
}
FORS(i,0,n){
    ll input;
    cin>>input;
    value.push_back(input);
}
cout<<zero_n(cap,n,weight,value);
}