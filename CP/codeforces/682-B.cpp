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
    long int n;
    cin>>n;
    vector<long int>values;
    FORS(i,0,n){
        long int input;
        cin>>input;
        values.push_back(input);
    }
    long int counter=1;
    sort(values.begin(),values.end());
    bool flag=false;
    FORS(i,0,n){
        if(counter!=values[i]){
        counter++;
        flag=true;
        }
    }
    if(flag)
    cout<<counter;
    else
    {
        cout<<counter+1;
    }
    
    
    
}