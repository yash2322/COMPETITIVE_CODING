#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{


string s1,s2;
cin>>s1>>s2;
FORS(i,0,s1.length())
s1[i]=tolower(s1[i]);
FORS(i,0,s2.length())
s2[i]=tolower(s2[i]);
if(s2>s1)
    cout<<"-1\n";
else if(s1>s2)
    cout<<"1\n";
else
    cout<<"0\n";
}

