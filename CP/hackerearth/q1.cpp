#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string s;
cin>>s;
int x,y;
vector<int> z;
cout<<s.length();
FORS(i,0,s.length())
{
    x=s[i]-'0';
    if(x>=0&&x<=9)
    z.push_back(x);
}
bool a=true;
//cout<<z[z.size()]<<endl;

FORS(i,0,z.size()-2)
{

    if(i!=4)
    if((z[i]+z[i+1])%2!=0)
    {
       // cout<<"u";
        a=false;
    }

    if(s[2]=='A'||s[2]=='E'||s[2]=='I'||s[2]=='O'||s[2]=='U'||s[2]=='Y')
        {
          //  cout<<"b";
        a=false;
        }


}
if(a==false)
    cout<<"invalid";
    else
    cout<<"valid";
}
