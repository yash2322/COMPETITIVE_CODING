#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int i=0,temp_First,temp_last;
    while(i<d)
    {
        temp_First=ar[0];
       
        for(int j=1;j<n;j++)
        {
           ar[j-1]=ar[j];
        }
        ar[n-1]=temp_First;
        i++;
    }
    for(int j=0;j<n;j++)
    {
        cout<<ar[j]<<" ";
    }
}
