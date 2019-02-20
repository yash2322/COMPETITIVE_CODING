#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
    long long int N,numbers,sum=0;
    cin>>N;
    vector<long long int> A,B;
    FORS(i,0,N)
    {
        cin>>numbers;
        A.push_back(numbers);
    }
    FORS(i,0,N)
    {
      cin>>numbers;
        B.push_back(numbers);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    FORS(i,0,N)
    {
        sum=(sum%1000000009+llabs(A[i]-B[i]))%1000000009;
    }
    cout<<sum%1000000009;
}
