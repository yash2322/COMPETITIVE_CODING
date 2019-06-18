#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pb(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main(){
long int n,input;
cin>>n;
vector<ll>a1,a2;
FORS(i,0,n){
    cin>>input;
    a1.push_back(input);
}
FORS(i,0,n){
    cin>>input;
    a2.push_back(input);
}
sort(a1.begin(),a1.end());
sort(a2.begin(),a2.end());
ll sum=0;
FORS(i,0,n){
sum+=abs(a1[i]-a2[i]);
}
cout<<sum;
}