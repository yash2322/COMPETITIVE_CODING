#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
vector<long int> powerset(vector<long int>&bank_notes,int l,int r,vector<long int>&sum_found,int sum=0)
{
    long int n=bank_notes.size();
    if(l>r)
        {
          cout<<sum<<" ";
          sum_found.push_back(sum);
          return sum_found;
        }
    powerset(bank_notes,l+1,r,sum_found,sum+bank_notes[l]);
    powerset(bank_notes,l+1,r,sum_found,sum);

}
int main()
{
long long int t;
cin>>t;
while(t--)
{
    bool found=false;
    long int n,m,input;
    cin>>n>>m;
    vector<long int>bank,sum_found;
    FORS(i,0,n)
    {
        cin>>input;
        bank.push_back(input);
    }
    sum_found=powerset(bank,0,bank.size()-1,sum_found);
    for(auto a:sum_found){
        if(a==m)
        {
            cout<<"YES\n";
            found=true;
            break;
        }
}
        if(!found)
        cout<<"NO\n";

}

}
