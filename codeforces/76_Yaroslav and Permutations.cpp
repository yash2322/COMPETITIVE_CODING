#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n;
cin>>n;
int ar[n],maximum_occurnce_of_same_num=INT_MIN;
vector<int>frequency_of_occurence(1001,0);
FORS(i,0,n)
    {
    cin>>ar[i];
    frequency_of_occurence[ar[i]]++;
    }
FORS(i,0,1001)
{
if(frequency_of_occurence[i]>maximum_occurnce_of_same_num)
    maximum_occurnce_of_same_num=frequency_of_occurence[i];
}
if(n%2==0)
{  //if n is even then maximum of same occurence can be n/2;
   if(maximum_occurnce_of_same_num>n/2)
    cout<<"NO\n";
   else
    cout<<"YES\n";
}
else
{
    if(maximum_occurnce_of_same_num>(n/2)+1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
}

