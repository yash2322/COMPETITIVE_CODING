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
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll first=1,second=2,curr=0;
    if(n<=2)
        cout<<n<<endl;
    else{
        FORS(i,3,n+1){
        curr=second+(i-1)*first;
        first=second;
        second=curr;
        }
        cout<<curr<<endl;
    }
    }
}
