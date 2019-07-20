#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int exactly3Divisors(int);
int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
int exactly3Divisors(int N)
{
    int primes_till=sqrt(N);
    vector<bool>seive(primes_till+1,true);
    seive[0]=false;
    seive[1]=false;
    for(int i=2;i<=sqrt(primes_till);i++){
        if(seive[i])
        {
            for(int j=i*i;j<=primes_till+1;j+=i){
                seive[j]=false;
            }
        }
    }
    vector<int>primes;
    for(int i=0;i<=primes_till;i++){
        if(seive[i])
        primes.push_back(i);
    }
    return primes.size();
}