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
//anoop@programmingpathshala.com
int main()
{
vector<long int>arr;
ll n,input,key;
cin>>n;
FORS(i,0,n)
{
cin>>input;
arr.push_back(input);
}
cin>>key;
ll f=0,l=n-1,mid;
mid=(f+l)/2;
while(f<=l){
if(arr[mid]==key)
{
    cout<<mid;
    return 0;
}
else if(key>arr[mid])
{
    f=mid+1;
}
else
{
    l=mid-1;
}
mid=(f+l)/2;
}
cout<<mid+1;
}
