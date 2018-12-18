#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    string s,t;
cin>>s>>t;
int x=0;
FORS(i,0,s.length())
{
    // if any character will not match then x will not be equal to length of string
    if(s[i]!=t[t.length()-i-1])
        break;
        x=i+1;
}

if(x==s.length())
    cout<<"YES";
else
    cout<<"NO";
}
