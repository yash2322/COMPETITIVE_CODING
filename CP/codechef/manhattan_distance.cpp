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
      //vector<int> x,y;
      vector<pair<int,int>> y_x;
     //   vector<pair<int,int>>::iterator itr,itr2,itr3;
      string s[n];
      FORS(j,0,n)
      {
        cin>>s[j];
      }
      FORS(j,0,n)
      {
          FORS(k,0,m)
          {
            if(s[j][k]=='1')
                    {
                        y_x.push_back(make_pair(j,k));
                    }
          }
      }
   /*   FORS(p,0,y_x.size())
      {
            cout<<y_x[p].first<<"-"<<y_x[p].second<<endl;
      }*/
       // cout<<y_x.size()<<endl;
        for(int n=0;n<y_x.size();n++)
        {
            for(m=n+1;m<y_x.size();m++)
            {
              //  cout<<y_x[n].first<<"-"<<y_x[m].first<<endl;
                if(y_x[n].first==y_x[m].first)
                {
                 //   cout<<"inside"<<endl;
                 distance=abs((y_x[n].second)-(y_x[m].second));
                 distances[distance]++;
                }
                else
                {
                   // cout<<"outside"<<endl;
                    distance=abs((y_x[n].second)-(y_x[m].second))+abs((y_x[n].first)-(y_x[m].first));
                    distances[distance]++;
                }



            }
        }
for(int q=1;q<distances.size()-1;q++)
    cout<<distances[q]<<" ";
    cout<<endl;
}
}
