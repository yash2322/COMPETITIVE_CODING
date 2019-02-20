#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int n,k;
    string numbers;
    cin>>n>>k;

    long int count1=0;

    FORS(i,0,n)
   {
       bool is_k_good=true;
    vector<long int> checker(10,0);
    cin>>numbers;
    for(long int j=0;j<numbers.length();j++)
    {
        checker[numbers[j]-'0']=1;
    }

    for(long int j=0;j<=k;j++)
   {
       if(checker[j]!=1)
        is_k_good=false;

   }
   if(is_k_good==true)
        count1++;
   }

   cout<<count1;

}
