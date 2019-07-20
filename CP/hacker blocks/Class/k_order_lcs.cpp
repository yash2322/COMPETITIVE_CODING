#include<iostream>
using namespace std;
int dp[2005][2005][8];
int lcs_k_ordered(int n,int m,int *arr1,int *arr2,int k,int i,int j)
{
  if(i==n or j==m)
  {
    return 0;
  }
  if(dp[i][j][k]!=-1)
    return dp[i][j][k];
  int ans;
  if(arr1[i]==arr2[j])
  {
    ans=1+lcs_k_ordered(n,m,arr1,arr2,k,i+1,j+1);
    dp[i][j][k]=ans;
    return ans;
  }
  else
  {
    int call1=lcs_k_ordered(n,m,arr1,arr2,k,i+1,j);
    int call2=lcs_k_ordered(n,m,arr1,arr2,k,i,j+1);
    int call3=-1;
    if(k>0)
    {
      call3=1+lcs_k_ordered(n,m,arr1,arr2,k-1,i+1,j+1);
    }
    ans=max(call1,max(call2,call3));
    dp[i][j][k]=ans;
    return ans;
  }
}
int main()
{
    long long int l1,l2,k,i,temp;
    cin>>l1>>l2>>k;
    int a[l1],b[l2];
    for(i=0;i<l1;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<l2;i++)
    {
      cin>>b[i];
    }
    for(int i=0;i<2005;i++)
    {
      for(int j=0;j<2005;j++)
      {
        for(int k=0;k<8;k++)
        {
          dp[i][j][k]=-1;
        }
      }
    }
    cout<<lcs_k_ordered(l1,l2,a,b,k,0,0);
    cout<<endl;
}