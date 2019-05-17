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
    FS
long long int t;
cin>>t;
while(t--)
{
    long long int m,n,input,index_start,index_end,sum=0;
    cin>>m;
    vector<long long int>value;
    FORS(i,0,m)
    {
        cin>>input;
        value.push_back(input);
    }
    cin>>n;
    sort(value.begin(),value.end());
    index_start=n;
    while(index_start<(m-n))
    {
    sum+=value[index_start];
    index_start++;
    }
    cout<<sum<<endl;
}

}
