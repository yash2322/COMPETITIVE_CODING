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
    ll n,inp,j=0,res=0;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
    v.push_back(inp);
    }
    set<ll>distict;
    FORS(i,0,n){
        while(j<n&&distict.find(v[i]==distict.end())){
            distict.insert(v[i]);
            j++
        }
        res+=((j-i)*(j-i+1))/2;
        distict.erase(v[i]);
    }
    cout<<res<<endl;
}