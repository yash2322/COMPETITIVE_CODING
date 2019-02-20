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
    long int n,numbers,current_max=0,total_max=0;
    cin>>n;
    vector<long int> arr;
    FORS(i,0,n)
    {
        cin>>numbers;
        arr.push_back(numbers);
    }
    FORS(i,0,n)
    {
        if(arr[i]%2==0)
        {
            current_max++;
        }
        else
        {
            if(current_max>total_max)
                total_max=current_max;
            current_max=0;
        }
        if(current_max>total_max)
            total_max=current_max;
    }
    if(total_max>0)
        cout<<total_max;
    else
        cout<<"-1";
    cout<<endl;
}

}
