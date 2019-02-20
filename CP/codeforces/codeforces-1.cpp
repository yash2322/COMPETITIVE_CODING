#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,L,a,ti,li,count1=0;
cin>>n>>L>>a;
vector<pair<int,int>> time(n);
vector<pair<int,int>>::iterator itr;
vector<pair<int,int>> gaps(n);
FORS(i,0,n)
{
    cin>>ti>>li;
    time[i]={ti,li};
}
FORS(i,0,n)
{
gaps[i]={time[i].first,(time[i].first+time[i].second)};
}
int i=0;

/*FORS(i,0,n)
{
cout<<gaps[i].first<<" "<<gaps[i].second<<endl;
}*/

while(i<n&&n!=0)
{
    if(i!=n-1)
    {

        count1=count1+(gaps[i+1].first-gaps[i].second)/a;
    }

i++;
}
i=0;
if(n!=0)
{
    count1=count1+(gaps[0].first)/a;
count1=count1+(L-gaps[n-1].second)/a;
}
else
{
    count1=count1+L/a;
}

cout<<count1;

}
