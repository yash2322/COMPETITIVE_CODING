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
long long int k,l,m,n,d,count_=0;
cin>>k>>l>>m>>n>>d;
vector<bool> dragons(d+1,false);
FORS(i,1,d+1)
{
    if(i%k==0)
        dragons[i]=true;
    else if(i%l==0)
        dragons[i]=true;
    else if(i%m==0)
        dragons[i]=true;
    else if(i%n==0)
        dragons[i]=true;
}
FORS(i,0,d+1)
{
    if(dragons[i]==true)
    count_++;
}
cout<<count_;


}
