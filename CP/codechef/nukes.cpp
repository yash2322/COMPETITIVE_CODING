#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
long int n,k,c;
cin>>n>>c>>k;
while(n>0&&k>0)
{
    cout<<n%(c+1)<<" ";
    n=n/(c+1);
    k--;
}
while(k>0)
{
     cout<<0<<" ";
     k--;
}
cout<<endl;
}
