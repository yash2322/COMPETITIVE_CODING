#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

typedef unsigned long long int ull;
typedef long long int sll;

using namespace std;

//void insert_in_sorted_order(long long int a[],long long int index,set<long long int> &temp_array)
int main()
{
long long n;
cin>>n;
long long int max_snack=INT_MIN,arrays[n];
FORS(i,0,n)
{
    cin>>arrays[i];
    if(arrays[i]>max_snack)
    {
    max_snack=arrays[i];
    }

}
set<long long int> temp_array;
set<long long int>::iterator itr;

//sort(temp_array.begin(),temp_array.begin()+5);
long long required_snack=max_snack,day=0;

FORS(i,0,n)
{
    temp_array.insert(arrays[i]);
itr=find(temp_array.begin(),temp_array.end(),required_snack);

if(itr!=temp_array.end())
{
    while(*itr==required_snack&&*itr>0)
    {
    cout<<required_snack<<" ";
     required_snack--;

     itr--;
    }

}
if(required_snack==1)
{
    cout<<required_snack;
}
 cout<<endl;
}

}
