#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,input,miss=1000001,extra;
        cin>>n;
        vector<int>occ(n+1,0);
        for(long int i=1;i<=n;i++)
        {
            cin>>input;
            occ[input]++;
        }
        for(long int i=1;i<=n;i++)
        {
        if(occ[i]==0)
        {
            if(i<miss)
                miss=i;
        }
        if(occ[i]>1)
        {
            extra=i;
        }
        }
        cout<<extra<<" "<<miss<<endl;
    }
}
