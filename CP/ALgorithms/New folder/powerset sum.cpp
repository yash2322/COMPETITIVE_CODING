#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
bool found=false;
int powerset(vector<long int>&bank_notes,int l,int r,long int m,int sum=0)
{
    long int n=bank_notes.size();
    if(l>r)
        {
            if(sum==m)
                found=true;
            return 0;
        }
    powerset(bank_notes,l+1,r,m,sum+bank_notes[l]);
    powerset(bank_notes,l+1,r,m,sum);
}
int main()
{
long long int t;
cin>>t;
while(t--)
{
    long int n,m,input;
    cin>>n>>m;
    vector<long int>bank;
    FORS(i,0,n)
    {
        cin>>input;
        bank.push_back(input);
    }
    powerset(bank,0,bank.size()-1,m);
    if(found)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    found=false;
}
}
