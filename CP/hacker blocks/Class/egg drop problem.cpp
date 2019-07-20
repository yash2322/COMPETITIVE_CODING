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
int recur(ll k,ll n){
    ll final_answer=INT_MAX;
    if(n<=1)
    return n;
    if(k==1)
    return n;
    
    //recursive solution
    /* FORS(i,1,n+1){
      ll answer=max(recur(k-1,i-1),recur(k,n-i));
      if(answer<final_answer)
        final_answer=answer;
    }
 return final_answer+1; */  
// dp solution
int dp[k+1][n+1];
FORS(i,0,n+1)
dp[0][i]=0;

FORS(i,0,n+1)
dp[1][i]=i;

FORS(i,0,k+1)
dp[i][0]=0;

FORS(i,0,k+1)
dp[i][1]=1;


FORS(i,2,k+1){
    FORS(j,2,n+1){
        dp[i][j]=INT_MAX;
        FORS(x,1,j+1){
            ll answer=1+max(dp[i-1][x-1],dp[i][j-x]);
            if(answer<dp[i][j])
            dp[i][j]=answer;
        }
    }
}
return dp[k][n];
}

int main(){
ll k,n;
cin>>k>>n;
cout<<recur(k,n);
}