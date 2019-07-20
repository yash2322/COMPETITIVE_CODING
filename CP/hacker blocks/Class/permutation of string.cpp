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
vector<string>strings;
ll c=0;
int permute(string s,string output){
if(s.size()==0)
{
    c++;
    strings.push_back(output);
}
FORS(i,0,s.size()){
    permute(s.substr(0,i)+s.substr(i+1,s.size()),output+s[i]);
}
}

int main(){
    string s;
    cin>>s;
    permute(s,"");
    cout<<c<<endl;
    for(auto a:strings)
    cout<<a<<" ";
}