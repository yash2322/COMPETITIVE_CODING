#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long i=a;i<b;i++)
#define FORE(i,a,b) for(long long i=a-1;i>=0;i--)
using namespace std;
int main()
{
 long long int t;
 cin>>t;

 FORS(i,0,t)
 {
    long long int n,k,number,to_put_int_set,mul=1;
    set<long long int> numbers;
    set<long long int>::iterator itr,itr2;
    cin>>n>>k;
    number=n;
    while(k>0)
    {
//cout<<"in"<<endl;
     if(number%k==0)
     {
        //cout<<number/k<<endl;
        itr=numbers.find(number/k);

        if(itr==numbers.end())
        {
            numbers.insert(number/k);
            n=n-(number/k);

            number=n;

        k--;
        }
        else
            number--;
     }
     else
        number--;
    }
for(auto it:numbers)
   {
    mul=mul*((it*it)-it);
    cout<<it<<endl;
   }

 /*   for(itr=numbers.begin();itr!=numbers.end();itr++)
    {
        mul=mul*(((*itr)*(*itr))-itr);
    }*/
cout<<mul<<endl;
 }

}
