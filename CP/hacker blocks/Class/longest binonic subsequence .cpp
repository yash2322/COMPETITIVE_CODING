#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>b;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
int LBS(vector<ll>value,ll n){
    vector<ll>LIS_found1,LIS_found2,final_a;
    FORS(i,0,n){
        LIS_found1.push_back(1);
        LIS_found2.push_back(1);
    }
    FORS(i,1,n){
        FORS(j,0,i){
            if(value[i]>value[j])
                LIS_found1[i]=max(LIS_found1[i],1+LIS_found1[j]);
        }
    }
    FORE(i,n-1,0){
        FORE(j,n-1,i){
            if(value[i]>value[j])
                LIS_found2[i]=max(LIS_found2[i],1+LIS_found2[j]);
        }
    }
    FORS(i,0,n)
    final_a.push_back(LIS_found1[i]+LIS_found2[i]-1);
    ll current_max=1,final_max=1;
    FORS(i,0,n)
    {
        if(final_a[i]>current_max)
        current_max=final_a[i];
    }
    cout<<current_max;
    /*
    if(current_max>1)
    cout<<"true";    found
    else
    cout<<"false";   no found
    */
}

int main(){
int n,input;
cin>>n;
vector<ll>value;
FORS(i,0,n){
    cin>>input;
    value.push_back(input);
}
LBS(value,n);
}