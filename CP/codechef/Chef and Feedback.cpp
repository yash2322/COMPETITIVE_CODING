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
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        ll f1=2,f2=5;
        string s;
        bool flag=false;
        cin>>s;
        size_t f = s.find("101");
        if(f!=string::npos)
        flag=true;
        size_t z = s.find("010");
        if(z!=string::npos)
            flag=true;
   if(flag)
    cout<<"Good\n";
   else
    cout<<"Bad\n";
    }
    }
