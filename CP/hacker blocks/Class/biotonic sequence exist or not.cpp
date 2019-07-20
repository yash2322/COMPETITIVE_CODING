#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>b;i--)
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
    ll n,input;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>input;
        v.push_back(input);
    }
    ll i,j;
    for(i=1;i<n;i++){
        if(v[i]>v[i-1])
            break;
    }
    
    if(i>=n-1){
        cout<<"true";
        return 0;
    }
    for(j=i+1;j<n;j++){
        if(v[j]<v[j-1])
             break;
    }
    if(j<n-1){
        cout<<"false";
        return 0;
    }
    cout<<"true";

    
    
}