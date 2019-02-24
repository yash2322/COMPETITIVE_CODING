#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;

int main()
{
long int a,b;
cin>>a>>b;
string s=to_string(a-b);
FORS(i,0,s.length()-1)
{
    cout<<s[i];
}
a=s[s.length()-1]-'0';
if(s.length()>1)
{
if(a<9)
    cout<<++a;
else
    cout<<0;
}
else
{
    if(a<9)
        cout<<++a;
    else
        cout<<1;
}
}
