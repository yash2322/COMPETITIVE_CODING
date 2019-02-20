#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n;
    cin>>n;
  //  cout<<"yash";
    string s="ROYG";
    FORS(i,0,n)
    {
        if(i==0)
        cout<<"B";
        if(i==1)
        cout<<"I";
        if(i==2)
        cout<<"V";
        else if(i>2)
        cout<<s[i%4];
    }

}