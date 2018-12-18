#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,count_1=0,p,q;
cin>>n;
FORS(i,0,n)
{
    cin>>p>>q;
    if((q-p)>1)
       count_1++;
}
cout<<count_1<<endl;
}
