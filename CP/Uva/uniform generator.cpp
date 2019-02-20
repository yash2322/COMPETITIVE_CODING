#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
    FS
long long int step,mod;
while(cin>>step>>mod)
{
    bool found=false;
    vector<long long int>generated(mod,0);
    long long int run=0,mod_of=0,value;
    while(run<=mod)
    {
    value=mod_of%mod;
    mod_of+=step;
    generated[value]=1;
    run++;
    }
    FORS(i,0,mod)
    {
       // cout<<generated[i]<<" ";
        if(generated[i]!=1)
        {
            cout<<setw(10)<<right<<step;
            cout<<setw(10)<<right<<mod;
            cout<<"    "<<"Bad Choice\n";
            found=true;
            break;
        }
    }
    if(found==false)
    {
       cout<<setw(10)<<right<<step;
            cout<<setw(10)<<right<<mod;
            cout<<"    "<<"Good Choice\n";
    }
    cout<<'\n';
}
}
