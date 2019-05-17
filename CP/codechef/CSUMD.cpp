#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,temp;
        cin>>n;
        if(n%2==0)
        {
            long long int last_representation_bits=n/2;
            long long int sum_total=((n-1)*n)/2;
            long long int to_remove=((last_representation_bits-2)*(last_representation_bits-1))/2;
            long long int final_=sum_total-to_remove;
            long long int ans=(int(pow(2,final_)))%1000000007;
            if(n!=2)
            cout<<ans<<endl;
            else
            cout<<3<<endl;
        }
        else
        {
            long long int last_representation_bits=(n/2)+1;
            long long int sum_total=((n-1)*n)/2;
            long long int to_remove=((last_representation_bits-2)*(last_representation_bits-1))/2;
            long long int final_=sum_total-to_remove;
            long long int ans=(int(pow(2,final_)))%1000000007;
            cout<<ans<<endl;
        }
    }
}
