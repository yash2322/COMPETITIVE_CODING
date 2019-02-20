#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,rating1,rating2;
string s;
cin>>n;
bool flag=false;
FORS(i,0,n)
{
    cin.ignore();
    cin>>s;
    cin>>rating1>>rating2;
    if(rating1>=2400)
    {
        if(rating2>rating1)
            flag=true;
    }

}
if(flag)
    cout<<"YES\n";
else
    cout<<"NO\n";

}
