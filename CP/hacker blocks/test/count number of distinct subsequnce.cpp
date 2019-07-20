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
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        
        //map<char,int>occur;
        int subsequnce_length_dp[s.length()+1];
        vector<ll>occur(256,-1);
        //memset(subsequnce_length_dp,1,sizeof(subsequnce_length_dp));
        subsequnce_length_dp[0]=1;
        FORS(i,1,s.length()+1){
            // if(occur.find(s[i])==occur.end()){
            //     subsequnce_length_dp[i]=2*subsequnce_length_dp[i-1];
            //     occur[s[i-1]]=i-1;
            // }
            // else{
            //     subsequnce_length_dp[i]=2*subsequnce_length_dp[i-1]-subsequnce_length_dp[occur[s[i]]];
            //     occur[s[i-1]]=i-1;
            // }
            if(occur[s[i-1]]==-1)
            subsequnce_length_dp[i]=2*subsequnce_length_dp[i-1];
            else
            subsequnce_length_dp[i]=2*subsequnce_length_dp[i-1]-subsequnce_length_dp[occur[s[i-1]]];
            occur[s[i-1]]=i-1;
        }
        cout<<subsequnce_length_dp[s.length()]<<endl;
    }
    
}