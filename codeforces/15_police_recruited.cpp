#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
int n,initial_value=0,crime=0,police_avail=0;
cin>>n;
FORS(i,0,n)
{
    cin>>initial_value;
    if(initial_value<0&&police_avail==0)
        crime++;
    else if(initial_value<0&&police_avail>0)
        police_avail--;
    else if(initial_value>0)
        police_avail+=initial_value;
}
cout<<crime;
}
