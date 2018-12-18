#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
int n,magnet_value;
int count_s=1;
cin>>n;
vector<int> magnets;
FORS(i,0,n)
{
    cin>>magnet_value;
    magnets.push_back(magnet_value);
}

FORS(i,1,n)
{
if(magnets[i]!=magnets[i-1])
    count_s++;

}
cout<<count_s;
}
