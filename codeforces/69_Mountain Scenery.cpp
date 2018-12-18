#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,k,i,k_counter=0,j;
cin>>n>>k;
vector<long long int> peaks((2*n)+2,0);
for(i=1;i<=((2*n)+1);i++)
{
  cin>>peaks[i];
}
if(n==1&&k==1&&peaks[0]<peaks[1]-1&&peaks[i]-1>peaks[2])
{
    peaks[2]--;
}
else
{
    for(j=2;j<=((2*n)+1);j++)
    {
        if(peaks[j-1]<peaks[j]-1&&peaks[j]-1>peaks[j+1]&&k_counter<k&&j%2==0)
        {
            peaks[j]--;
            k_counter++;
        }
    }
}





for(j=1;j<=((2*n)+1);j++)
{
    cout<<peaks[j]<<" ";
}


}

