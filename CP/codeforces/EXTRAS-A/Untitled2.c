#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n;
    cin>>n;
    FORS(i,0,n)
    {
        FORS(j,0,n)
        {
           if(i%2==0)
           {
               if(j%2==0)
                cout<<"c";
               else
                cout<<".";
           }
           else
           {
               if((j+1)%2==0)
                cout<<"c";
               else
                cout<<".";
           }
        }
        cout<<endl;
    }
}
