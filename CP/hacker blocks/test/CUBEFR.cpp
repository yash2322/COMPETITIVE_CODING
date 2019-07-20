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
bool primes[1000001];
vector<pair<ll,bool>> arr(1000001);
int main(){
    ll t,counter=0;
    cin>>t;
    memset(primes,true,sizeof(primes));
    
    for(ll i=2;pow(i,3)<=1000000;i++){
        if(primes[i]){
            for(ll j=i*i*i;j*i<=1000000;j=j*i)
                primes[j]=false;
        }

    }
    arr[1].first=1;
    for(ll i=2;i<1000000;i++){
        if(primes[i]){
            arr[i].first=arr[i-1].first+1;
            arr[i].second=true;       
        }
       else{
           arr[i].first=arr[i-1].first;
           arr[i].second=false;   
       }
    }   
    while(t--){
    counter++;
    ll n;
    cin>>n;
    if(arr[n].second||n==1)
    cout<<"Case "<<counter<<": "<<arr[n].first<<endl;
    else
    {
        cout<<"Case "<<counter<<": "<<"Not Cube Free"<<endl;
    }
    }
}