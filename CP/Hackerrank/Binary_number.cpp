#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    vector<int> ar;
    int count=0,max_count=0;
    //converting to binary
    while(n>0)
    {
    ar.push_back(n%2);
    cout<<n%2;
        n=n/2;
        
    }
    for(int i=ar.size()-1;i>=0;i--)
    
    {
    	cout<<endl;
    	cout<<ar[i];
    }
    //finding consecutive 1's
    cout<<endl;
    for(int i=0;i<ar.size();i++)
    {
    if(ar[i]==1)
    {
        count++;
        if(max_count<count)
        max_count=count; 
        }
        else
        {
        
            count=0;
        
        }
    }
    count=0;
    //cout<<"Max-"<<max_count<<endl;
    //converting to decimal
    for(int i=0;i<max_count;i++)
    {
    count=count+pow(2,i);
    }
    cout<<count;
    return 0;
}

