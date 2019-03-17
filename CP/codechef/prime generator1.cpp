#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
void seive(long long int x,long long int m,long long int n)
{
    cout<<"yes\n";

    bool prime[x+1];
cout<<"yes\n";
    cout<<"yes\n";
    memset(prime,true,sizeof(prime));
    for(long long int i=2;i*i<=x;i++)
    {
        if(prime[i]==true)
        {
            for(long long int j=i*i;j<=x;j+=i)
                prime[i]=false;
        }
    }
    for(long long int p=2;p<=x;p++)
        if(prime[p]&&p>=m&&p<=n)
            cout<<p<<endl;
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int m,n;
        cin>>m>>n;
        seive(1000000000,m,n);
        cout<<endl;
    }
}

