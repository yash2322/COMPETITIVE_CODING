#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,numbers,a,b,dist;
cin>>n;
vector<int> distances;
FORS(i,0,n)
{
 cin>>numbers;
 distances.push_back(numbers);
}
cin>>a>>b;
FORS(i,a-1,b)
dist+=distances[i];
cout<<dist;

}
