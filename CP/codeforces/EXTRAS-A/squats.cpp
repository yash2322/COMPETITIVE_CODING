#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main()
{
 ll n,up=0,lo=0,operations=0;
 cin>>n;
 cin.ignore();
 string s;
 cin>>s;
FORS(i,0,s.length()){
    if(s[i]=='X')
        up++;
    else
        lo++;
}
if(up>lo)
    operations=up-(n/2);
else
    operations=lo-(n/2);
ll oper=operations;
if(up>lo){
    ll index=0;
    while(operations)
    {
    if(s[index]=='X')
    {
        s[index]='x';
        operations--;
    }

    index++;
    }
}
else if(lo>up)
{
    ll index=0;
    //cout<<operations<<endl;
    while(operations)
    {
        //cout<<s[index]<<" ";
    if(s[index]=='x')
    {
        s[index]='X';
        operations--;
    }

    index++;
    }
}
cout<<oper<<endl<<s;
}
