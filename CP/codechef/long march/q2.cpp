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
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        long long int d,curr_min,int_value,cou_push=0;
        cin>>s;
        cin>>d;
        cin.ignore();
        vector<long int>numbers;
        FORE(i,s.length(),0)
        {
            int_value=s[i]-'0';
            if(i==s.length()-1)
            {
                if(int_value<=d)
                {
                    curr_min=int_value;
                    numbers.push_back(int_value);
                }
                else
                {
                    curr_min=d;
                    cou_push++;
                }
            }
            else
            {
                if(int_value<=curr_min)
                {
                    curr_min=int_value;
                    numbers.push_back(int_value);
                }
                else
                {
                    cou_push++;
                }
            }
        }
        FORE(i,numbers.size(),0)
        {
            cout<<numbers[i];
        }
        while(cou_push--)
            cout<<d;
        cout<<endl;
        /*string s,fina="";
        int d,curr_,index,min_=INT_MAX;
        cin>>s;
        cin>>d;
        cin.ignore();
        vector<long int>numbers;
        FORS(i,0,s.length())
        {
            curr_=s[i]-'0';
            if(curr_<min_)
            {
             min_=curr_;
             index=i;
            }
            numbers.push_back(curr_);
        }
        if(min_>d)
            FORS(i,0,numbers.size())
                cout<<d;
        else
        {
            sort(numbers.begin()+index,numbers.end());
            FORS(i,index,numbers.size())
            {
                if(numbers[i]<=d)
                    cout<<numbers[i];
                    else
                    index++;
            }

            while(index--)
                    cout<<d;
        }
        cout<<endl;
*/

}
}
