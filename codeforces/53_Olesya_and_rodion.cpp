#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,t,numbers,l;
cin>>n>>t;
l=t;
string s;
s=to_string(t);
if(t<10)
{
for(int i=1;i<n-1;i++){
    s=s+"0";
}
if(n>1)
s=s+to_string(l);

cout<<s;
}
else if(t==10)
{
    for(int i=2;i<n-2;i++)
{
    s=s+"0";

}
if(n==3)
    s=s+"0";
if(n>3)
s=s+to_string(l);
if(n==1&&t==10)
    cout<<-1;
else
    cout<<s<<endl;
}

}
