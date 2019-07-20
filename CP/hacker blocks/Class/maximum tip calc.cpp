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
ll mysort(pair<ll,ll>&a,pair<ll,ll>&b){
    return a.first>b.first;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
ll n,x,y,inp;
cin>>n>>x>>y;
vector<ll>tip1,tip2;
FORS(i,0,n){
cin>>inp;
tip1.push_back(inp);
}
FORS(i,0,n){
    cin>>inp;
tip2.push_back(inp);
}
ll current_tip=0;
vector<pair<ll,ll>>max_pro_ind;
FORS(i,0,n)
    max_pro_ind.push_back({abs(tip1[i]-tip2[i]),i});
sort(max_pro_ind.begin(),max_pro_ind.end(),mysort);
FORS(i,0,n){
if(tip1[max_pro_ind[i].second]>tip2[max_pro_ind[i].second]){
    if(x){
        current_tip+=tip1[max_pro_ind[i].second];
        x--;
    }
    else if(y){
        current_tip+=tip2[max_pro_ind[i].second];
        y--;
        continue;
    }
}
else{
    if(y){
        current_tip+=tip2[max_pro_ind[i].second];
        y--;
    }
    else if(x){
        current_tip+=tip1[max_pro_ind[i].second];
        x--;
        continue;
    }
}
}
cout<<current_tip<<endl;
}
}