#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3]={0},sum[n]={0},count_solvable=0;

    FORS(i,0,n)
    {
        FORS(j,0,3)
        {
        cin>>arr[i][j];
        if(arr[i][j]==1)
        {
            sum[i]=sum[i]+1;
        }
        }

    }
    FORS(i,0,n)
    if(sum[i]>1)
        count_solvable++;
    cout<<count_solvable<<endl;
}
