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
long int n,m,input,sum=INT_MIN,current;
cin>>n>>m;
vector<vector<long int>>value(n,vector<long int>(m));
FORS(i,0,n)
{
    FORS(j,0,m)
    {
        cin>>input;
        value[i][j]=input;
    }
}
FORS(i,0,n-2)
{
FORS(j,0,m-2)
{
current=value[i][j]+value[i][j+1]+value[i][j+2]+value[i+1][j]+value[i+2][j]+value[i+2][j+1]+value[i+2][j+2];
//cout<<current<<endl;
if(current>sum)
    sum=current;
}
}
cout<<sum;
}
