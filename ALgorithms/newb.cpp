#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int binary_search_(int arr[],int first,int last,int key)
{

   int mid=(first+last)/2;
    if(first>=last)
        return -1;
    else if(arr[mid]==key)
        return mid;
    else
    {
        if(arr[mid]<key)
        return binary_search_(arr,mid+1,last,key);
        if(key<arr[mid])
            return binary_search_(arr,0,mid-1,key);
    }


}

int main()
{
    int array1[10],k;
    FORS(i,0,10)
    {
        cin>>array1[i];
    }
    cin>>k;
  int i=  binary_search_(array1,0,9,k);
  cout<<i;
}
