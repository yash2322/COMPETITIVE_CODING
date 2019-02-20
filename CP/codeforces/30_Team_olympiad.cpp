#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,x,y1=0,y2=0,y3=0,y=0;
cin>>n;
vector<pair<int,int>> values(n);
vector<int> indexes_1,indexes_2,indexes_3;
int frequency[5000];
FORS(a,0,5000)
{
frequency[a]=0;
}

FORS(i,0,n)
{
    cin>>x;
   values[i]={x,i};
    frequency[x]++;
    if(x==1)
    {
        indexes_1.push_back(i+1);
    }
     if(x==2)
    {
        indexes_2.push_back(i+1);
    } if(x==3)
    {
        indexes_3.push_back(i+1);
    }
}
int min1=INT_MAX,count1;
FORS(i,1,4)
{
    if(frequency[i]<min1)
        min1=frequency[i];
}

count1=min1,y=0;
cout<<min1<<endl;
while(count1>0)
{
    cout<<indexes_1[y]<<" "<<indexes_2[y]<<" "<<indexes_3[y]<<endl;
    count1--;
    y++;
}
}
