#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
bool my_sorting(const pair<long int,long int>&a,const pair<long int,long int>&b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}
int main()
{
long int n,m,x,q,arr[150],shift_keys=0;
cin>>n>>m>>x;
string s[n],To_type;
cin.ignore();
vector<pair<long int,long int>> doori_for_shift_key;
vector<vector<float>> every_key_least_distance_to_shift(n,vector<float>(m,100));
FORS(i,0,150)
{
    arr[i]=0;
}
int ascii;
FORS(i,0,n){
    cin>>s[i];
    FORS(j,0,s[i].length())
    {
    ascii=s[i][j];
    arr[ascii]=1;
    arr[ascii-32]=1;
        if(s[i][j]=='S')
        {
             shift_keys++;
             doori_for_shift_key.push_back(make_pair(i,j));
        }
    }
}
FORS(i,0,doori_for_shift_key.size())
{
FORS(j,0,n)
{
    FORS(k,0,m)
    {
        float value=pow(pow(abs(doori_for_shift_key[i].first-j),2)+pow(abs(doori_for_shift_key[i].second-k),2),0.5);
        if(value<every_key_least_distance_to_shift[j][k])
            every_key_least_distance_to_shift[j][k]=value;
    }
}
}
FORS(i,0,n)
{
  FORS(j,0,m)
{
    cout<<every_key_least_distance_to_shift[i][j]<<" ";
}
cout<<endl;
}

cin>>q;
cin.ignore();
cin>>To_type;
bool can_type=true;
long int times_it_has_used_second_hand=0;
char ch;
FORS(i,0,To_type.length())
{
    int ascii=To_type[i];
    ch=To_type[i];
    if(ascii>=65&&ascii<=90&&shift_keys==0)
    {
        cout<<-1;
        return 0 ;
    }
   if(arr[ascii]!=1)
   {
       cout<<-1;
       return 0 ;
   }

    FORS(j,0,n)
    {
        FORS(k,0,m)
        {
            if(s[j][k]==tolower(ch)&&ascii>=65&&ascii<=90)
            {
                if(every_key_least_distance_to_shift[j][k]>x)
                    times_it_has_used_second_hand++;
            }

        }
    }
}
cout<<times_it_has_used_second_hand;
}
