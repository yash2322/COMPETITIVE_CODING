#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int x;
    cin>>x;
    char a[x][x],diagonal_character,second_character='0';
    bool diagonal_form=true;
    FORS(i,0,x)
    {
        FORS(j,0,x)
        {
            cin>>a[i][j];
            if(i==0&&j==1)
            {
             second_character=a[i][j];   //setting another charcter
            if(second_character==diagonal_character)
                diagonal_form=false;
            }
            if(i==0&&j==0)
                diagonal_character=a[i][j];  //setting diagonal character
            if(i==j&&a[i][j]!=diagonal_character)
            { //if charater at diagonal is not same as previous
                diagonal_form=false;
            }
            if(((x-1)-(i+j))==0&&(a[i][x-1-i]!=diagonal_character))  //if 2nd diagonal elements are not same
                    diagonal_form=false;
            if(second_character!='0'&&(a[i][j]!=second_character)&&i!=j&&((x-1)-(i+j))!=0)
            { //if element is not diagonal element then it should be same as second character
             diagonal_form=false;
            }



        }
    }
    if(diagonal_form==true)
        cout<<"YES";
        else
        cout<<"NO";

}
