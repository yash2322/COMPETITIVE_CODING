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
long int t;
cin>>t;
while(t--)
{
    long int n,number,frequency=1;
    vector<long long int>arr;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>number;
        arr.push_back(number);
    }
    sort(arr.begin(),arr.end());
    long int i=1;
    while(1)
    {
        if(arr[i]==arr[i-1]&&(i!=n))
            frequency++;
        else
            break;
        i++;
    }
    if(frequency%2!=0)
        cout<<"Lucky";
    else
        cout<<"Unlucky";
    cout<<endl;
}
}
