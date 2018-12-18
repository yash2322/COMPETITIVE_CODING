#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;
int main()
{
long int t;
cin>>t;
char input;
while(t--)
{
vector<vector<char>> tic_toe(4,vector<char>(4));
FORS(i,0,4)
{
    FORS(j,0,4)
    {
        cin>>input;
        tic_toe[i][j]=input;

    }
}
bool dot_selection_r=false,dot_selection_c=false,dot_selection_d1=false,dot_selection_d2=false;
int count_r=0,count_c=0,count_p_Dia=0,count_n_Dia=0;
bool win=false;
FORS(i,0,4)
{
    FORS(j,0,4)
    {
        if(tic_toe[i][j]=='x'||(tic_toe[i][j]=='.'&&dot_selection_r==false))
        {

          count_r++;
         // cout<<tic_toe[i][j]<<" "<<count_r<<endl;
          if(tic_toe[i][j]=='.')
            dot_selection_r=true;
          if(count_r==3)
          {
              cout<<"-1\n";
             win=true;
             goto X;
          }
        }
        else if(tic_toe[i][j]=='o'||(tic_toe[i][j]=='.'&&dot_selection_r==true))
        {
            count_r=0;
           // cout<<tic_toe[i][j]<<" "<<count_r<<endl;
            dot_selection_r=false;
        }
        if(tic_toe[j][i]=='x'||(tic_toe[j][i]=='.'&&dot_selection_c==false))
            {
                count_c++;
                if(tic_toe[j][i]=='.')
            dot_selection_c=true;
            if(count_c==3)
            {
               cout<<"-2\n";
             win=true;
             goto X;
            }
            }
            else if(tic_toe[j][i]=='o'||(tic_toe[j][i]=='.'&&dot_selection_c==true))
            {

               count_c=0;
               dot_selection_c=false;
            }

            if(i==j)
            {
                if(tic_toe[i][j]=='x'||(tic_toe[i][j]=='.'&&dot_selection_d1==false))
                {
                count_p_Dia++;
                if(tic_toe[i][j]=='.')
            dot_selection_d1=true;
                if(count_p_Dia==3)
                {
                cout<<"-3\n";
                win=true;
                goto X;
                }
                }
                 else if(tic_toe[i][j]=='o'||(tic_toe[i][j]=='.'&&dot_selection_d1==true))
                 {
                      count_p_Dia=0;
                      dot_selection_d1==false;
                 }

            }
            if(i+j==3)
            {
                if(tic_toe[i][j]=='x'||(tic_toe[i][j]=='.'&&dot_selection_d2==false))
                {
                count_n_Dia++;
                if(tic_toe[i][j]=='.')
            dot_selection_d2=true;
                if(count_n_Dia==3)
                {
                    cout<<"-4\n";
                win=true;
                goto X;
                }
                }
                 else if(tic_toe[i][j]=='o'||(tic_toe[i][j]=='.'&&dot_selection_d1==true))
                {
                    count_n_Dia=0;
                    dot_selection_d2=false;
                }
            }
    }
    dot_selection_r=false,dot_selection_c=false;
    count_r=0,count_c=0;
}
X:
if(win)
    cout<<"YES\n";
else
    cout<<"NO\n";
}


}
