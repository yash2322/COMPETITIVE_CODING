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
    ll n,k;
    cin>>n>>k;
   // vector<ll>
   ll f1,t1,final_max=INT_MIN,curr=INT_MIN;
   FORS(i,0,n)
   {
    cin>>f1>>t1;
    if(t1>k)
    {
        ll joy=f1-(t1-k);
        if(joy>final_max)
            final_max=joy;
    }
    else{
        ll joy=f1;
         if(joy>final_max)
            final_max=joy;

    }
   }
   cout<<final_max;

}
