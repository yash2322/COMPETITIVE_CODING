#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,k;
cin>>n>>k;
if(n%2==0)
    cout<<(pow(k-1,n/2))*(pow(k,n/2));
else
    cout<<(pow(k-1,(n/2)+1))*(pow(k+1,n/2));
}
