#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;



bool condition(int num)
{
    return (num && !(num & (num - 1)));
}
int main()
{
long int t;
cin>>t;
while(t--)
{

   long int n,input,x=0,a,result=0;
   cin>>n;
        vector<long int> arr;
        FORS(i,0,n)
        {
         cin>>input;
         arr.push_back(input);
        }
        if(n==1)
        {
            if(condition(arr[0]))
            {
                result=1;
                goto down;
            }
        }
        FORS(i,0,32)
        x=x|(1<<i);
        FORS(i,0,32)
        {
        a=x;
        FORS(j,0,n)
        {
            if(arr[j]&(1<<i))
                a=a&arr[j];
        }
         if(condition(a))
            {
          result=1;
            }
            }

down:
    if(result==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    result=0;
}

}
