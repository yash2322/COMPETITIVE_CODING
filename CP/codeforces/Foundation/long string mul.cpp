#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long int expo(long int base,long int exp)
{
if(exp==0)
    return 1;
if(exp==1)
    return base%mod;
long int v=expo(base,exp/2);
t=(t*t)%mod;
if(exp%2==0)
    return t;
else
    return ((base%mod)*t)%mod;
}

int main()
{


}
