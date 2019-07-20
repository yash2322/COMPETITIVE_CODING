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
typedef long long int ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    if(n>130){
        cout<<"YES\n";
        return 0;
    }
    else
    {
     FORS(i,0,n){
     ll inp;
     cin>>inp;
     v.push_back(inp);
     }
     FORS(i,0,n){
         FORS(j,i+1,n){
            FORS(k,j+1,n){
                FORS(l,k+1,n)
                    if(v[i]^v[j]^v[k]^v[l]==0)
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
         }
     }
      cout<<"NO\n";
    }
}
