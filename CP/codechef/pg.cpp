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
void myfunction(ll m,ll n)
{
 vector<pair<ll,bool>>primes;
 vector<ll>primes_till_hundred;
   primes_till_hundred.push_back(2);
 FORS(i,2,950)
 {
      ll counter=0;
     FORS(j,2,sqrt(i)+1)
     {
         if(i%j==0)
         {
             counter++;
         }
     }
     if(counter==0)
     
     {
    primes_till_hundred.push_back(i);
    // cout<<i<<" ";
     }
     
 }
 
 bool flag=false;
 FORS(i,m,n+1)
 {
     FORS(j,0,primes_till_hundred.size())
     {
            if(i%primes_till_hundred[j]==0)
            flag=true;
     }
     if(flag==false)
     primes.push_back(make_pair(i,true));
 }
    //cout<<primes[i].first<<" "<<primes[i].second<<endl;
    FORS(i,2,sqrt(n+1))
{
    FORS(j,0,primes.size())   
    {
        if(primes[j].first%i==0&&primes[j].first>3)
        {
            primes[j].second=false;
        }
    }
}
ll counter=0;
if(m<=947)
{
    //cout<<"yes\n";
    while(primes_till_hundred[counter]<=947)
    {
        if(primes_till_hundred[counter]>=m&&primes_till_hundred[counter]<=n)
    cout<<primes_till_hundred[counter]<<endl;
    
    counter++;
    }
    
}
FORS(i,0,primes.size())
{
    if(primes[i].second&&primes[i].first!=1)
    cout<<primes[i].first<<endl;
}
cout<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>m>>n;
        myfunction(m,n);
    }
}