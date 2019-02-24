#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long long int n,min_=0,max_=0;
cin>>n;
int count_off=0;
for(int i=0;i<n;i++)
{
    max_++;
    count_off++;
    if(count_off>1)
    {
        count_off=0;
        i=i+5;
    }
/*    if(count_off<=1)
    {
        count_off++;
    }
    if(count_off>1)
    {
        max_++;
        count_off=0;
        i=i+5;
    }*/
}
count_off=0;
for(int i=5;i<n;i++)
{
    min_++;
    count_off++;
    if(count_off>1)
    {
        count_off=0;
        i=i+5;
    }

}
cout<<min_<<" "<<max_;
}
