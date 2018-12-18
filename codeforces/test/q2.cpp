#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int primes[10]={2,3,5,7,11,13,17,19,23,27};
int count_1=0;
int extended_euclidean(long long int,long long int,long long  int *,long long int *);
int main()
{
    long long int t,a,b,gcd,X,Y;
    cin>>t;
    FORS(i,0,t)
    {
    cin>>a>>b;
    gcd=extended_euclidean(a, b, &X, &Y);
    cout<<gcd<<endl;
    }

}

int extended_euclidean(long long int a,long long  int b,long long  int *X,long long int *Y)
{

    long long int c,d,max_1,GCD;
    GCD=__gcd(a,b);
    if (a == 0)
    {
        *X = 0;
        *Y = 1;
        return b;
    }
    int gcd = extended_euclidean(b%a, a, &c, &d);
    *X = d - (b/a) * c;
    *Y = c;

   max_1=max(*X,*Y);
   max_1=max(max_1,GCD);
   bool value=false;
    for(int i=0;i<10;i++)
    {
        if((*X%primes[i]||*Y%primes[i]==0)&&GCD%primes[i]==0)
        {
            value=true;
            break;
        }
           if(value==true)
            count_1++;
    }



    return count_1;
}

