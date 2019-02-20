#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n,k,first,second;
    cin>>n>>k;
    first=1;
    second=k-1;
    int zeros=0;
    if(n>1)
    {
        FORS(i,0,n)
    {
    FORS(j,0,n)
    {
        if(i==j)
            cout<<first<<" ";
        else if(i==j-1||i==n-1&&j==0)
            cout<<second<<" ";
            else
            cout<<0<<" ";
    }
    cout<<endl;
    }
    }
    else
        cout<<k;
}
