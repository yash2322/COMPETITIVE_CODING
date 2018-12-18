#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
int n,t,ascii;
string s;
cin>>t;
FORS(i,0,t)
{
    cin>>n;
    cin.ignore();
    cin>>s;

    FORS(j,0,s.length())
    {
        ascii=s[j];
        if(ascii>=65&&ascii<=69)
            cout<<"C";
        else if(ascii>=70&&ascii<=72)
            cout<<"G";
        else if(ascii>=73&&ascii<=76)
            cout<<"I";
        else if(ascii>=77&&ascii<=81)
            cout<<"O";
        else if(ascii>=82&&ascii<=86)
            cout<<"S";
        else if(ascii>=87&&ascii<=90)
            cout<<"Y";
        else if(ascii>=97&&ascii<=99)
            cout<<"a";
        else if(ascii>=100&&ascii<=102)
            cout<<"e";
        else if(ascii>=103&&ascii<=105)
            cout<<"g";
        else if(ascii>=106&&ascii<=108)
            cout<<"k";
        else if(ascii>=109&&ascii<=111)
        cout<<"m";
            else
            cout<<"q";
    }
    cout<<endl;
}}


