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
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,inp;
        cin>>n;
        vector<ll>v;;
        FORS(i,0,n){
            cin>>inp;
            v.push_back(inp);
        }
        int len=0;
        FORS(i,1,n){
            v[i]=v[i]+v[i-1];
        }
        FORS(i,0,n){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        FORS(i,0,n){
            if(v[i]>=0)
            {
                if(len<i+1)
                {
                    len=i+1;
                }
            }
        }
        FORS(i,0,n){
            cout<<v[n-1]-v[i]<<" ";
        }
        cout<<endl;
        FORS(i,0,n-1){
            if(v[n-1]>=0){
                len=n;
                break;
            }
            if(v[n-1]-v[i]>=0){
                if(len<n-1-i)
                len=n-i-1;
            }
        }
        cout<<len<<endl;
        
    }
}
// -1 4 -2 -5 6 -8