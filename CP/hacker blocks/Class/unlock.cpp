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
bool my_comp(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second>b.second;
}
int main(){
long int n,k,inp;
cin>>n>>k;
vector<ll>unlock;
unordered_map<ll,ll>ind_val;
FORS(i,0,n){
    cin>>inp;
    unlock.push_back(inp);
    ind_val.insert({i,inp});
}
//sort(ind_val.begin(),ind_val.end(),my_comp);
// FORS(i,0,n){
//     cout<<ind_val[i].second<<" ";
// }
// cout<<endl;
// int i=0;
// for(auto a:ind_val){
//     if(unlock[i]<a.second&&a.first!=i){
//         ll temp=unlock[i];
//         unlock[i]=a.second;
//         unlock[a.first]=temp;
//         a.first=i;
//         k--;
//     }
//     i++;
//     if(k==0)
//     break;
// }
int i=0,last=n-1;
FORS(i,n-1,0){
    
}


FORS(i,0,n)
    cout<<unlock[i]<<" ";
}