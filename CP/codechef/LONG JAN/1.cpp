#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
#define FORE(i,a,b) for(int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int t;
cin>>t;
cin.ignore();
FORS(j,0,t)
{
    bool c=false;
string s,words="";
getline(cin,s);
FORS(i,0,s.length())
{
if(s[i]!=' ')
    words=words+s[i];
else if(s[i]==' ')
{
    if(words=="not")
        c=true;
    words="";
}
if(i==s.length()-1)
{
if(words=="not")
      c=true;
}
}
if(c)
    cout<<"Real Fancy\n";
else
    cout<<"regularly fancy\n";
}

}
