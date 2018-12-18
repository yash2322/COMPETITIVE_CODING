#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,d=1;
cin>>n;
FORS(i,1,n+1)
{
    FORS(j,1,n+1)
    {
        if(j>=((n/2)+1-(d/2))&&j<=((n/2)+1+(d/2)))
            cout<<"D";
        else
            cout<<"*";

    }
    if(i<n/2+1)
    d+=2;
    else
        d-=2;
    cout<<endl;
}
}
