#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;
int main()
{
int n,input;
cin>>n;
vector<int> arr;
FORS(i,0,n)
{
    cin>>input;
    arr.push_back(input);
}
int i=0,left,right,count_=0,final_count=INT_MIN,curr_min;
while(i<arr.size())
{
curr_min=arr[i];
left=i-1;
right=i+1;
while(left>=0&&arr[left]<=curr_min)
{
    count_++;
    curr_min=arr[left];
    left--;
}
curr_min=arr[i];
while(right<arr.size()&&arr[right]<=curr_min)
{
    count_++;
    curr_min=arr[right];
    right++;
}
i++;
if(final_count<count_)
    final_count=count_;
count_=0;
}
cout<<final_count+1;
}
