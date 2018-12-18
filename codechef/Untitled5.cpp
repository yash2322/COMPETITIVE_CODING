#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

long long int n,t,a=1,b=2,c=3;

    cin>>t;
    FORS(test,0,t)
    {
    cin>>n;
    long long int B_array[n],A_array[n];

    FORS(i,0,n)
    {
        cin>>A_array[i];
    }
    FORS(j,0,n)
    {
        cin>>B_array[j];
    }
    long int i=n-2,times_to_multiply;
   while(i>1)
   {
        if((B_array[i]-A_array[i])%3==0)
        {
        times_to_multiply=(B_array[i]-A_array[i])/3;
        A_array[i]=A_array[i]+3*times_to_multiply;
        A_array[i-1]=A_array[i-1]+2*times_to_multiply;
        A_array[i-2]=A_array[i-2]+times_to_multiply;
        }

        else
        {
            cout<<"NIE"<<endl;
            break;
        }
        i--;
   }

   if(i==1)
    cout<<"TAK"<<endl;

    }
}
