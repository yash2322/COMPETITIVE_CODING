#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--)
    {
    long int n,f,inp;
    cin>>n>>f;
    vector<int>frequency(1001,0);
    for(long int i=0;i<n;i++)
    {
        cin>>inp;
        frequency[inp]++;
    }
    if(frequency[f]==0)
        cout<<-1<<endl;
    else
        cout<<frequency[f]<<endl;
    }

}
