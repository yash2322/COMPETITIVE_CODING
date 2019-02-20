#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    FORS(i,0,n)
    {
        cin>>arr[i];
    }
    //
    sort(arr,arr+n);
    FORS(i,0,n)
        cout<<arr[i]<<" ";

}
