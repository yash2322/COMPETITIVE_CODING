#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
char colors[n*m];
bool color=false;
FORS(i,0,(n*m))
{
    cin>>colors[i];
    if(colors[i]=='C'||colors[i]=='M'||colors[i]=='Y')
        color=true;
}
if(color==false)
    cout<<"#Black&White";
else
    cout<<"#Color";

}
