#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

    long int n,price,quality,maximum_so_far_quality=INT_MIN;
    cin>>n;
    vector<pair<long int,long int>> price_quality;
    FORS(i,0,n)
    {
       cin>>price>>quality;
       price_quality.push_back(make_pair(price,quality));
    }
    sort(price_quality.begin(),price_quality.end());
    maximum_so_far_quality=price_quality[0].second;

    FORS(i,1,n)
    {
        if(price_quality[i].second<maximum_so_far_quality)
        {
            cout<<"Happy Alex\n";
           return 0;
        }
        if(price_quality[i].second>maximum_so_far_quality)
            maximum_so_far_quality=price_quality[i].second;
    }
    cout<<"Poor Alex\n";
    return 0;
}
