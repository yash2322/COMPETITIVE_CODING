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
int Longest_I_S(vector<ll>v,ll n){
    int *dp=new int[n];
    // FORS(i,0,n){
    //     dp[i]=1;
    // }
    // FORS(i,0,n)
    // cout<<v[i]<<" ";
    // cout<<endl;
     //memset(dp,1,sizeof(dp));
     FORS(i,0,n)
     dp[i]=1;
    FORS(i,1,n){
        FORS(j,0,i)
        if(v[i]>v[j])
            dp[i]=max(dp[i],1+dp[j]);
    }
    ll res=1;
    FORS(i,0,n)
    if(dp[i]>res)
    res=dp[i];
    
    return res;

}
int main(){
    ll n,inp;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
     cin>>inp;
     v.push_back(inp);   
    }
    int res=Longest_I_S(v,n);
    cout<<res<<endl;
}