#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,initial_ice_creams,distressed=0;
cin>>n>>initial_ice_creams;
vector<pair<char,long long int>> myvector(n);
char c;
long long int a;
FORS(i,0,n)
{
    cin>>c;

    cin>>a;
myvector[i]={c,a};

}
FORS(i,0,n)
{
    if(myvector[i].first=='+')
    {
        initial_ice_creams=initial_ice_creams+myvector[i].second;

    }
    else if(myvector[i].first=='-'&&myvector[i].second<=initial_ice_creams)
    {
        initial_ice_creams=initial_ice_creams-myvector[i].second;
    }
    else if(myvector[i].first=='-'&&myvector[i].second>initial_ice_creams)
    {
        distressed++;
    }



}
cout<<initial_ice_creams<<" "<<distressed;
}
