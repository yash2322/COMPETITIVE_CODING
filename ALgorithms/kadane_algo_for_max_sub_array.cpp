

/*   to find the maximum subarray sum by dynamic programming approch */


#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long i=a;i<b;i++)
#define FORE(i,a,b) for(long long i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int N,input;
    cin>>N;
    vector<long long int> arr;
    FORS(i,0,N)
    {
        cin>>input;
        arr.push_back(input);
    }
    long int max_so_far=INT_MIN,current_max=0,start =0, ending = 0, s=0;
    FORS(i,0,N)
    {
        current_max=current_max+arr[i];
        if(max_so_far<current_max)
        {
            max_so_far=current_max;
            start=s;
            ending=i;
        }

        if(current_max<0)
        {
             current_max=0;
             start=i+1;
        }

    }

}





















