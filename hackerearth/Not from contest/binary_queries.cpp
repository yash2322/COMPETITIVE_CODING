#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q,type,x,y;
    cin>>n>>q;
    long int array[n];
    for(long int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(long int i=0;i<q;i++)
    {
     cin>>type;
   //  cout<<"type\n";
     if(type==1)
     {
         cin>>x;
         if(array[x-1]==0)
         array[x-1]=1;
         else
         array[x-1]=0;

     }
     else if(type==0)
     {
         cin>>x>>y;
         if(array[y-1]==1)
            cout<<"ODD\n";
            else
            cout<<"EVEN\n";

     }
    }



}
