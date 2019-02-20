#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long int n,p,input;
    cin>>n>>p;
    set<int> levels_that_can_be_passed;
    set<int>::iterator itr;

    FORS(i,0,p)
    {
        cin>>input;
        levels_that_can_be_passed.insert(input);
    }
    cin>>p;
    FORS(i,0,p)
    {
        cin>>input;
        levels_that_can_be_passed.insert(input);
    }

    int i=0;
    itr=levels_that_can_be_passed.begin();
   for(i=1;i<=n;i++)
    {
    if(*itr!=i)
        break;
        itr++;
    }
    if(i!=n+1)
        cout<<"Oh, my keyboard!";
    else
        cout<<"I become the guy.";

}
