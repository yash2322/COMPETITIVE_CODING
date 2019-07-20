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
ll big_mod(string a,ll b){
    ll res=0;
    FORS(i,0,a.length()){
        res=(res*10+(a[i]-'0'))%b;
    }
    //cout<<res<<" "<<b<<endl;
    ll final_result=__gcd<ll>(res,b);
    return final_result;
}

int main(){
string a;
ll b;
cin>>b;
cin.ignore();
cin>>a;
cout<<big_mod(a,b);    
}