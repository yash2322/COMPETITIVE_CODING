#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--)
    {
long int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
     a[i][0]=1;
for(int i=0;i<m;i++)
     a[0][i]=1;
for(int i=1;i<n;i++)
     for(int j=1;j<m;j++)
     a[i][j]=a[i-1][j]+a[i][j-1];

cout<<a[n-1][m-1]<<endl;
}

}
