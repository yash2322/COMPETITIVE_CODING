#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

    long int n,t;

    cin>>t;
    FORS(i,0,t)
    {
        cin>>n;

        long int array1[n],day=0,prefix_sum[n]={0},can_tell_to=0,people_told=1;
        FORS(j,0,n)
        {
        cin>>array1[j];
        if(j==0)
        {
            prefix_sum[j]=array1[j];
        }
        else
            prefix_sum[j]=prefix_sum[j-1]+array1[j];
        }

        while(people_told<n)
        {
        can_tell_to=prefix_sum[people_told-1];
        people_told=people_told+can_tell_to;

        day++;
        }
        cout<<day<<endl;

    }


}
