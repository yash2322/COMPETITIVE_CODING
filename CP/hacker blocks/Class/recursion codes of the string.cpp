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
vector<string>v;
int recur(string s,string output){
if(s.length()==0){
    v.push_back(output);
    return 0;
}
int first=s[0]-'0';
int second=0;
if(s.length()>=2)
{
    second=stoi(s.substr(0,2));
     recur(s.substr(1),output+char(96+first));
    if(second<=26)
    recur(s.substr(2),output+char(96+second));
}
else
recur(s.substr(1),output+char(96+first));
}
int main(){
    string s;
    cin>>s;
    recur(s,"");
    cout<<"[";
    FORS(i,0,v.size()){
        if(i!=v.size()-1)
        cout<<v[i]<<", ";
    }
    cout<<v[v.size()-1]<<"]";
}