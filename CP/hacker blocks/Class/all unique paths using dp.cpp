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
int n,m;
cin>>n>>m;
vector<vector<ll>>dp;
dp.resize(n);
FORS(i,0,n){
dp[i].resize(m);
} 
    /* FORS(j,0,m)
    dp[0].push_back(1);
    
    FORS(j,0,n)
    dp[j][0]=1;

    FORS(i,1,n){
        FORS(j,0,m){
            dp[i].push_back(dp[i-1][j],dp[i][j-1]);
        }
    }*/
}