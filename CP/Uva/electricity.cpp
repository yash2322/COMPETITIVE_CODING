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
    long int t;

    while(cin>>t)
    {
        long int d,m,y,c;
        if(t==0)
            return 0;
        long int count_=0,sum=0;
        FORS(i,0,t)
        {
           if(i==0)
           {
               cin>>d>>m>>y>>c;
           }

           long int d1,m1,y1,c1;
           if(i>0)
           {
                cin>>d1>>m1>>y1>>c1;
                if(m==2)
                {  //handling for feb
                    if(d<28&&(d1-d)==1&&m1==m&&y1==y)
                        {  //if last day was less than 28 ,next should be 28
                            count_++;
                            sum+=c1-c;
                        }
                        else if(d==28)
                        {   //if last day was 28
                            if(y%400==0||(y%4==0&&y%100!=0))
                            {  //if year was leap than next should be 29
                                if(d1==29&&m1==m&&y1==y)
                                {
                                    count_++;
                                    sum+=c1-c;
                                }
                            }
                            else
                            {
                                if(d1==1&&m1==3&&y1==y)
                                {  //else next should be 1;
                                   // cout<<"yes\n";
                                    count_++;
                                    sum+=c1-c;
                                }
                            }
                        }
                        else if(d==29&&m1==3&&d1==1&&y1==y)
                        {
                            count_++;
                            sum+=c1-c;
                        }

                }
                else
                {  //if month is not 2
                 if((d1-d)==1&&d<30&&m1==m&&y1==y)
                 {  //if last day was less than 30 , next should be 30
                     count_++;
                     sum+=c1-c;
                 }
                 else if(d==31&&d1==1&&m1==(m+1)&&y1==y)
                 {  // if it was 31, next should be 1
                     count_++;
                     sum+=c1-c;
                 }
                 else if(d==31&&d1==1&&m==12&&m1==1&&y1==(y+1))
                 {  //special case for december
                     count_++;
                     sum+=c1-c;
                 }
                 else if(d==30)
                 {
                     if(m<=6)
                     { // if month is less than equal to 6;
                         if(m%2!=0&&d1==31&&m1==m&&y1==y)
                         {
                             count_++;
                             sum+=c1-c;
                         }
                         else if(m%2==0&&d1==1&&m1==(m+1)&&y1==y)
                         {
                             count_++;
                             sum+=c1-c;
                         }
                     }
                     else if(m>7)
                     {
                         if(m%2==0&&d1==31&&m1==m&&y1==y)
                         {
                             count_++;
                             sum+=c1-c;
                         }
                         else if(m%2!=0&&d1==1&&m1==(m+1)&&y1==y)
                         {
                             count_++;
                             sum+=c1-c;
                         }
                     }
                     else if(m==7)
                     {
                         if(d1==31&&m1==m&&y1==y)
                         {
                             count_++;
                             sum+=c1-c;
                         }
                     }

                 }
                }
           }
           if(i>0)
           {
                d=d1;m=m1;y=y1;c=c1;
           }


        }
        if(t>1)
    cout<<count_<<" "<<sum<<endl;
    else
        cout<<1<<" "<<c<<endl;
    }
}
