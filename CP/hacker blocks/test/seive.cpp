#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
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
void prime(long long int n){
    bool primes[n+1];
    memset(primes,true,sizeof(primes));
    for(ll i=2;i<=sqrt(n);i++){
        if(primes[i]){
            for(long int p=i*2;i<n;p+=i)
            primes[p]=false;
        }
    }
    for(ll i=2;i<=n;i++){
        if(primes[i])                 //square every prime to find those numbers which have only three divisors that are only perfect square of prime;
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
}