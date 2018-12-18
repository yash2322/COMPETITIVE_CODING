#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
string s,temp;
//cout<<s;
FORS(i,0,k)
{
s+='a'+i;
}
temp=s;

FORS(i,0,n-k)
{
    s.append(temp,i%k,1);
}
cout<<s;



}
