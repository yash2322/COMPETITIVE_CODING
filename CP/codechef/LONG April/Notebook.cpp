#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
    long int x,y,k,n,want_pages,p,c;
    cin>>x>>y>>k>>n;
    want_pages=x-y;
    bool found=false;
    for(long int i=0;i<n;i++)
    {
        cin>>p>>c;
        if(p>=want_pages&&c<=k)
            found=true;
    }
    if(found)
        cout<<"LuckyChef\n";
        else
        {
            cout<<"UnluckyChef\n";
        }
        
}
}