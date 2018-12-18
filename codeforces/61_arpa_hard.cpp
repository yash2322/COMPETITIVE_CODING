#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int power,last_value[5]={1,8,4,2,6},mod_value_of_power;
cin>>power;    //we know the repeated pattern as 8,4,2,6
mod_value_of_power=power%4;    //finding the power mod 4 to look in the pattern;
if(mod_value_of_power==0&& power!=0)  //if power is multiple of 4 then setting mod value as 4;
    mod_value_of_power=4;
cout<<last_value[mod_value_of_power];
}
