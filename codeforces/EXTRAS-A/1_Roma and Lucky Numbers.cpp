#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,k,count_of_lucky_numbers=0,count_of_answer=0;
    cin>>n>>k;
    string s;
    cin.ignore();
    FORS(i,0,n)
    {
        cin>>s;
        FORS(j,0,s.length())
        {
            if(s[j]=='4'||s[j]=='7')
                count_of_lucky_numbers++;
        }
        if(count_of_lucky_numbers<=k)
            count_of_answer++;
        count_of_lucky_numbers=0;
    }
cout<<count_of_answer;
}
