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
    while(1)
    {
long int n,inputs,sum;
vector<long int> segments;
cin>>n;
FORS(i,0,n)
{
    cin>>inputs;
    segments.push_back(inputs);
}
sort(segments.begin(),segments.end());

FORS(i,0,n-2)
{
    if((segments[i]+segments[i+1])>segments[i+2])
    {
        cout<<"YES\n";
        break;
    }
}
cout<<"NO\n";


    }
}
