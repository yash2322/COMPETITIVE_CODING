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
void generate_vector(ll sum,ll l,ll r,string out){
    if(sum==0){
        cout<<out<<endl;
        return ;
    }
   for(ll i=l;i<=sum&&i<=r;i++){
        generate_vector(sum-i,l,r,out+to_string(i));
    }
}

int main(){
ll l,r,sum;
cin>>sum>>l>>r;
generate_vector(sum,l,r,"");    
}