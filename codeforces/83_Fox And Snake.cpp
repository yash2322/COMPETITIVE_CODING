#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
char arr[n][m];
bool right=true;
FORS(i,0,n)
{
    FORS(j,0,m)
    {
        if(i==0||i%2==0)
            cout<<"#";
        if(i%2==1&&j<m&&j>0)
            cout<<".";
        if(right&&j==m-1&&i%2!=0)
        {
        cout<<"#";
        }
        if(right==false&&j==0&&i%2!=0)
        {
         cout<<"#";
        }
    }

if(right&&i%2!=0)
    right=false;
else if(!right&&i%2!=0)
    right=true;
cout<<endl;

}
}
