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
long int n,m,x,q,arr[150],ascii;
cin>>n>>m>>x;
vector<pair<long int,long int>> shift_key_index;
map<char,float> char_and_least_distance_to_shift;
map<char,float>::iterator it;
bool shift_key_available=false;
FORS(i,0,150)
    arr[i]=0;
string s[n],To_type;
FORS(i,0,n)
{
    cin>>s[i];
    FORS(j,0,s[i].length())
    {
        ascii=s[i][j];
        arr[ascii]=1;
        arr[ascii-32]=1;
        char_and_least_distance_to_shift.insert(pair<char,int>(s[i][j],100));
        if(s[i][j]=='S')
        {
            shift_key_available=true;
            shift_key_index.push_back(make_pair(i,j));
        }
    }
}
FORS(i,0,shift_key_index.size())
{
    FORS(j,0,n)
    {
        FORS(k,0,s[j].length())
        {
            float value=pow(pow(abs(shift_key_index[i].first-j),2)+pow(abs(shift_key_index[i].second-k),2),0.5);
            it=char_and_least_distance_to_shift.find(s[j][k]);
            if(it!=char_and_least_distance_to_shift.end())
            {
                if(it->second>value)
                    it->second=value;
            }
        }
    }
}
//for(auto a:char_and_least_distance_to_shift)
  //  cout<<a.first<<" "<<a.second<<endl;

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
    if(ascii>=65&&ascii<=90&&!shift_key_available)
    {
        cout<<-1;
        return 0 ;
    }
    if(arr[ascii]!=1)
   {
       cout<<-1;
       return 0 ;
   }
   if(ascii>=65&&ascii<=90&&arr[ascii+32]!=1)
   {
        cout<<-1;
        return 0;
   }
    ch=tolower(ch);
    if(ascii>=65&&ascii<=90)
    {
        it=char_and_least_distance_to_shift.find(ch);
        if(it->second>x)
            times_it_has_used_second_hand++;
    }
}
cout<<times_it_has_used_second_hand;
}
