#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int n,q,input;
 cin>>n>>q;
 vector<long int> array_;

 for(int i=0;i<n;i++)
 {
     cin>>input;
     array_.push_back(input);
 }
 int a,b,c,d;
 for(int i=0;i<q;i++)
 {
     cin>>a>>b>>c>>d;
     if(a==1)
     {
         for(int j=b-1;j<c;j++)
         array_[j]+=d;

     }
     else
     {
         for(int j=b-1;j<c;j++)
         {
             array_[j]=d;
         }
     }

 }
 for(int j=0;j<n;j++)
 cout<<array_[j]<<" ";





}
