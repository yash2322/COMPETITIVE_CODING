#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            ar.push_back(a[i]);
        }
    }
    int x=sizeof(ar)/sizeof(ar[0]);
     for(int i=0;i<x;i++)
    cout<<ar[x]<<" ";
}
