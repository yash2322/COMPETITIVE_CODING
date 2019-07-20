#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define m 1000000007
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;  
void modInverse(ll a,ll y,ll m){  
    if(y==0) 
    return 1; 
    ll p=modInverse(x,y/2,m)%m; 
    p=(p*p)%m; 
    return (y%2==0)?p:(x*p)%m; 
}  
int main() { 
ll n;
cin>>n;
    modInverse(a,m-2,m); 
    return 0; 
} 