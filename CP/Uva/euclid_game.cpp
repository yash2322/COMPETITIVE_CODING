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
FS
long long int num1,num2,divide;
while(cin>>num1>>num2)
{
    if(num1==0&&num2==0)
        return 0;
     long long int time_loop_ran=0;
    while(num1>0&&num2>0)
    {

        time_loop_ran++;
    if(num1>num2)
    {
            divide=num1/num2;
            num1=num1-(divide*num2);
    }
    else
    {
         divide=num2/num1;
            num2=num2-(divide*num1);
    }
   // cout<<num1<<" "<<num2<<endl;
    }
    if(time_loop_ran%2!=0)
        cout<<"Stan wins\n";
        else
        cout<<"Ollie wins\n";
}

}
