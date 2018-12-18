#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;
int main()
{
    int n,difference,input;
vector<int> arr;
cin>>n>>difference;

while(n--)
{
cin>>input;
arr.push_back(input);
}
vector<int> differece_array(arr);

FORS(i,0,differece_array.size())
{
int first=0,last=differece_array.size(),mid;
mid=(first+last)/2;
int key=differece_array[i]-40;
while(first<=last)
{
   // cout<<differece_array[mid]<<" ";
    if(differece_array[mid]==key)
        break;
    else if(key>differece_array[mid])
    {
        first=mid+1;
    }
    else
        last=mid-1;
        mid=(first+last)/2;

}
cout<<mid;

}




}
