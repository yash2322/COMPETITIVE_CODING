#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int count_lucky=0;
string s;
cin>>s;
FORS(i,0,s.length())
{
if(s[i]=='4'||s[i]=='7')
    count_lucky++;
}
bool flag=true;
string x=to_string(count_lucky);
cout<<x<<endl;
FORS(i,0,s.length())
{
    if(x[i]!='4'&&x[i]!='7')
        flag=false;
}

if(flag)
    cout<<"YES\n";
else
    cout<<"NO\n";

}
