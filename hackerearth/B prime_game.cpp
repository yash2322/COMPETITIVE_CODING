#include<bits/stdc++.h>
using namespace std;
vector<long long int> primes(1000000,0);

void SieveOfEratosthenes(long long int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (long long int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (long long int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (long long int p=2; p<=n; p++)
       if (prime[p])
       {
           primes[p]=p;

       }

//cout<<primes[4]<<" "<<primes[7]<<endl;
          primes[0]=0;
          primes[1]=0;

}

int main()
{

        long long int n =1000000;
    SieveOfEratosthenes(n);
  long long int t,x,count=0,number;
  string num;
  cin>>t;
  bool alice=true;
  for(int i=0;i<t;i++)
  {
      char turn='A';
      cin>>x;
      while(x>10)
      {
          cout<<x<<endl;

          if(turn=='A')
          {
              cout<<"a"<<endl;
                num=to_string(x);
              num=num.substr(1,num.length()-1);
              number=stoi(num);
              cout<<"n="<<number<<endl;
              if(primes[x/10]==0)
              {
              x=x/10;
              turn='B';
              }
              else if(primes[number]==0)
              {
                  x=number;
                  turn='B';
              }
              else
              {
                    alice=false;
                  break;
              }

          }
          else
          {
              cout<<"B"<<endl;
              num=to_string(x);
              num=num.substr(1,num.length()-1);
              number=stoi(num);
              if(primes[x/10]==0)
              {
              x=x/10;
              turn='A';
              }
              else if(primes[number]==0)
              {
                  x=number;
                  turn='A';
              }
              else
              {
                    alice=true;
                  break;
              }
          }
      }
      if(x<10&&turn=='A')
        cout<<"BOB\n";
      else if(x<10&turn=='B')
        cout<<"ALICE\n";
      else if(x>10&&alice==false)
        cout<<"BOB\n";
      else
        cout<<"ALICE\n";




  }
 /* if((f==true&&l==true)&&count%2!=0)
      cout<<"Alice"<<endl;
      else if((f==true&&l==true)&&count%2==0)
      cout<<"Bob"<<endl;*/

}

