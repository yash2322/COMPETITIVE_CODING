#include<bits/stdc++.h>
using namespace std;
bool myfunc(const pair<long int,long int>&a, const pair<long int,long int>&b)
{
if(a.first==b.first)
    return (a.second<b.second);
return a.first<b.first;
}
bool colwise(const pair<long int,long int>&a, const pair<long int,long int>&b)
{
if(a.second==b.second)
    return (a.first<b.first);
return a.second<b.second;
}

int main()
{
    long int t;
    cin>>t;
    while(t--){
        long int n,m,k,a,b,total_hori=0,total_vertical=0;
        cin>>n>>m>>k;
        vector<pair<long int,long int>>plants;
        for(long int i=0;i<k;i++)
        {
            cin>>a>>b;
            plants.push_back(make_pair(a,b));
        }
        sort(plants.begin(),plants.end(),myfunc);
   /* for(int i=0;i<k;i++)
    {
        cout<<plants[i].first<<" "<<plants[i].second<<endl;
    }*/
    for(long int i=0;i<k-1;i++)
    {
        if(plants[i].first==plants[i+1].first)
        {
            if(plants[i+1].second!=(plants[i].second)+1)
            {
                total_hori+=2;
            }
        }
        else
            total_hori+=2;
    }
    if(k>0)
        total_hori+=2;
        sort(plants.begin(),plants.end(),colwise);
    for(long int i=0;i<k-1;i++)
    {
        if(plants[i].second==plants[i+1].second)
        {
            if(plants[i+1].first!=(plants[i].first)+1)
            {
                total_vertical+=2;
            }
        }
        else
            total_vertical+=2;
    }
    if(k>0)
        total_vertical+=2;
    cout<<(total_hori+total_vertical)<<endl;
    }
}
