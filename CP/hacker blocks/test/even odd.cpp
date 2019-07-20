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
ll sum_of_all(ll n){
ll ans=1;
FORS(i,2,sqrt(n)){
    ll sum=1,t=1;
    while(n%i==0){
        n/=i;t*=i;sum+=t;
    }
    ans*=sum;
}
if(n>=2)
    return ans*(1+n);
return ans;
}
ll sum_of_odd(ll n){
    ll ans=1; 
    while(n%2==0)
        n=n/2;
    FORS(i,3,sqrt(n)){ 
        ll c=0,c_sum=1,c_num=1; 
        while (n%i==0){
            c++;n/=i;c_num*=i; 
            c_sum+=c_num; 
            }
        ans*=c_sum; 
    } 
if(n>=2) 
    return ans*(1+n);
return ans;
}
int main(){
    ll q;
    cin>>q;
    vector<pair<ll,ll>>count;
    FORS(i,1,100001)
        count.push_back({0,0});
        ll a;
    FORS(i,1,100001){
        count[i-1].first=sum_of_odd(i);
        count[i-1].second=(sum_of_all(i))-count[i-1].first;
    }
    while(q--){
        ll n;
        cin>>n;
        cout<<(count[n-1].second)-(count[n-1].first)<<endl;
    }
}