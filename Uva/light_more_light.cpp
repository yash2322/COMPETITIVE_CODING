#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
/*long long int factor(long long int number)
{
long long int factors_of=number,count1=0;

  vector<long long int> factors;
    for(long long int i=1;i<sqrt(factors_of)+1;i++)
    {

        if(factors_of%i==0&&i*i!=factors_of)
        {
       factors.push_back(i);
        factors.push_back(factors_of/i);
        count1=count1+2;

        }
        if(factors_of%i==0&&i*i==factors_of)
        {
            factors.push_back(i);
            count1+=1;
        }

    }
    return count1;
}*/



int main()
{
 long long int n,sqrt_int;
long double sqrt_d;
    while(true)
    {
    cin>>n;
    if(n==0)
        break;
    if(sqrt(n)-floor(sqrt(n))==0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }

}
