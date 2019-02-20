#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

void matrix_for_lcs(string ,string);

int main()
{
string a,b;
cin>>a>>b;
matrix_for_lcs(a,b);
}
void matrix_for_lcs(string a,string b)
{
    int a_length=a.length();
    int b_length=b.length();
    //cout<<a_length<<" "<<b_length<<endl;
    int matrix[a_length+1][b_length+1];
    int x,y;
    FORS(i,0,a_length+1)
    {
        FORS(j,0,b_length+1)
        {
            if(i==0||j==0)
            {
                matrix[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                matrix[i][j]=matrix[i-1][j-1]+1;
            }
            else
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
                //cout<<max(matrix[i-1][j],matrix[i-1][j-1]);

                y=j;
              // cout<<matrix[i][j]<<" ";
        }
        x=i;
//cout<<endl;
    }
    if(matrix[x][y]!=0)
cout<<matrix[x][y]+1;
else
    cout<<"-1";
}
