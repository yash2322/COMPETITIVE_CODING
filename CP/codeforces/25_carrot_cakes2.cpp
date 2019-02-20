#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

int n,t,k,d,cooked=0;
int time_without_oven=0;
cin>>n>>t>>k>>d;
while(cooked<n)
{//for the first case...using only one oven
    time_without_oven=time_without_oven+t;
    cooked=cooked+k;
}
//cout<<time_without_oven<<endl;
//second case using both
cooked=0;
int timer_overall=1,cooked_oven1=0,cooked_oven2=0,timer_for_oven2=1;
while(cooked<n)
{
    if(timer_overall%t==0)
    {
        //cout<<"upper if - timer overall :"<<timer_overall<<endl;
      //  cout<<"inside "<<timer_overall<<endl;
        cooked_oven1=cooked_oven1+k;
        cooked=cooked_oven1+cooked_oven2;
        //cout<<"oven 1:"<<cooked_oven1<<endl;
        //cout<<"cooked:"<<cooked<<endl;
    }
    if(((timer_for_oven2)%t==0)&&timer_overall>d)
    {
       // cout<<"outside "<<timer_overall<<endl;
//cout<<"lower if - timer overall :"<<timer_overall<<endl;
        cooked_oven2=cooked_oven2+k;
        cooked=cooked_oven1+cooked_oven2;
 //cout<<"oven 2:"<<cooked_oven2<<endl;
   //     cout<<"cooked:"<<cooked<<endl;
     //   cout<<timer_for_oven2<<endl;
    }
    if(cooked>=n)
    {
        break;
    }
    if(timer_overall>d)
    {
        timer_for_oven2++;
    }
    timer_overall++;
}
//cout<<timer_overall;
if(timer_overall<time_without_oven)
{
    cout<<"YES";
}
else
    cout<<"NO";
}
