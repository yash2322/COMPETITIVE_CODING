#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

int answer(int,int);
void prefix_array_of_primes();

using namespace std;
const int MAX = 100000;

int prefix[MAX + 1];


int main()
{
    prefix_array_of_primes();
    long int t,start,end_index;
    cin>>t;
    FORS(i,0,t)
    {
    cin>>start>>end_index;
    answer(start, end_index);
    }

}
void prefix_array_of_primes()
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= MAX; p++) {

        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true) {

            // Update all multiples of p
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }

    // Build prefix array
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        prefix[p] = prefix[p - 1];
        if (prime[p])
            prefix[p]++;
    }
}

int answer(int L, int R)
{
    cout<< prefix[R] - prefix[L - 1]<<endl;
}
