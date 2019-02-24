#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
long long int n,k,input;
cin>>n>>k;
vector<long long int>arr;
vector<long long int>position_for_first_element(n+1,0);
FORS(i,0,n)
{
cin>>input;
arr.push_back(input);
}
position_for_first_element[0]=1;
FORS(i,0,n-1)
{
    position_for_first_element[i+1]=position_for_first_element[i]+i+1;
}
long long int position=0;
FORS(i,0,n)
{
    if(k==position_for_first_element[i])
    {
        cout<<arr[0]<<endl;
        return 0;
    }
}
long long int diff;
if(position_for_first_element[n-1]<k)
{
    cout<<arr[k-position_for_first_element[n-1]];
    return 0;
}
while(position_for_first_element[position]<k)
{
   position++;
}
position--;
diff=k-position_for_first_element[position];
cout<<arr[diff]<<endl;
}
