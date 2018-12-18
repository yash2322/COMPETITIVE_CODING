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
   long long int i=0;
    while(true)
    {
            if(A_array[i]<B_array[i]&&A_array[i+1]<B_array[i+1]&&A_array[i+2]<B_array[i+2]&&i<n-2)
            {
                //cout<<"IF"<<endl;
                A_array[i]+=a;
                A_array[i+1]+=b;
                A_array[i+2]+=c;
                i=-1;
            }
            else if((A_array[i]==B_array[i]&&A_array[i+1]==B_array[i+1]&&A_array[i+2]==B_array[i+2])&&i==n-2)
            {
            //    cout<<"IF-2"<<endl;
              // cout<<"yes";
                break;
            }

            else if((A_array[i]!=B_array[i]||A_array[i+1]!=B_array[i+1]||A_array[i+2]!=B_array[i+2])&&i==n-2)
            {
              //  cout<<"IF-3"<<endl;
               // cout<<"NO";
                break;

            }
    if(i==n-2)
        break;

        i++;
    }
    bool flag=true;
    FORS(i,0,n)
    {
        if(A_array[i]!=B_array[i])
            flag=false;

    }
if(flag==false)
    cout<<"NIE"<<endl;
else
    cout<<"TAK"<<endl;

    }
}
