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
long int n,k,input,count_=0;
cin>>n>>k;
vector<long int>arr;
FORS(i,0,n)
{
cin>>input;
arr.push_back(input+k);
}
sort(arr.begin(),arr.end());
FORS(i,0,n)
{
if(arr[i]<=5)
    count_++;
}
cout<<count_/3;
}
