#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n;
cin>>n;
string s;
char f,l;
FORS(i,0,n)
{
cin>>s;
if(s.length()>10)
{
    f=s[0];
    l=s[s.length()-1];
    cout<<f<<s.length()-2<<l<<endl;
}
else
    cout<<s<<endl;
}

}
