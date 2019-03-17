#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
ll crossover(vector<ll>&arr,ll l, ll r)
{
    ll sum=0,mx1=INT_MIN,mx2=INT_MIN,sum2=0;
    FORE(i,(l+r)/2+1,l)
    {
        sum+=arr[i];
        if(sum>mx)
        
            mx=sum;
        }
FORS(i,(l+r)/2+1,r)
    {
        sum2+=arr[i];
        if(sum2>mx2)
        
            mx2=sum2;
        }
        return (mx1+mx2);
}
ll myfunction(vector<ll>&arr,ll l, ll r)
{
    if(l==r)
        return arr[l];
    return max(myfunction(arr,l,(l+r)/2),myfunction(arr,(l+r)/2+1,r),crossover(arr,l,r));
   
}
int main()
{
    vector<ll>arr;
    ll input,n;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>input;
        arr.push_back(input);
    }
    ll l=0,r=n-1;
    myfuntion(arr,l,r);
}