#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,h,g,counts=0;
cin>>n;
vector<pair<int,int>> home_guest_color(n);

FORS(i,0,n)
{
    cin>>h>>g;
    home_guest_color[i]={h,g};

}
FORS(i,0,n)
{
FORS(j,0,n)
{
    if(home_guest_color[i].first==home_guest_color[j].second)
    {

        counts++;
    }
}

}
cout<<counts;

}
