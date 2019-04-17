#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,c,sum=0,min_candy;
        cin>>n>>c;
        for(long int i=0;i<n;i++)
        {
        cin>>min_candy;
        sum+=min_candy;
        }
        if(sum>c)
            cout<<"No\n";
        else
            cout<<"Yes\n";

    }
}
