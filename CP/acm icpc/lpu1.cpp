#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int t,n,k,input,left,right;

cin>>t;
while(t--)
{
    vector<long int> arr;
    cin>>n>>k;
    FORS(i,0,n)
    {
        cin>>input;
        arr.push_back(input);
    }
    long int x=0;
    long int m=INT_MIN;
    for(long int j=k;j>=0;j--)
    {
        m=max(m,arr[x]*arr[n-1-j]);
        x++;
    }
    cout<<m<<endl;
  /* left=0;
    right=n-1;
    while(k--)
    {
        if(arr[left]>=arr[right])
            {
              //  cout<<"deleted "<<arr[right]<<endl;
                right--;
            }
        else
        {
          //   cout<<"deleted "<<arr[left]<<endl;
             left++;
        }

    }
    cout<<arr[left]*arr[right]<<endl;
*/}


}
