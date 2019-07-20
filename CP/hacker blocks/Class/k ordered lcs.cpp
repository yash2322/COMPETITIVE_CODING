#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define MAXS 2001
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
int dp[MAXS][MAXS][9];
int korderedLCS(int v1[],int v2[],int n,int m,ll k,ll i,ll j){
    if(i==n||j==m)
    return 0;
    if(dp[i][j][k]!=-1)
    return dp[i][j][k];
    int res=0;
    if(v1[i]==v2[j]){
        res=1+korderedLCS(v1,v2,n,m,k,i+1,j+1);
        dp[i][j][k]=res;
        return res;
    }
    else
    {
        ll c1=-1,c2=-1,c3=-1;
        c1=korderedLCS(v1,v2,n,m,k,i+1,j);
        c2=korderedLCS(v1,v2,n,m,k,i,j+1);
        if(k>0)
        c3=1+korderedLCS(v1,v2,n,m,k-1,i+1,j+1);
        res=max(max(c1,c2),c3);
        dp[i][j][k]=res;
        return res;
    }
    
}
int main(){
ll n,m,k,inp;
cin>>n>>m>>k;
int v1[n],v2[m];
FORS(i,0,n){
cin>>inp;
v1[i]=inp;
}
FORS(j,0,m){
    cin>>inp;
    v2[i]=inp;
}
FORS(i,0,2001){
    FORS(j,0,2001){
        FORS(k,0,8)
        dp[i][j][k]=-1;
    }
}
ll result=korderedLCS(v1,v2,n,m,k,0,0);
cout<<result;
}