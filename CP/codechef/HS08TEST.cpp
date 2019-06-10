#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int withdrawl;
    cin>>withdrawl;
    float balance;
    cin>>balance;
    if(withdrawl%5==0)
    {
        if(balance>=withdrawl+0.50)
        {
            cout<<setprecision(2)<<fixed<<(balance-(withdrawl+0.50));
            return 0;
        }
        else
            cout<<setprecision(2)<<fixed<<balance;
    }
    else
        cout<<setprecision(2)<<fixed<<balance;
}
