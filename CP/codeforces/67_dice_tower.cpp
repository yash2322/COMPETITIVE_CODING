#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n,top,a,b;
    cin>>n>>top;
    bool condition=true;
    for(long int i=0;i<n;i++)
    {
    cin>>a>>b;
    if((7-a)==top||7-b==top||top==a||top==b)
        condition=false;
    }
    if(condition==false)
        cout<<"NO\n";
    else
        cout<<"YES\n";

}
