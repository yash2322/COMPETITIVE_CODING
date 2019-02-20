#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int *j;
    for(int i=0;i<n;i++)
    {
        j=max_element(a+i+1,a+n-1);
    cout<<*j;
     
    }
     
     
   
}
