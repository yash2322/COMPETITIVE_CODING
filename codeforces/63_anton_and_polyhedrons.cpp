#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int n,faces=0;
cin>>n;
string s[n];
FORS(i,0,n)
{
    cin>>s[i];
    if(s[i][0]=='T')
        faces=faces+4;
    else if(s[i][0]=='C')
        faces+=6;
    else if(s[i][0]=='O')
        faces+=8;
    else if(s[i][0]=='D')
        faces+=12;
    else if(s[i][0]=='I')
        faces+=20;
}
cout<<faces;
}
