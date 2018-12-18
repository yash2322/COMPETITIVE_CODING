#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
long int t,n;

cin>>t;

char hand;
FORS(i,0,t)
{
cin>>n;
vector<long int> a(n);
long int max_1=INT_MIN,index_of_max,count_of_break_point=0;
bool flag=false;
FORS(j,0,n)
{
    cin>>a[j];
    if((j>0)&&a[j-1]>a[j])
        count_of_break_point++;
   /* if(max_1<=a[j])
    {
       max_1=a[j];
       index_of_max=j;
    }*/
}
if(count_of_break_point>1)
    cout<<"NO"<<endl;
else if(a[0]<a[n-1]&&count_of_break_point>0)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;

}
}
