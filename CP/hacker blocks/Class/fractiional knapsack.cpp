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
bool mysort(pair<ll,ll>&a,pair<ll,ll>&b){
    double v1=(double)a.first/a.second;
    double v2=(double)b.first/b.second;
    return v1>v2;
}

int main(){
ll n,cap;
cin>>n>>cap;
vector<pair<ll,ll>>value_weight;
FORS(i,0,n){
ll w,v;
cin>>v>>w;
value_weight.push_back({v,w});
}
    sort(value_weight.begin(),value_weight.end(),mysort);
    ll filled=0;
    float final_value=0;
    
    FORS(i,0,n){
        if(filled+value_weight[i].second<=cap&&value_weight[i].first>0&&value_weight[i].second>0){
            filled+=value_weight[i].second;
            final_value+=value_weight[i].first;
        }
        else if(value_weight[i].first>0&&value_weight[i].second>0){
            ll left_to_fill=cap-filled;
            final_value+=value_weight[i].first*((float)left_to_fill/value_weight[i].second);
            break;
        }
    }
    cout<<setprecision(1)<<fixed<<final_value;
    
}