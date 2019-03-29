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
int main()
{
    long long int n,sum=0,input,n2;
    cin>>n;
    n2=n;
    while(n--)
    {
        cin>>input;
        sum+=input;
    }
    cout<<sizeof(sum)<<endl;
    sum=100000000000001;
    cout<<sum;
  //  cout<<(n2*(n2+1))/2;
    if(sum>=(n2*(n2+1))/2)
    cout<<"YES\n";
    else
    cout<<"NO\n";

}