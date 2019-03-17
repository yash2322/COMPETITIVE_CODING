#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
            long long int n,input,value;
            string s1="",s2="",s3="";
            cin>>n;
            vector<long long int>xyz;
            FORS(i,0,n)
            {
                cin>>input;
                xyz.push_back(input);
            }
            sort(xyz.begin(),xyz.end());
            if(n%2==0)
            {
                vector<long long int> v1,v2;
                FORS(i,0,n-1)
                {
                    v1.push_back(xyz[i]);
                    i=i+1;
                }
                FORS(i,1,n)
                {
                    v2.push_back(xyz[i]);
                    i=i+1;
                }
                FORE(i,v1.size(),1)
                {
                    s1=s1+to_string(abs(v1[i]-v1[i-1]));
                }
                FORS(i,0,v2.size()-1)
                {
                    s2=s2+to_string(abs(v2[i]-v2[i+1]));
                }
                s3=to_string(abs(v1[v1.size()-1]-v2[v2.size()-1]));

            }
            else
            {
                vector<long long int> v1,v2;
                v1.push_back(xyz[0]);
                v2.push_back(xyz[0]);
                FORS(i,1,n-1)
                {
                    v1.push_back(xyz[i]);
                    i=i+1;
                }
                FORS(i,2,n)
                {
                    v2.push_back(xyz[i]);
                    i=i+1;
                }
                 FORE(i,v1.size(),1)
                {
                    s1=s1+to_string(abs(v1[i]-v1[i-1]));
                }

                FORS(i,0,v2.size()-1)
                {

                    s2=s2+to_string(abs(v2[i]-v2[i+1]));
                }
                s3=to_string(abs(v1[v1.size()-1]-v2[v2.size()-1]));

            }
            bool c=true;
            FORS(i,0,s1.length())
            {
                if(s1[i]!=s2[s2.length()-i-1])
                    c=false;
            }
            FORS(i,0,s3.length())
            {
                if(s3[i]!=s3[s3.length()-i-1])
                    c=false;
            }
                if(c&&n>1)
                cout<<s2<<s3<<s1<<endl;
                else if(n==1)
                cout<<xyz[0]<<endl;
                else
                    cout<<"Key combination cannot be cracked\n";
            }

}
