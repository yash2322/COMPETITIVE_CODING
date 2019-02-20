#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int n,k,numbers,min_index_starting=0,first_k_sum=0,temp;
cin>>n>>k;
vector<long int> heights;
FORS(i,0,n)
{
    cin>>numbers;
    heights.push_back(numbers);
    if(i<k)
        first_k_sum+=heights[i];
}
temp=first_k_sum;
FORS(i,1,n-k+1)
{
temp=temp-heights[i-1]+heights[k+i-1]; //subtracting last number and adding new
if(temp<first_k_sum)
{
    first_k_sum=temp;
    min_index_starting=i;
}
}
cout<<min_index_starting+1<<endl;
}

