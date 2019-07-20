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
bool isprime(ll n){
    if(n<=1)
    return 0;
    if(n<4)
    return 1;
    if(n%2==0||n%3==0)
    return 0;
    FORS(i,4,sqrt(n)){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
ll n,inp;
cin>>n;
vector<ll>v;
FORS(i,0,n){
    cin>>inp;
    v.push_back(inp);
}    
FORS(i,0,n){
    ll sqr_root=(int)sqrt(v[i]);
    if((sqr_root*sqr_root)!=v[i]){
        cout<<"NO\n";
    }
    else{
        if(isprime(sqr_root))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
}