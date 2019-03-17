#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
//anoop@programmingpathshala.com
int main()
{
ll square;
cin>>square;
ll f=0,l=square;
ll mid=(f+l)/2;
while(f<=l)
{
    if(mid*mid==square)
    {
        cout<<mid;
        return 0;
    }
    else if(mid*mid>square)
    {
        l=mid-1;
    }
    else
        f=mid+1;
    mid=(f+l)/2;
}
cout<<mid;


}
