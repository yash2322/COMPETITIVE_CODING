#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
  int t;
  cin>>t;
  FORS(i,0,t)
  {
      int n,m,distance;
      cin>>n>>m;
      vector<int> distances(n+m,0);
      string s[n];
      FORS(j,0,n)
      {
        cin>>s[j];
      }
      int a=0;
      while(a<n)
      {
        for(int b=0;b<m;b++)
        {
            if(s[a][b]=='0')
                continue;
            for(int c=a;c<n;c++)
            {
                if(a==c)
                {
                    for(int d=b+1;d<m;d++)
                    {
                       // cout<<s[a][b]<<"-"<<s[c][d]<<endl;
                        if(s[a][b]==s[c][d])
                        {
                             distance=abs(b-d);
                            distances[distance]++;
                        }


                    }

                }
                else
                    for(int d=0;d<m;d++)
                {
                    if(s[a][b]==s[c][d])
                    {
                         distance=abs(c-a)+abs(d-b);
                        distances[distance]++;
                    }

                }

            }
        }
        a++;
      }

      FORS(l,1,distances.size()-1)
        cout<<distances[l]<<" ";
        cout<<endl;
      }


  }

