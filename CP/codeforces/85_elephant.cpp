#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int distance,step;
cin>>distance;
step=(distance/5);
if(distance%5!=0)
    step++;
cout<<step<<endl;
}
