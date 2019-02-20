#include<bits/stdc++.h>
using namespace std;

int prime_calc(vector<int> &prime_number)
{
    bool isprime[150+1];

    memset(isprime,true,sizeof(isprime));

    for(int i=2;i<sqrt(150)+1;i++)
    {

        if(isprime[i])
        {
        for(int j=i*2;j<150;j=j+i)
        {
            isprime[j]=false;
        }
        }

    }
    for(int i=2;i<150;i++)
    {

        if(isprime[i])
        prime_number[i]=i;
    }
    prime_number[0]=0;
    prime_number[1]=0;

}
void doori(vector<pair<int,int>> &left_and_right_prime,vector<int> &primes)
{
for(int i=2;i<149;i++)
{

    int j=i,right_prime,left_prime;
    while(primes[j]==0&&j<150)
    {
        //cout<<"inside for "<<primes[j]<<endl;

        j++;
        //cout<<"j="<<j<<" ";
    }

    right_prime=primes[j];
    j=i;
    while(primes[j]==0&&j>0)
    {
        j--;
    }
    left_prime=primes[j];
    left_and_right_prime[i]={left_prime,right_prime};
    if(i>=113)
    left_and_right_prime[i]={left_prime,1000};
    if(i<67)
    left_and_right_prime[i]={-1000,67};

}
left_and_right_prime[1]={0,2};
left_and_right_prime[0]={0,1};
//for(auto value:left_and_right_prime)
  //  cout<<value.first<<"-"<<value.second<<endl;

}




int main()
{

vector<int> primes(150,0);
prime_calc(primes);
vector<pair<int,int>> left_and_right_prime(150);
doori(left_and_right_prime,primes);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,ascii;
    string s;
    cin>>n;
    cin.ignore();
    cin>>s;
    for(int k=0;k<s.length();k++)
    {
    ascii=s[k];
    if((ascii==primes[ascii])&&primes[ascii]!=0&&ascii>=67){
        //do nothing
    }
    else
    {
        if(abs(ascii-left_and_right_prime[ascii].first)<=abs(left_and_right_prime[ascii].second-ascii))
            s[k]=left_and_right_prime[ascii].first;
        else
             s[k]=left_and_right_prime[ascii].second;
    }



    }
cout<<s<<endl;
}




}
