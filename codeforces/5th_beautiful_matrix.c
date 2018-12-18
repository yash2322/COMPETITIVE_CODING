#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int arr[5][5],pos_i,pos_j,moves;
    FORS(i,1,6)
    FORS(j,1,6)
    {
    cin>>arr[i][j];
    if(arr[i][j]==1)
    {
        pos_i=i;
        pos_j=j;
    }
        moves=3-pos_i;
        abs(moves);
        moves=moves+(3-pos_j);
        abs(moves);
        cout<<moves;
    }

}
