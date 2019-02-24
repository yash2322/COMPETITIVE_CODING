#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
bool isSubsetsum(long int a[],long int n,long int sum)
{
    if(sum==0)
        return true;
    if(n==0&&sum!=0)
        return false;
    if(a[n-1]>sum)
        return isSubsetsum(a,n-1,sum);
    return isSubsetsum(a,n-1,sum)||isSubsetsum(a,n-1,sum=a[n-1]);
}



int main()
{
long int arr[]={1,1,2,5,13,6};
long int find_sum=4,n=6;
if(isSubsetsum(arr,n,find_sum))
    cout<<"YES\n";
else
    cout<<"NO\n";
}
