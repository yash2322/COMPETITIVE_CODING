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
float check_corners;
if(lanterns[0]>(l-lanterns[n-1]))
{
  check_corners=lanterns[0];
}
else
    check_corners=l-lanterns[n-1];
if(check_corners>maximum_separtion/2)
{
    cout<<fixed<<setprecision(10)<<check_corners<<endl;
    return 0;
}
else
cout<<fixed<<setprecision(10)<<maximum_separtion/2.0<<endl;

}
