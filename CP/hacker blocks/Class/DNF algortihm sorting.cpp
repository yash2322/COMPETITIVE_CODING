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
ll n;
cin>>n;
vector<ll>v;
FORS(i,0,n){
    ll inp;
    cin>>inp;
    v.push_back(inp);
}
int start=0,mid=0,end=n-1;
while(mid<=end){
    if(v[mid]==1)
        mid++;
    else if(v[mid]==0){
        ll temp=v[mid];
        v[mid]=v[start];
        v[start]=temp;
        mid++;
        start++;
    }
    else if(v[mid]==2){
        if(v[end]==2)
            end--;
            else{
        ll temp=v[mid];
        v[mid]=v[end];
        v[end]=temp;
        end--;
            }
    }
    
}
FORS(i,0,n){
    cout<<v[i]<<" ";
}
}