#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int SieveOfAtkin(int limit,vector<int> &primes)
{

    // 2 and 3 are known to be prime
    if (limit > 2)
    {
       primes.push_back(2);

    }



     //   cout << 2 << " ";
    if (limit > 3)
    {

       primes.push_back(3);
    }

       // cout << 3 << " ";

    // Initialise the sieve array with false values
    bool sieve[limit];
    for (int i = 0; i < limit; i++)
        sieve[i] = false;

    /* Mark siev[n] is true if one
       of the following is true:
    a) n = (4*x*x)+(y*y) has odd number of
       solutions, i.e., there exist
       odd number of distinct pairs (x, y)
       that satisfy the equation and
        n % 12 = 1 or n % 12 = 5.
    b) n = (3*x*x)+(y*y) has odd number of
       solutions and n % 12 = 7
    c) n = (3*x*x)-(y*y) has odd number of
       solutions, x > y and n % 12 = 11 */
    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {

            // Main part of Sieve of Atkin
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;

            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;

            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }

    // Mark all multiples of squares as non-prime
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }

    // Print primes using sieve[]

    for (int a = 5; a < limit; a++)
        if (sieve[a])
        {
          primes.push_back(a);
        }

}

int main()
{
char x;
int t,n,ascii,duri_left,duri_right;
vector<int> primes;
SieveOfAtkin(1000,primes);
int index=0;
string s,s2;
cin>>t;
FORS(i,0,t)
{
    cin>>n;
    cin.ignore();
    cin>>s;
s2=s;
    FORS(j,0,s.length())
    {
        ascii=s[j];
  //  cout<<ascii;
   int  f=0,mid;
    int l=primes.size()-1;
    mid=(f+l)/2;
    while(f<l&&primes[mid]!=ascii)
    {
    if(ascii>primes[mid])
    {
        f=mid+1;
    }
    else if(ascii<primes[mid])
    {
        l=mid-1;
    }
     mid=(f+l)/2;
    }
    if(ascii==primes[mid])
    {
     s2[index]=ascii;
     index++;
    }
    else if(ascii>primes[mid])
    {
        duri_left=abs(ascii-primes[mid]);
        duri_right=abs(ascii-primes[mid+1]);
        if(duri_left==duri_right)
        {
             s2[index]=primes[mid];
             index++;
        }
        else if(duri_left>duri_right)
        {
            s2[index]=primes[mid+1];
            index++;
        }
        else
        {
            s2[index]=primes[mid];
            index++;
        }

    }
    else if(primes[mid]>ascii)
    {
         duri_left=abs(ascii-primes[mid-1]);
        duri_right=abs(ascii-primes[mid]);
        if(duri_left==duri_right)
        {
             s2[index]=primes[mid-1];
             index++;
        }
        else if(duri_left>duri_right)
        {
            s2[index]=primes[mid];
            index++;
        }
        else
        {
            s2[index]=primes[mid-1];
            index++;
        }
    }


    }


cout<<s2<<endl;
}

}
