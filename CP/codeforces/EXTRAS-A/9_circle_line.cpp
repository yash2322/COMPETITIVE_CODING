#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,numbers,a,b,dist_a=0,dist_b=0;
cin>>n;
vector<int> distances;
long int prefix[n+1];
prefix[0]=0;
FORS(i,0,n)
{
 cin>>numbers;
 distances.push_back(numbers);
}
FORS(i,1,n)
{
    prefix[i]=prefix[i-1]+distances[i-1];
}
cin>>a>>b;
if(b<a)
{
dist_a=abs(prefix[b-1]-prefix[a-1]);
dist_b=abs(prefix[a-1]-prefix[n-1])+distances[n-1]+abs(prefix[b-1]);
}
else
{
dist_a=abs(prefix[b-1]-prefix[a-1]);
dist_b=prefix[a-1]+distances[n-1]+abs(prefix[b-1]-prefix[n-1]);
}
(dist_a<dist_b)?cout<<dist_a:cout<<dist_b;
return 0;
}
