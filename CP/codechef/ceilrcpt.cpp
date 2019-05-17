#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
long int p,count_menu=0;
cin>>p;
if(p>2048)
{
        long int temp=p%2048;
        while(temp)
        {
            count_menu+=temp&1;
            temp>>=1;
        }
        count_menu+=p/2048;
}
else
{
    while(p)
    {
        count_menu+=p&1;
        p>>=1;
    }
}
cout<<count_menu<<endl;
}
}
