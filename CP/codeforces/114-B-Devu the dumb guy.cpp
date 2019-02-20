#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000

using namespace std;
int main()
{
long long int n,time,numbers,total_time=0;
cin>>n>>time;
vector<long long int> arr;
FORS(i,0,n)
{
    cin>>numbers;
    arr.push_back(numbers);
}
sort(arr.begin(),arr.end());
FORS(i,0,n)
{
total_time+=arr[i]*time;
if(time>1)
    time--;
}
cout<<total_time;




}
