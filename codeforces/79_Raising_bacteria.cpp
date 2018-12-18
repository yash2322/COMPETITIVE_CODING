#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,power=1,value=1,bacteria_required;
cin>>n;
while(value<n)
{
value=pow(2,power);
power++;
}
if(n==value)
    bacteria_required=1;
else
{
    value=pow(2,power-1);

}
}
