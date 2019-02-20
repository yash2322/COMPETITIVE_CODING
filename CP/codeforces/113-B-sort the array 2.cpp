#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000

using namespace std;
int main()
{
    long int n,input,starting_index,ending_index,number_to_find,index_in_sorted=-1,temp;
    vector<long int> arr;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>input;
        arr.push_back(input);
    }
    bool sorted=true;
    vector<long int> sorted_arr(arr);
    sort(sorted_arr.begin(),sorted_arr.end());
    FORS(i,0,n)
    {
        if(sorted_arr[i]!=arr[i])
           {
               number_to_find=sorted_arr[i];
               index_in_sorted=i;
               break;
           }
    }
    if(index_in_sorted>=0)
    {
    FORS(i,0,n)
    {
        if(arr[i]==number_to_find)
            starting_index=i;
    }
    FORS(i,0,(starting_index-index_in_sorted+1)/2)
    {
        temp=arr[index_in_sorted+i];
        arr[index_in_sorted+i]=arr[starting_index-i];
        arr[starting_index-i]=temp;
    }
    FORS(i,0,n)
    {
        if(arr[i]!=sorted_arr[i])
            sorted=false;
    }
    if(sorted)
        cout<<"yes\n"<<index_in_sorted+1<<" "<<starting_index+1<<endl;
    else
    cout<<"no"<<endl;
    }
    else
        cout<<"yes\n"<<"1 1"<<endl;
}

