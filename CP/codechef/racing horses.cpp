#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int t,n,input;
cin>>t;
while(t--)
{
    long long int diff=1000000001;
    cin>>n;
    vector<long long int>numbers;
    for(long int i=0;i<n;i++)
    {
        cin>>input;
        numbers.push_back(input);
    }
    sort(numbers.begin(),numbers.end());
    for(long int i=0;i<n-1;i++)
    {

        if((numbers[i+1]-numbers[i])<diff)
            diff=(numbers[i+1]-numbers[i]);

    }
    cout<<diff<<endl;
}
}
