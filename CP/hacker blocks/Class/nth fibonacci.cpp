#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define MAXS 2001
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
int main(){
    ll n,nth;
    cin>>n;
    //int fibo[n+2];
    ll first=1;
    ll second=1;
    if(n<=2){
        cout<<1;
        return 0;
    }
        FORS(i,2,n){
            nth=first+second;
            first=second;
            second=nth;
            if(i==n-1)
            {
                cout<<nth;
                return 0;
            }
        }
    
}