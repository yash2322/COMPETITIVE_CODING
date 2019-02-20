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
long long int n,m,k,input,current_pos=1,swapA,swapB,final_pos_drop=-1;
cin>>n>>m>>k;
unordered_map<long int,long int>holes;
//cout<<holes.max_size();
bool found=false;
FORS(i,0,m)
{
cin>>input;
holes[input]=1;
}
if(holes[1]==1)
{
cout<<1;
return 0;
}
FORS(i,0,k)
{
cin>>swapA>>swapB;
if(current_pos==swapA)
{
    current_pos=swapB;
}
else if(current_pos==swapB)
{
    current_pos=swapA;
}
//auto a=find(holes.begin(),holes.end(),current_pos);
if(holes[current_pos]==1)
{
    cout<<current_pos;
    return 0;
}
}
   cout<<current_pos;
return 0;
}
