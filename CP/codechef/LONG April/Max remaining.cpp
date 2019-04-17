#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,firstL=INT_MIN,secondL=0,input;
    cin>>n;

    for(long int i=0;i<n;i++)
    {
        cin>>input;
        if(i==0)
            firstL=input;
        else if(i>0&&firstL<input)
        {
            secondL=firstL;
            firstL=input;
        }
    }
    cout<<(secondL%firstL);

}
