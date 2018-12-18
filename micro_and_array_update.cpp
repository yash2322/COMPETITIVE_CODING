#include<bits/stdc++.h>
using namespace std;
int main()
{
  long  int t,n,k;
    cin>>t;
   long int second=0;

    for(int i=0;i<t;i++)
    {
        second=0;
        cin>>n>>k;
      long int ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
        }
       sort(ar,ar+n);
       if(ar[0]<k)
       second=k-ar[0];
       else
        second=0;
        cout<<second<<endl;
}


}
