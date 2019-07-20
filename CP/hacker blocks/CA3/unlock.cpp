#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
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



int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    FORS(i,0,n){
        cin>>arr[i];}

    vector<ll> pos(n+1);
    FORS(i,0,n){
        pos[arr[i]]=i;
        }
    ll i=0;

    while(i<n&&k>0){
            if(arr[i]!= n-i){
                ll temp=pos[n-i];
                pos[n-i]=i;
                pos[arr[i]]=temp;
                swap(arr[i],arr[temp]);
            k--;
            }
            i++;
    }
    FORS(i,0,n){
    cout<<arr[i]<<" ";
    cout<<endl;
    }

}
