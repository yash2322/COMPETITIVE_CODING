#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
    long long int n,k,numbers_left,pow_=1;
    cin>>n>>k;
    while(true)
    {
        pow_++;
        n=n/k;
        if(n<k)
            break;
    }

    cout<<pow(k,pow_-1)<<endl;
}

}
