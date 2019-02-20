#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
/*long int compute(a,b)
{
    if(b==0)
        return 1;
    else ()
}



int main()
{
    int a,b,mod,v;
    compute(a,b);
}
*/
int main()
{
    long long int a,b,mod;

    while(cin>>a>>b>>mod)
    {
    string s="";
    bool remove_initial_zeros=false;
    FORE(i,32,0)
    {
        long long int k=b>>i;
        if(k&1)
            {
                s=s+"1";
                remove_initial_zeros=true;
            }
        else
            if(remove_initial_zeros==true)
                s=s+"0";
    }
    //cout<<s<<endl;
    long long int mod_value;
    FORS(i,0,s.length())
    {
        if(s[i]=='1')
        {
            if(i==0)
                mod_value=a%mod;
                else
                {
                    mod_value=(int(pow(mod_value,2)))%mod;   // need to typecast to integer because pow return decimal but % is defined for only integers;
                    mod_value=(mod_value*(a%mod))%mod;
                }
        }
        else

            mod_value=(int(pow(mod_value,2)))%mod;
    }
    if(b!=0)
    cout<<mod_value<<endl;
    else
    cout<<1<<endl;
    }
}
