#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
long int n,m,input1,input2;
cin>>n>>m;
vector<pair<long int,long int>> match(m);
FORS(i,0,m)
{
cin>>input1>>input2;
match[i]={input2,input1};
}
sort(match.begin(),match.end(),sortinrev);
long int i=0,matches=0;
while(i<m&&n>=0)
{
if(match[i].second>=n)
{
matches+=match[i].first*n;
break;
}
else
{
matches+=match[i].first*match[i].second;
n=n-match[i].second;
i++;
}
}
cout<<matches;
}
