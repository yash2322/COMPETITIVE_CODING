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
    ll n,x,inp;
    cin>>n>>x;
    vector<ll>TAs;
    FORS(i,0,n){
        cin>>inp;
        TAs.push_back(inp);
    }
    ll left_pointer=0,right_pointer=1;
    ll current_sum=TAs[0];
    bool found=false;
    FORS(i,1,n+1){
        while(current_sum>x&&i-1){
            current_sum-=TAs[left_pointer];
            left_pointer++;
        }
        if(current_sum==x){
            found=true;
            break;
        }
        if(i<n)
        current_sum+=TAs[i];
    }
    if(found)
        cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
}
}