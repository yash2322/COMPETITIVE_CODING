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
ll recur_solution(ll cap,ll n,vector<ll>weight,vector<ll>value){
if(n==0||cap==0)
    return 0;
if(weight[n-1]>cap)
return recur_solution(cap,n-1,weight,value);
else 
    return max(value[n-1]+recur_solution(cap-weight[n-1],n-1,weight,value),recur_solution(cap,n-1,weight,value));

}
int main(){
ll cap,n;
cin>>n>>cap;
vector<ll>weight,value;
FORS(i,0,n){
    ll input;
    cin>>input;
    weight.push_back(input);
}
FORS(i,0,n){
    ll input;
    cin>>input;
    value.push_back(input);
}
cout<<recur_solution(cap,n,weight,value);
}