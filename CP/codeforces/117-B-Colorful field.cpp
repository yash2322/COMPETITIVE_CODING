#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
bool sort_my_style(const pair<long int,long int>&a , const pair<long int,long int>&b)
{
    if(a.first==b.first)
    return a.second<b.second;
    else
        return a.first<b.first;
}
int main()
{
long int n,m,k,t,a,b,count_waste=0;
cin>>n>>m>>k>>t;
vector<pair<int,int>> waste;
FORS(i,0,k)
{
cin>>a>>b;
waste.push_back(make_pair(a,b));
}
sort(waste.begin(),waste.end(),sort_my_style);
FORS(i,0,t)
{
    bool waste_found=false;
    cin>>a>>b;
    FORS(j,0,k)
    {
        if(waste[j].first==a&&waste[j].second<b)
            count_waste++;
        else if(waste[j].first<a)
            count_waste++;
            if(waste[j].first==a&&waste[j].second==b)
                waste_found=true;
    }
    if(waste_found)
        cout<<"Waste\n";
    else
    {
        if((((a-1)*m+b)-count_waste)%3==1)
            cout<<"Carrots\n";
        else if((((a-1)*m+b)-count_waste)%3==2)
            cout<<"Kiwis\n";
        else
            cout<<"Grapes\n";
    }
    count_waste=0;
}
}
