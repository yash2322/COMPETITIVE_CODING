#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
float x,speed_police,speed_theif;
cin>>x>>speed_police>>speed_theif;
float net_speed=speed_police-speed_theif,time;

if(net_speed<=0)
    cout<<"-1";
else
{
    time=x/net_speed;
    x=time*speed_police;
    x=x/speed_police;
    time=time+x;
    //time=time+(time*speed_police);
    cout<<fixed<<setprecision(6)<<time;
}

}
