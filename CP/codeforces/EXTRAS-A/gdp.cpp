#include<bits/stdc++.h>
using namespace std;
int main()
{
    float gdp=2.5;
    for(int i=0;i<10;i++)
    {
        gdp+=(gdp*(7.5)/100);
        cout<<gdp<<endl;
    }
}
