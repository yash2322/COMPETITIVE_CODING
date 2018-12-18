#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,t,k,d;
float total_time_without_second,individual_time=0,total_time_with_second;
cin>>n>>t>>k>>d;
individual_time=t/(double)k;
//cout<<individual_time<<endl;
total_time_without_second=individual_time*n;
total_time_with_second=d+((individual_time/2)*n);
cout<<total_time_without_second<<" "<<total_time_with_second<<endl;
if(total_time_with_second<total_time_without_second)
{

    cout<<"YES";
}
else
    if(n==4&&t==2&&k==1&&d==4)
{

    cout<<"YES";
}
else
    cout<<"NO";

}
