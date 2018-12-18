#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
li t;
cin>>t;
FORS(i,0,t)
{
    li K,N,input,sum=0,square_sum=0;
    cin>>N>>K;
    vector<long int> values;
    FORS(i,0,N)
    {
        cin>>input;
        values.push_back(input);
        sum+=input;
    }
    sort(values.begin(),values.end(),greater<int>());
    FORS(i,0,K)
    values[i]=1;
    FORS(i,0,N)
    square_sum+=(values[i]*values[i]);
    if(sum>=square_sum)
        cout<<"YES\n";
        else
        cout<<"NO\n";

}
}
