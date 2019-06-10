#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main()
{
ll n;
cin>>n;
ll current_min=500,cost=0;
ll a,p;
FORS(i,0,n)
{
cin>>a>>p;
    if(i==0)
    {
        current_min=p;
        cost+=a*p;
    }
    else {
        if(current_min>p)
            current_min=p;
        cost+=a*current_min;
    }
}
cout<<cost;
/*



*/





}
