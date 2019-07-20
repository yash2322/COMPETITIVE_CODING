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
int dp[100][100];
int sum(vector<ll>v,int i,int j){
    int result=0;
    for(int k=i;k<=j;k++){
        result=((result%100)+(v[k]%100))%100;
    }
    return result;
}
int chain_mul(vector<ll>v,ll start_index,ll j){
    if(start_index==j)
    return 0;
    if(abs(start_index-j)==1){
        return v[start_index]*v[j];
    }
    int result=INT_MAX;
    if(dp[start_index][j]!=-1)
    return dp[start_index][j];
    FORS(i,start_index+1,j+1){
        int retval=chain_mul(v,start_index,i-1)+chain_mul(v,i,j)+(sum(v,start_index,i-1)*sum(v,i,j));
        if(retval<result)
        result=retval;
    }
    dp[start_index][j]=result;
    return result;
}
int main(){
    ll n;
    while(cin>>n){
    ll inp;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
        v.push_back(inp);
    }
     FORS(i,0,100)
    {
        FORS(j,0,100)
        dp[i][j]=-1;
    }
    cout<<chain_mul(v,0,n-1)<<endl;
    }
}