#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
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
int check(int v[],ll n,ll mid){
    int number_of_pairs=0;
    FORS(i,0,n)
       number_of_pairs+=upper_bound(v+i,v+n,v[i]+mid)-(v+i+1);
return number_of_pairs;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    int v[n];
    FORS(i,0,n)
        cin>>v[i];     
    sort(v,v+n);
    // FORS(i,0,n)
    // cout<<v[i]<<" ";
    // cout<<endl;
    int f=INT_MAX;
    int l=v[n-1]-v[0];
    for(int i=1;i<n;i++)
    f=(int)min(f,v[i]-v[i-1]);
    while(f<l){
        ll mid=(f+l)/2;
        if(check(v,n,mid)<k)
        f=mid+1;
        else l=mid;
    }
    cout<<f<<endl;
    }   
}