#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int t;
 cin>>t;
 while(t--)
 {
     long int n,m,k,a,b,current_count=0,total_hori=0,total_verti=0;
     cin>>n>>m;
     bool found=false;
     vector<vector<long int>>fence(n,vector<long int>(m,0));
     cin>>k;
     for(long int i=0;i<k;i++)
     {
         cin>>a>>b;
         fence[a-1][b-1]=1;
     }
    /* for(long int i=0;i<n;i++)
     {
         for(long int j=0;j<m;j++)
            cout<<fence[i][j]<<" ";
    cout<<endl;
     }*/  //  2 4 2 2   2 2 4 2
     for(long int i=0;i<m;i++)
     {
         for(long int j=0;j<n;j++)
         {
             if(fence[j][i]==0)
             {

                if(found)
                {total_verti+=2;

               //  cout<<j<<" "<<i<<endl;
                 }   found=false;

             }
             else if(fence[j][i]==1)
             {
              found=true;
             }

         }
         if(found)
            total_verti+=2;
         found=false;
     }
   //  cout<<total_verti<<endl;
     if(found)
        total_verti+=2;
        found=false;
        for(long int i=0;i<n;i++)
     {
         for(long int j=0;j<m;j++)
         {
             if(fence[i][j]==0)
             {
                if(found)
                total_hori+=2;
                    found=false;
             }
             else if(fence[i][j]==1)
             {
              found=true;
             }

         }
         if(found)
            total_hori+=2;
         found=false;
     }
     if(found)
        total_hori+=2;
     //   cout<<total_hori<<endl;
        cout<<(total_verti+total_hori)<<endl;
 }


}
