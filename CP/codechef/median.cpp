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
    ll n,counter=0,x;
    cin>>x;
    vector<ll>abc;
    while(cin>>n)
    {   
        counter++;
        abc.push_back(n);
        sort(abc.begin(),abc.end());
        if(counter%2==0)
        {
            
            cout<<((abc[counter/2]+abc[(counter/2)-1])/2);
        }
        else
        cout<<abc[counter/2];
        
    }
}