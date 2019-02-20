#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
int main()
{
int n,k,contestants=0,i,index_of_zero=0;
cin>>n>>k;
int arrays[n];
FORS(i,1,n+1)
{
cin>>arrays[i];
}
FORS(i,1,n+1)
{
    if(arrays[i]>=arrays[k]&&arrays[i]!=0)
        contestants++;
}
cout<<contestants;
}
