#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
    long int m,x,y,input;
    cin>>m>>x>>y;
    int arr[101];
    for(long int i=0;i<101;i++)
        arr[i]=0;
    for(long int i=0;i<m;i++)
    {
        cin>>input;
        for(int j=input;j>0&&j>=input-(y*x);j--)
            arr[j]=1;
        for(int j=input;j<=100&&j<=input+(y*x);j++)
            arr[j]=1;
    }
    int sum=0;
    for(long int i=1;i<=100;i++)
    {
           // cout<<arr[i]<<" ";
        if(arr[i]==0)
        sum++;
    }
    cout<<sum<<endl;
}

}
