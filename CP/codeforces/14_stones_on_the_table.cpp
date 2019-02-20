#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
int n,counts=0;
string s;
cin>>n;
cin>>s;

FORS(i,0,s.length())
{
    if(s[i]==s[i+1])
        counts++;
}
cout<<counts;
}
