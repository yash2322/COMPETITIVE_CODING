#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,k,index_for_ending_of_odds;
cin>>n>>k;
if(n%2!=0)
    index_for_ending_of_odds=(n/2)+1;

else
    index_for_ending_of_odds=n/2;

    if(k>index_for_ending_of_odds)
    {
        cout<<(k-index_for_ending_of_odds)*2;
    }
    else
        cout<<(k*2)-1;

}


