#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
string s;
int ra=0,rb=0,rc=0;
FORS(i,0,3)
{
    cin>>s;
   if(s[0]=='A')
   {
       if(s[1]=='<'&&s[2]=='B')
       {
           ra--;
           rb++;
       }
       else if(s[1]=='<'&&s[2]=='C')
       {
           ra--;
           rc++;
       }
       else if(s[1]=='>'&&s[2]=='B')
       {
           ra++;
           rb--;
       }
       else if(s[1]=='>'&&s[2]=='C')
       {
           ra++;
           rc--;
       }
   }
   if(s[0]=='B')
   {
       if(s[1]=='<'&&s[2]=='A')
       {
           ra++;
           rb--;
       }
       else if(s[1]=='<'&&s[2]=='C')
       {
           rb--;
           rc++;
       }
       else if(s[1]=='>'&&s[2]=='A')
       {
           ra--;
           rb++;
       }
       else if(s[1]=='>'&&s[2]=='C')
       {
           rb++;
           rc--;
       }
   }
   if(s[0]=='C')
   {
       if(s[1]=='<'&&s[2]=='A')
       {
           ra++;
           rc--;
       }
       else if(s[1]=='<'&&s[2]=='B')
       {
           rc--;
           rb++;
       }
       else if(s[1]=='>'&&s[2]=='A')
       {
           ra--;
           rc++;
       }
       else if(s[1]=='>'&&s[2]=='B')
       {
           rb--;
           rc++;
       }
   }
}
map<int,char> x;
x.insert(pair<int, char>(ra,'A'));
x.insert(pair<int, char>(rb,'B'));
x.insert(pair<int, char>(rc,'C'));
if(x.size()!=3)
    cout<<"Impossible";
else
{
for(auto a:x)
    cout<<a.second;
}
}
