#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
int n,input;
vector<int> triangular_number;
FORS(i,0,501)
{
triangular_number.push_back((i*(i+1))/2);
}
cin>>n;
FORS(i,0,501)
{
    if(triangular_number[i]==n)
    {
        cout<<"YES";
        return 0;
    }
}
    cout<<"NO";
}
