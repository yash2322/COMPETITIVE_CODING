#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
vector<bool>primes(1000001,true);
for(long int i=2;i*i<=1000001;i++)
{
    if(primes[i])
    {
        for(long int j=i*i;j<=1000001;j+=i)
            primes[j]=false;
    }
}
vector<long int>p;
for(long int i=2;i<1000001;i++)
{
    if(primes[i])
        p.push_back(i);
}

while(t--)
{
    long int n;
    cin>>n;
bool found=false;
for(long int i=0;i<p.size()&&p[i]<n;i++)
{
long int key=n-p[i];
if(primes[n-p[i]]&&key!=1)
{
    cout<<p[i]<<" "<<n-p[i]<<endl;
    found=true;
    break;
}
}
if(!found)
    cout<<-1<<endl;
}
}
