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
//cout<<"yeash\n";
string s;
cin>>s;
/*vector<vector<ll>>dp_matrix(s.length(),vector<ll>(s.length(),0));
FORS(i,1,s.length()){
    FORS(j,1,s.length()){
        if(s[i]==s[j]&&i!=j)
        dp_matrix[i][j]=1+dp_matrix[i-1][j-1];
        else{
            dp_matrix[i][j]=max(dp_matrix[i-1][j],dp_matrix[i][j-1]);
        }
}
}
    cout<<dp_matrix[s.length()-1][s.length()-1];*/
int **dp=new int*[s.size()+1];
FORS(i,0,s.size()+1){
    dp[i]=new int[s.size()+1];
}
FORS(i,0,s.size()+1){
    dp[i][0]=0;
    dp[0][i]=0;
}
FORS(i,1,s.size()+1){
    FORS(j,1,s.size()+1){
        if(s[i-1]==s[j-1]&&i!=j){
            dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
cout<<dp[s.size()][s.size()];
}