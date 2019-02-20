#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string s;
cin>>s;
long int arr[s.length()*2];
FORS(i,0,s.length())
{
    arr[i]=s[i]-'0';
    arr[s.length()*2-i-1]=s[i]-'0';

}
FORS(i,0,s.length()*2)
cout<<arr[i];
}
/* lets take s= 121

numbers are as index palindrome;
                1       11
                2        22
                3        33
                10       1001
                11       1111
                12        1221
                25        2552
                 hence using this concept;
            */
