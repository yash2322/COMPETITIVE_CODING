#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
long int n,t,input;
cin>>t;
FORS(i,0,t)
{
    cin>>n;
    vector<long int> strength_p,strength_v;
    FORE(j,0,n)
    {
        cin>>input;
        strength_v.push_back(input);
    }
    FORE(j,0,n)
    {
        cin>>input;
        strength_p.push_back(input);
    }
    sort(strength_p.begin(),strength_p.end());
    sort(strength_v.begin(),strength_v.end());
    bool condition=true;
    FORS(j,0,n)
    {
        if(strength_p[j]>strength_v[j])
            condition=false;
    }
    if(condition)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}

return 0;
}
