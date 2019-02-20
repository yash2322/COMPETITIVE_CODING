#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;

using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,number,current_min_speed,count_of_cars=1;
        cin>>n;
        vector<long long int> speed;
        FORS(i,0,n)
        {
            cin>>number;
            speed.push_back(number);
        }
        current_min_speed=speed[0];
        FORS(i,1,n)
        {
            if(speed[i]<current_min_speed)
            {
                count_of_cars++;
                current_min_speed=speed[i];
            }
        }
    out(count_of_cars);
    out('\n');
    }

}
