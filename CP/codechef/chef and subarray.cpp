#include<bits/stdc++.h>
using namespace std;

int main()
{
long int n,input,count=0,max_=0;
cin>>n;
for(long int i=0;i<n;i++)
{
    cin>>input;
    if(input>0)
        count++;
    if(count>max_)
            max_=count;
    if(input==0)
        count=0;
}
cout<<max_;
}
