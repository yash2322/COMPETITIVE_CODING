#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n,h,height_of_individual,width=0;
    cin>>n>>h;
    vector<long int> heights;
    FORS(i,0,n)
    {
    cin>>height_of_individual;
    heights.push_back(height_of_individual);
    }
    FORS(i,0,n)
    {
    if(heights[i]>h)
     width=width+2;
     else
            width=width+1;
    }
    cout<<width;



}
