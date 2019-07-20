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
ll t;
cin>>t;
vector<bool>seive(1000001,true);
for(ll i=2;i<=sqrt(1000001);i++){
    if(seive[i]){
        for(ll j=i*i;j<=1000001;j+=i)
            seive[j]=false;
    }
}
seive[0]=false;
seive[1]=false;
vector<ll>answer;
FORS(i,2,1000001){
    if(seive[i])
        answer.push_back(i);
}
while(t--){
    ll n;
    cin>>n;
    cout<<answer[n-1]<<endl;
}
}
