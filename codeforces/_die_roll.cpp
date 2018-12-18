#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{

int a,b,gcd_of_number;
cin>>a>>b;

int favourable_outcome=6-max(a,b)+1;
//cout<<favourable_outcome;
gcd_of_number=__gcd(favourable_outcome,6);
//cout<<gcd_of_number;
cout<<favourable_outcome/gcd_of_number<<"/"<<6/gcd_of_number;
}
