#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long int n,input,current_min=INT_MAX;
cin>>n;
vector<long int>numbers;
FORS(i,0,n)
{
cin>>input;
numbers.push_back(input);
}
long int k;
cin>>k;
if(k==n-2)
    cout<<numbers[n-1]-numbers[0];
else if(k==n-3)
{
FORS(i,1,n-1)
{
        cout<<numbers[i]<<" ";
if(max((numbers[i]-numbers[0]),(numbers[i]-numbers[n-1]))<current_min)
    current_min=max((numbers[i]-numbers[0]),(numbers[i]-numbers[n-1]));
}
}
/*else
{

}*/
cout<<current_min<<endl;
}
