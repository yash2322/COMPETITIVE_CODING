#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

long int n,m,max_of_n_m;
cin>>n>>m;
set<int> prime;
set<int> ::iterator itr;
//calculating prime numbers;
max_of_n_m=max(n,m);
bool primes[max_of_n_m+1];
memset(primes,true,sizeof(primes));
for(int x=2;x<=sqrt(max_of_n_m);x++)
{
    if(primes[x]==true)
    {
    for(int j=x*2;j<=max_of_n_m;j+=x)
        primes[j]=false;
    }
}
for(int i=2;i<=max_of_n_m;i++)
    if(primes[i])
        prime.insert(i);

itr=prime.find(n);
itr++;
if(*itr==m)
    cout<<"YES";
    else
    cout<<"NO";
}
