#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
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
    while(t--){
        ll n,p;
        cin>>n>>p;
        ll cases=pow(2,n);
        vector<ll>final_v;
        FORS(i,1,cases){
            vector<int>myv;
            FORS(j,1,n+1){
                if(cases&(1<<j)){
                    if(myv.empty())
                        myv.push_back(j);
                    else{
                            bool flag=true;
                        FORS(k,0,myv.size()){
                            ll v=__gcd(myv[k],j);
                            if(v!=1){
                                flag=false;
                            }
                        }
                    if(flag)
                        myv.push_back(j);
                    }
                }
            }
        if(i==1){
            FORS(l,0,myv.size())
                final_v.push_back(myv[l]);
            }
            else
            {
                if(myv.size()>final_v.size())
                {
                    final_v.clear();
                    FORS(l,0,myv.size())
                        final_v.push_back(myv[l]);
                }

            }
        }
FORS(i,0,final_v.size())
cout<<final_v[i]<<" ";
    }
}
