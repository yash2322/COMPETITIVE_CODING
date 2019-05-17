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
long int t;
cin>>t;
while(t--)
{
    long int n,count1=0;
    cin>>n;

    if(n>=5)
    {


    if(n%10<5&&n%10!=0)
    {
    count1=(n/10)-1;
    long int left=n%10;
    long int second_last,last;
    second_last=5+(n%10);
    last=n-(count1*10)-second_last;
    while(count1--)
    {
        cout<<10<<" ";
    }
    cout<<second_last<<" ";
    cout<<last<<endl;
    }
    else
    {
        count1=n/10;
        while(count1--){
            cout<<10<<" ";
        }
        if(n%10!=0)
        cout<<(n%10)<<endl;

    }

    }
    else
        cout<<-1<<endl;



}
}
