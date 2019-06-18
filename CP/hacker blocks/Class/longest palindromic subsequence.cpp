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
int lps(string s){
int **dp=new int*[s.size()];
FORS(i,0,s.size()){
    dp[i]=new int[s.size()];
}
int n=s.size();
FORS(i,0,n){
    FORS(j,0,n){
        dp[i][j]=0;
    }
}
//base case
FORS(i,0,n){
    dp[i][i]=1;
}
for(int len=2;len<=n;len++){
    for(int i=0;i<=n-len;i++){
        int j=i+len-1;
        if(s[i]==s[j]&& len==2)
            dp[i][j]=2;
            else if(s[i]==s[j])
                dp[i][j]=dp[i+1][j-1]+2;
                else
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);

    }
}
return dp[0][n-1];
}
int main(){
string s;
cin>>s;
cout<<lps(s);
}