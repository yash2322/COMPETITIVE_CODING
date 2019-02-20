#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
li n,input,dollars=0,energy=0;
cin>>n;
vector<li> value;
FORS(i,0,n)
{
    cin>>input;
    value.push_back(input);
}
dollars=value[0];
FORS(i,0,n-1)
{
energy+=value[i]-value[i+1];
if(energy<0)
{
    dollars+=abs(energy);
    energy=0;
}
}
cout<<dollars;
}
