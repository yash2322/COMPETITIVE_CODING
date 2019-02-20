#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
bool distinct(int n)
{
    set<int> numbers;
   while(n>0)
   {
    numbers.insert(n%10);
    n=n/10;
   }
    if(numbers.size()==4)
        return true;
    else
        return false;
}
int main()
{
int n;
cin>>n;
while(true)
{
    n=n+1;
    if(distinct(n))
    {
        cout<<n;
        break;
    }
}
}
