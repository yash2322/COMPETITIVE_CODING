#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n=50;

    for(long int i=2;i<=n;i++)
    {
        bool c=true;
        for(long int j=2;j*j<=i;j++)
        {
            if(i%j==0)
                c=false;
        }
        if(c)
            cout<<i<<" ";

    }
}
