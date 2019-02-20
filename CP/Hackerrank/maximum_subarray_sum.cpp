#include <bits/stdc++.h>
#define FORS(i, a, b) for (long long int i = a; i < b; i++)
#define FORE(i, a, b) for (long long int i = a - 1; i >= 0; i--)
#define MAX 1000000
#define FS                                                                     \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define out(a) cout << a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
   long long int t;
cin>>t;
while(t--)
{
    long long int n,m,input,current_max=0,final_max=INT_MIN;
    vector<long long int> arr;
    cin>>n>>m;
    FORS(i,0,n)
    {
        cin>>input;
        arr.push_back(input);
    }
    FORS(i,0,n)
    {
        current_max+=arr[i];
        cout<<current_max<<endl;
        cout<<current_max%m<<endl;
     if(current_max%m>final_max%m)
        final_max=current_max%m;
     if(current_max<0)
        current_max=0;
    }
    cout<<final_max;
}
}
