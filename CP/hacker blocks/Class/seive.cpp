//hasta la victoria siempre ----  che guevara, Always
//Easy nope! Worth it? absolutely

#include<bits/stdc++.h>
using namespace std;
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
void seive(ll n){
    vector<bool>primes(n+1,true);
    vector<long int>primes_found;
    FORS(i,2,sqrt(n)+1){
        if(primes[i]){
            for(long int j=i*2;j<=n;j+=i)
            primes[j]=false;
        }
    }
    FORS(i,2,primes.size())
    if(primes[i])
    primes_found.push_back(i);
    cout<<primes_found.size()<<endl;

    FORS(i,0,primes_found.size())
    cout<<primes_found[i]<<" ";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        seive(n);
    }
}
