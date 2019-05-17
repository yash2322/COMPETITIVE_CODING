#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())

//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
/*ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}*/
int main()
{
long long int n,x,y,a,b,c;
cin>>n>>x>>y;
a=n/x;
b=n/y;
c=(x*y)/__gcd(x,y);
c=n/c;
a=a-c;
b=b-c;
if(a>b)
    cout<<"ABHISHEK "<<a-b;
else if(b>a)
    cout<<"PARTH "<<b-a;
else
cout<<"TIE";
}
