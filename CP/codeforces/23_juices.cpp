#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,max_size_allowed,wastage_capacity,sum_of_total_used_oranges=0,times_cleaned=0;
cin>>n>>max_size_allowed>>wastage_capacity;
int arr[n];
FORS(i,0,n)
{
    cin>>arr[i];
    if(arr[i]<=max_size_allowed)

    {
        sum_of_total_used_oranges=sum_of_total_used_oranges+arr[i];

    }
    if(sum_of_total_used_oranges>wastage_capacity)
        {
        times_cleaned++;
        sum_of_total_used_oranges=0;
        }



}
cout<<times_cleaned;
}

