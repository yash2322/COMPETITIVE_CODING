#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
long int n,total_combination=0;
cin>>n;
char arr[n][n];
FORS(i,0,n)
{
    FORS(j,0,n)
    {
        cin>>arr[i][j];
    }
}
long int count_c=0;
FORS(i,0,n)
{

    FORS(j,0,n)
    {
    if(arr[i][j]=='C')
        count_c++;
    }
    total_combination+=(count_c*(count_c-1))/2;
    count_c=0;
}
FORS(i,0,n)
{
    FORS(j,0,n)
    {
        if(arr[j][i]=='C')
                    count_c++;
    }
    total_combination+=(count_c*(count_c-1))/2;
    count_c=0;
}
cout<<total_combination;
}
