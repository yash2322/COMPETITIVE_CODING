#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    string x,final_str="";
    cin>>x;
    for(long long int i=0;i<x.length();i++)
    {

        int num=x[i]-'0';
        if(i==0)
        {
            if(num>=5&&num<9)
            {
                 num=9-num;
            final_str=final_str+to_string(num);
            }
            else
                final_str=final_str+x[i];


        }
        if(num>=5&&i>0)
        {

            num=9-num;
            final_str=final_str+to_string(num);
        }
        else if(i>0)
        {
            final_str=final_str+x[i];
        }


        //x[i]=to_string(num);

    }
    cout<<final_str;

}
