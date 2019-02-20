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
long int n,l,r,count_left_min=0,count_right_min=0,cl=0,cr=0;
cin>>n;
vector<pair<long int,long int>>cupboards;
FORS(i,0,n)
{
cin>>l>>r;
cupboards.push_back(make_pair(l,r));
}
FORS(i,0,n)
{
if(cupboards[i].first==0)
    cl++;
if(cupboards[i].second==0)
    cr++;
}
    count_left_min=min(cl,n-cl);
    count_right_min=min(cr,n-cr);
cout<<count_left_min+count_right_min;
}
