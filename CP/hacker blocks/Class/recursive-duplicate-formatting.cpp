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
void formattin(string s,string output){
    if(s.size()==0)
    {
        cout<<output;
        return;
    }
    if(s[0]==s[1])
    {
        output=output+s[0]+"*"+s[1];
        formattin(s.substr(2),output);
    }
    else
    {
         output=output+s[0];
        formattin(s.substr(1),output);
    }
}

int main(){
    string s;
    cin>>s;
    formattin(s,"");
}