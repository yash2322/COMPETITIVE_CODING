#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string s;
cin>>s;
int current_index='a',clockwise_movement,anticlock_wise,total_moves=0,x;
FORS(i,0,s.length())
{
    //integer value of current letter in x
x=s[i];
//cout<<x<<endl;
//calc clockwise_movement;
clockwise_movement=abs(x-current_index);
//cout<<"clocK"<<clockwise_movement<<endl;
//calc anticlockwise movement
anticlock_wise=abs(26-abs(x-current_index));
//cout<<"anti -clocK"<<anticlock_wise<<endl;
if(clockwise_movement>anticlock_wise)
    total_moves=total_moves+anticlock_wise;
else
    total_moves=total_moves+clockwise_movement;
current_index=s[i];

}
cout<<total_moves;
}
