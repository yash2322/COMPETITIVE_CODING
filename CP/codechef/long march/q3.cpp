#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main()
{
    FS
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,coun=0;
        cin>>n;
        cin.ignore();
        string s[n];
        vector<vector<long int>>present(n,vector<long int>(5,0));
        FORS(i,0,n)
        {
            cin>>s[i];
            FORS(j,0,s[i].length())
            {
                if(s[i][j]=='a')
                    present[i][0]=1;
                if(s[i][j]=='e')
                    present[i][1]=1;
                if(s[i][j]=='i')
                    present[i][2]=1;
                if(s[i][j]=='o')
                    present[i][3]=1;
                if(s[i][j]=='u')
                    present[i][4]=1;
            }
        }
     /*   FORS(i,0,n)
        {
            FORS(j,0,5)
            cout<<present[i][j];
            cout<<endl;
        }*/

      /*  vector<long int>fulfil(5,0);
        FORS(i,0,n)
        {
            FORS(j,0,5)
            {
                if(present[i][j]==1)
                    fulfil[j]++;
            }
        }*/
        vector<vector<long int>>final_fulfil(n,vector<long int>(5,0));
       /* FORS(i,0,5)
        {
            if(present[0][i]==1)
                final_fulfil[0][i]=fulfil[i]-1;
            else
                final_fulfil[0][i]=fulfil[i];
        }*/




/*   idharich marr jayega main....    ni bachega main idhar*/

      /*  FORS(i,1,n)
        {
            FORS(j,0,5)
            {

                if(present[i][j]==1)
                {
                    if(final_fulfil[i-1][j]>0)
                        final_fulfil[i][j]=final_fulfil[i-1][j]-1;
                    else
                        final_fulfil[i][j]=0;
                }
                else
                    final_fulfil[i][j]=final_fulfil[i-1][j];
            }
        }*/


        FORS(i,0,n)
        {
            FORS(j,0,5)
            cout<<final_fulfil[i][j];
            cout<<endl;
        }

        /*FORS(i,0,5)
        cout<<fulfil[i]<<" ";
        cout<<endl;*/
        FORS(i,0,n)
        {
            int min_found=n-1;
            FORS(j,0,5)
            {
                if(present[i][j]==0)
                {
                    if(min_found>final_fulfil[i][j])
                        min_found=final_fulfil[i][j];
                }
            }
            coun+=min_found;
        }
       /* FORS(i,0,n-1)
        {
            FORS(j,i+1,n)
            {
                if((present[i][0]==0&&present[j][0]==0)||(present[i][1]==0&&present[j][1]==0)||(present[i][2]==0&&present[j][2]==0)||(present[i][3]==0&&present[j][3]==0||(present[i][4]==0&&present[j][4]==0)))
                        continue;
                        else
                            coun++;
            }
        }
        cout<<coun<<endl;


        FORS(i,0,n-1)
        {
            FORS(j,i+1,n)
            {
             string f=s[i]+s[j];
             set<char>unque_;
            FORS(k,0,f.length())
            {
                unque_.insert(f[k]);
            }
            if(unque_.size()==5)
            {
                coun++;
            }
            }
        }*/
    cout<<coun<<endl;

    }
}
