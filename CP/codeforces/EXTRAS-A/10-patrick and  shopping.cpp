#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long long int d1,d2,d3,travelled=0;
bool at_shop=true;  //true if at shop 1 else false;
cin>>d1>>d2>>d3;
if(d1<d2)
{
    travelled+=d1;
}
else
{
 travelled+=d2;
 at_shop=false;
}
if(d3<(d1+d2))
{
    travelled+=d3;
    at_shop=!at_shop;
}
else
{
     travelled+=(d1+d2);
    at_shop=!at_shop;
}
if(at_shop)
{
    if(d1<(d3+d2))
        travelled+=d1;
    else
        travelled+=d3+d2;
}
else
{
    if(d2<(d3+d1))
        travelled+=d2;
    else
        travelled+=d3+d1;
}
cout<<travelled;
}
