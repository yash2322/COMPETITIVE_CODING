#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
bool sort_rev(const pair<long int>&first,const pair<long int>&second)
{
    return(first.first>second.second);
}
int main()
{
long int n,num,rank=1,changed=0;

cin>>n;
long int rank_list[n];
vector<pair<long int,long int>> arr;
FORS(i,0,n)
{
cin>>num;
arr.push_back(make_pair(num,i));
}
sort(arr.begin(),arr.end(),sort_rev);
rank_list[arr[0].second]=1;
changed=1;
FORS(i,1,n)
{
if(arr[i].first==arr[i-1].first)
{
    rank_list[arr[i].second]=rank;
    changed++;
}
else
{
    rank_list[arr[i].second]=rank+changed;
    rank=rank+changed;
    changed++;
}
}
}
