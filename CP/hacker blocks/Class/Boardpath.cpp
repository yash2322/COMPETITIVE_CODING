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
int c=0;
void recur(ll sum,ll face,string out){
    if(sum==0)
    {
        c++;
        cout<<out<<" ";
        return;
    }
    for(ll i=1;i<=sum&&i<=face;i++){
        recur(sum-i,face,out+to_string(i));
    }
       
}
int main(){
long int sum,face;
cin>>sum>>face;
recur(sum,face,""); 
cout<<endl<<c;
}