#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<=b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    if(n==1||n==0){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<1;
        return 0;
    }
    vector<bool>primes(800,true);
    FORS(i,2,800){
        if(primes[i])
        {
            for(ll j=i*i;j<=800;j+=i){
                primes[j]=false;
            }
        }
    }
    vector<ll>final_primes;
    FORS(i,2,800)
    if(primes[i])
        final_primes.push_back(i);
    ll pr=1,ans=1;
    FORS(i,3,n){
        if(primes[i])
        pr*=2;
        ans+=pr;
    }
    cout<<ans;
}