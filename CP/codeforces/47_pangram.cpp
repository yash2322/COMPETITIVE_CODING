#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
int main()
{
    int n,occured_or_not[200],ascii;
    FORS(i,0,200)
    {
        occured_or_not[i]=0;
    }
    cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    FORS(i,0,s.length())
    {
    ascii=s[i];
    //setting the index as 1 where the ascii value is occured in the string;
    occured_or_not[ascii]=1;
    }
    int i=0;
    //running loop from "A" to "Z"
    for(i=65;i<=90;i++)
    {
        //if the sum of value at small A-Z and a-z is ==0 means that letter is not present in lowercase as well as uppercase;
        if((occured_or_not[i]+occured_or_not[i+32])==0)
            break;
    }

    if(i<=90)
        cout<<"NO";
    else
        cout<<"YES";
}
