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
/*ll v=0;
void count_binary(ll n,string osf)
{
    if(n==osf.length()){
        v++;
        return;
    }
if(osf[osf.length()-1]=='0')
    count_binary(n,osf+'1');
    count_binary(n,osf+'0');
}*/
ll count_binary(ll n){
if(n<=2)
    return n;
return count_binary(n-1)+count_binary(n-2);
}
int main(){
ll t;
cin>>t;
ll arr[91];
arr[0]=1;
arr[1]=2;
FORS(i,2,91){
    arr[i]=arr[i-1]+arr[i-2];
   // cout<<arr[i]<<endl;
}
while(t--){
    ll n;
    cin>>n;
    cout<<arr[n]<<endl;
}
}
