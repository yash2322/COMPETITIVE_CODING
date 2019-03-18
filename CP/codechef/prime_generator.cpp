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
void prime(ll m,ll n)
{
 vector<pair<ll,bool>>primes(n-m+1);
 for(ll i=0;i<primes.size();i++)
{
    primes[i].first=i+m;
    primes[i].second=true;
    //cout<<primes[i].first<<" "<<primes[i].second<<endl;
}
FORS(i,2,sqrt(n+1))
{
    
FORS(j,0,primes.size())
{
    if(primes[j].first%i==0)
        primes[j].second=false;
}

}

FORS(i,m,n+1)
{
    ll count=0;
FORS(j,2,sqrt(i+1))
{

}
if(count==0&&i!=1)
cout<<i<<endl;

}
}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        prime(m,n);
        cout<<endl;
    }
}