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
long long int t;
cin>>t;
while(t--)
{
unsigned long long int N,A,B,K,count_div_a,count_div_b,count_div_common,count_final;
cin>>N>>A>>B>>K;
count_div_a=N/A;
count_div_b=N/B;
count_div_common=N/(A*B);
count_final=(count_div_a-count_div_common)+(count_div_b-count_div_common);
cout<<count_div_a<<" "<<count_div_b<<" "<<count_div_common;
if(count_final>=K)
    cout<<"Win\n";
else
    cout<<"Lose\n";
}
}
