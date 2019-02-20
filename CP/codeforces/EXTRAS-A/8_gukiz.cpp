#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
bool sort_rev(const pair<long int,long int>&f,const pair<long int,long int>&s)
{
    return (f.first>s.first);
}
int main()
{
long int n,num,changed=1,rank=1;
cin>>n;
vector<pair<long int,long int>> arr;
long int rank_list[n];
FORS(i,0,n)
{
cin>>num;
arr.push_back(make_pair(num,i));
}
sort(arr.begin(),arr.end(),sort_rev);    //
rank_list[arr[0].second]=rank;
FORS(i,1,n)
{
if(arr[i].first==arr[i-1].first)
{
    rank_list[arr[i].second]=rank;
    changed++;
}
else
    {
    rank=rank+changed;
    rank_list[arr[i].second]=rank;
    changed=1;
    }
}
FORS(i,0,n)
cout<<rank_list[i]<<" ";
}
