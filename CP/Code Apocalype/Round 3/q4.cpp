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
int main()
{
    long int n,number_he_wants,input,count_=0;
    cin>>n>>number_he_wants;
    vector<long int>no;
    FORS(i,0,n)
    {
        cin>>input;
        no.push_back(input);
    }
    long int total_possible_sets=pow(2,n);
    FORS(i,0,total_possible_sets)
    {
        long int sum=0;
     FORS(j,0,n)
     {
         if(i&(1<<j))
            sum+=no[j];
     }
    if(sum==number_he_wants)
        count_++;
    }
    cout<<count_;



}
