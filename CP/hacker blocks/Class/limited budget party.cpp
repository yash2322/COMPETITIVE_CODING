#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define max_val 150;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,inp,k;
        cin>>n>>k;
        vector<ll>v;
        FORS(i,0,n){
            cin>>inp;
            v.push_back(inp);
        }
        ll l_pointer=0,sum=0;
        bool found=false;
    FORS(i,0,n){
        sum+=v[i];
        if(sum>k){
            while (sum>k&&l_pointer<n){
               sum-=v[l_pointer];
               l_pointer++;
            }
        }
        if(sum==k){
        found=true;
        break;
        }
    }
    if(found)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    }
 
}