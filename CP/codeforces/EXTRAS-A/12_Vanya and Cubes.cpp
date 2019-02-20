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
vector<long int>arr(1001);
FORS(i,1,1001)
{
    arr[i]=(i*(i+1))/2;
}
arr[0]=0;
FORS(i,1,1001)
{
arr[i]+=arr[i-1];
}
FORS(i,0,1001);
long int n,level;
cin>>n;
FORS(i,0,1001)
{
    if(arr[i]>n)
    {
        level=i-1;
        break;
    }
    else if(arr[i]==n)
    {
        level=i;
        break;
    }
}
cout<<level;
}
