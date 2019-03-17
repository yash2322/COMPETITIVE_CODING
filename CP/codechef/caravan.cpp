#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--)
{
  long long int n,input,current_max_allowed,count_=1;
    cin>>n;
    cin>>input;
    current_max_allowed=input;
    FORS(i,1,n)
    {
        cin>>input;
        if(input<=current_max_allowed)
        {
            count_++;
            current_max_allowed=input;
        }
    }
    cout<<count_<<endl;
}



}
