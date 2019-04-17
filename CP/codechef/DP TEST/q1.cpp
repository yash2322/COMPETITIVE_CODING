#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
//anoop@programmingpathshala.com
int main()
{
long int t;cin>>t;

while(t--)
{

    long int n,input,k,total=0;
    cin>>n;
    vector<long int>numbers;
    FORS(i,0,n)
    {
        cin>>input;
        numbers.push_back(input);
    }
    cin>>k;
    sort(numbers.begin(),numbers.end());
    FORS(i,0,k)
    {
        total+=numbers[i];
    }
   // cout<<total;
    total+=numbers[k-1]*(n-k);
    cout<<total<<endl;
}
}
