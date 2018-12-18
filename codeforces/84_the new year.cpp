#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
vector<int> arr(3);
FORS(i,0,3)
    cin>>arr[i];
sort(arr.begin(),arr.end());
cout<<(arr[2]-arr[0]);
}
