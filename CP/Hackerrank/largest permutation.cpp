#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a
#define pb(a) push_back(a)
#define pb(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main(){
ll n,k,input;
cin>>n>>k;
unordered_map<ll,ll>value_index;
vector<ll>v(n);
FORS(i,0,n){
    cin>>v[i];
    value_index[v[i]]=i;
}
FORE(i,n,1){
if(k==0)
break;
if(value_index[i]==n-i)
continue;
int correct=n-i;
int current=value_index[i];
swap(v[current],v[correct]);
value_index[i]=correct;
value_index[v[i]]=current;
k--;
}
FORS(i,0,n)
cout<<v[i]<<" ";
}