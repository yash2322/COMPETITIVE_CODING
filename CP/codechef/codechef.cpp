#include<bits/stdc++.h>
using namespace std;

vector<long int>prime_number;
void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          prime_number.push_back(p); 
} 
int main()
{
SieveOfEratosthenes(2500);
long int t;
cin>>t;
while(t--)
{
    long int x,y;
    cin>>x>>y;
    for(int i=0;i<prime_number.size();i++)
    {
        if(prime_number[i]==(X+y))
            {
                cout<<0;
                return 0;
            }
        if(prime_number[i]>x+y)
            {
                cout<<prime_number[i]-(x+y);
                return 0;
            }
    }
}


}