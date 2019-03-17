#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
    FS
long long int t;
cin>>t;
while(t--)
{   long long int n,a,b,count_=0,max_covered;
    cin>>n;
    vector<pair<long long int,long long int>>arr;
    FORS(i,0,n)
    {
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end());
    bool zero=false;
    FORS(i,0,n)
    {
    if(i==0)
    {
        count_+=(arr[i].second-arr[i].first)+1;
        max_covered=arr[i].second;
    }
    else
    {
        if(arr[i].first>max_covered)
        {
            count_+=(arr[i].second-arr[i].first)+1;
            max_covered=arr[i].second;
        }
        else if(arr[i].first<max_covered&&arr[i].second>max_covered)
        {
            count_+=(arr[i].second-(max_covered+1))+1;
            max_covered=arr[i].second;
        }
        else if(arr[i].first==max_covered&&arr[i].second>max_covered)
            {
             count_+=(arr[i].second-(max_covered+1))+1;
            max_covered=arr[i].second;
            }
    }

    }
    cout<<count_<<endl;
}

}
