#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int siz;
string s,p;
cin>>s>>p;
cin>>siz;
int ind=0,found;
string k=p.substr(0,siz);
//cout<<k;

set<int> indexes;
while(true)
{
    found=s.find(p,ind);
    if(found!=string::npos)
    {
      ind=found+1;
      indexes.insert(found);
    }
    if(found==string::npos)
        break;
}
if(indexes.size()!=0)
{
    for(auto a:indexes)
    cout<<a<<" ";
}
else
    cout<<-1<<" ";

}
