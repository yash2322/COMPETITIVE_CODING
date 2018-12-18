#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
    li n,l,input;
    vector<long int> lanterns;
cin>>n>>l;
FORS(i,0,n)
{
    cin>>input;
    lanterns.push_back(input);
}
sort(lanterns.begin(),lanterns.end());
double maximum_separtion=INT_MIN,diff;
FORS(i,0,n-1)
{
diff=lanterns[i+1]-lanterns[i];
if(diff>maximum_separtion)
    maximum_separtion=diff;
}
if(lanterns[0]>maximum_separtion/2.0)
{
  cout<<fixed<<setprecision(10)<<(float)lanterns[0];
  return 0;
}
else if(l-lanterns[n-1]>maximum_separtion/2)
{
    cout<<fixed<<setprecision(10)<<lanterns[n-1];
    return 0;
}
else
cout<<fixed<<setprecision(10)<<maximum_separtion/2.0;
}
