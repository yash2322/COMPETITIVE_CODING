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
long long int n,input;
cin>>n;
vector<long long int>arr;
FORS(i,0,n)
{
    cin>>input;
    arr.push_back(input);
}
bool r=false;
FORS(i,0,n)
{
if(i==0){
        cout<<arr[i];
        r=false;
}
else if(i>0&&r==true)
{
    if((i)+pow(2,i))
    FORS(long int j=(i-1)+pow(2,i);j>i-1;j--)
    cout<<arr[j]<<" ";
    i=(i-1)+pow(2,i);
}



}


}
