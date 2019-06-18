#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
bool mysort(const pair<string,ll> &a,const pair<string,ll> &b){
return a.second<b.second;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    string input;
    cin>>n;
    cin.ignore();
    map<string,ll>words;
    FORS(i,0,n){
        cin>>input;
        sort(input.begin(),input.end());
        words[input]++;
    }
    vector<ll>v;
    for(auto a:words)
       v.push_back(a.second);
    sort(v.begin(),v.end());
    for(auto a:v)
        cout<<a<<" ";
    }
    cout<<endl;
}
