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
unordered_map<string,bool>mp;
bool wordbreakdp(string s,int *dp){
    int n=s.size();
if(s.size()==0)
return true;
if(dp[n]==-1){
    dp[n]=0;
FORS(i,1,s.length()+1){
    string prefix=s.substr(0,i);
    if(mp.find(prefix)!=mp.end() and wordbreakdp(s.substr(i),dp)){
        dp[n]=1;
        return true;
    }
}
}
return dp[n]==1;
}


bool wordbreak(string s){
    if(s.size()==0)
    return true;
    FORS(i,1,s.size()+1){
        string prefix=s.substr(0,i);
        if(mp.find(prefix)!=mp.end() and wordbreak(s.substr(i)))
        return true;
    }
    return false;
}

int main(){/*
string s,temp;
cin>>s;
ll n;
cin>>n;
cin.ignore();
vector<pair<string,bool>>dict;
FORS(i,0,n){
cin>>temp;
dict.push_back({temp,false});
}
FORS(i,0,s.length()){
FORS(j,1,s.length()){
string temp=s.substr(i,j);
string temp2=s.substr(i+j,s.length());
auto a=find(dict.begin(),dict.end(),temp);
auto a2=find(dict.begin(),dict.end(),temp2);
cout<<temp<<" "<<temp2<<endl;
if(a!=dict.end()&&a2!=dict.end()){
    cout<<"true";
    return 0;
}
}
}
cout<<"false";
 */
string str;
cin>>str;
int n;
cin>>n;
FORS(i,0,n){
    string s;
    cin>>s;
    mp[s]=true;
}
int *dp=new int[str.size()+1];
cout<<wordbreak(str)<<endl;
FORS(i,0,str.size()+1)
dp[i]=-1;
cout<<wordbreakdp(str,dp);
}