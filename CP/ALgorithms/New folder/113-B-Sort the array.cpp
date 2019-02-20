#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000

using namespace std;
int main()
{
    long int n,input,starting_index,ending_index,number_to_find,index_in_sorted=-1;
    vector<long int> arr;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>input;
        arr.push_back(input);
    }
    vector<long int> sorted_arr(arr);
    sort(sorted_arr.begin(),sorted_arr.end());
    FORS(i,0,n)
    cout<<sorted_arr[i]<<" ";
    FORS(i,0,n)
    {
        if(sorted_arr[i]!=arr[i])
           {
               number_to_find=sorted_arr[i];
               index_in_sorted=i;
               break;
           }
//position of starting index in the unsorted list;
    }
    if(index_in_sorted>=0)
    {
    FORS(i,0,n)
    {
        if(arr[i]==number_to_find)
            starting_index=i;
    }// all the elements before the starting index should be smaller than the elements after the starting index;
    long int moving_back=starting_index;
    bool sorted=true;
    if(starting_index!=n-1)
    {
    while(moving_back>=index_in_sorted)
    {
    if(arr[moving_back]>arr[starting_index+1])   //comparing  :
    {
        sorted=false;
        break;
    }
    moving_back--;
    }
    if(sorted)
    {
        cout<<"yes\n"<<index_in_sorted+1<<" "<<starting_index+1;  // starting index is actually the ending index till where the array is to be reversed
    }
    else
        cout<<"no";
    }
    else
        cout<<"yesf\n"<<index_in_sorted+1<<" "<<starting_index+1;
    }
    else
    cout<<"yes\n"<<"1 "<<"1";
}

