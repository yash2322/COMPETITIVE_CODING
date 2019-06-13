#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;


//lEET CODE
using namespace std;
typedef long long int ll;
void helper(string str, string osf, vector<string>&v){
if(str.size()==0){
    v.push_back(osf);
    return;
}
char ch=str[0];
string ros=str.substr(1);
if(ch>='a'&&ch<='z'){
    helper(ros,osf+ch,v);
    helper(ros,osf+(char)(ch-32),v);
}
else if(ch>='A'&&ch<='Z'){
helper(ros,osf+ch,v);
helper(ros,osf+(char)(ch+32),v);
}
else{
    helper(ros,osf+ch,v);
}
}
int main(){
string s;
cin>>s;
vector<string>v;
helper(s,"",v);
FORS(i,0,v.size())
cout<<v[i]<<endl;
}
