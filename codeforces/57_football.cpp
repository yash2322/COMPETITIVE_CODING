#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,frequency[2]={0,0};
    cin>>n;
    cin.ignore();

    string s[n],second_string;

FORS(i,0,n)
{
    cin>>s[i];

    if(i>0&&(s[i]!=s[0]))
        {//if the 2nd string is not equal to the first string
            frequency[1]++;
        second_string=s[i];
        }

    else
        frequency[0]++;
}
if(frequency[0]>frequency[1])
    cout<<s[0];
else
    cout<<second_string;
    }
