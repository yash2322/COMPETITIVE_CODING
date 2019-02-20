/*
    YASH PRATP SINGH
    KE037 B58

*/
#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
bool isPrime(int number)
{
    if(number==1)
        return false;
    if(number==2 || number==3)
        return true;
    for(int i=2;i*i<=number;i++)
        {
        if(number%i==0)
            return false;
    }
    return true;
}
void factors(vector<long>&factor,long num)
{
    for(long i=num;i>=2;i--)
        {
        if(num%i==0 && isPrime(i))
        {
            factor.push_back(i);
            while(num%i==0 && num>0)
            {
                num=num/i;
            }
        }
    }
}
int main()
{
    long int N;
    cin>>N;
    vector<long>num(N);
    vector<long>factor;
     bool flag = false;
    FORS(i,0,N)
        {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    factors(factor,num[0]);
    long a = -1;
    for(long i=0;i<factor.size();i++)
    {
        long j;
        for(j=1;j<num.size();j++)
        {
            if(__gcd(num[j],factor[i])!=factor[i])
            {
                break;
            }
        }
        if(j==N)
        {
            a = factor[i];
            flag = true;
            break;
        }
    }
    if(a==-1)
        cout<<1;
    else
        cout<<a;
}
