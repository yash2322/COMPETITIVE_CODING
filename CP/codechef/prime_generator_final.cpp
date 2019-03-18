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
//memset(primes,true,sizeof(primes));
ll counter=2;
for(ll i=0;i<primes.size();i++)
{
    if(primes[i].second==true&&primes[i].first!=1)
    {
        for(ll j=counter;j<=sqrt(n)+1;j+=counter)
        {
            ll index_to_change=j-m;
          //  cout<<index_to_change<<endl;
            primes[index_to_change].second=false;
        }
    }
}
for(auto x:primes)
{
    if(x.second==true&&x.first!=1)
    cout<<x.first<<" ";
}
cout<<endl;
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
}

}