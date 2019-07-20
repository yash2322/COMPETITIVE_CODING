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
FORS(i,0,n){
    ll inp;
    cin>>inp;
    v.push_back(inp);
}
ll f=0,l=n-1.mid=(f+l)/2,pos=-1;
while(f<=l){
    if(mid<l&&v[mid]>v[mid+1])
        {
            pos=mid;
            cout<<mid;
            return;
        }
        else if(mid>f&&v[mid]<v[mid-1])
            {
                cout<<mid-1;
                return;
            }
            else if(v[l]>=v[mid])
                l=mid-1;
                else
                    f=mid+1;
                mid=(f+l)/2;               
}
    
}