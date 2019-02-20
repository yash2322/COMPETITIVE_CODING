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
    while(true)
    {
long int row,colums,last,number=0;
cin>>row>>colums>>last;
if(row==0&&colums==0&&last==0)
    return 0;
if(row%2!=0)
{
    if(colums%2!=0)
    {
        number+=((row-8+1)/2)*((colums-8+1)/2);
        number+=((row-8+1)/2)*((colums-8+1)/2);
    }
    else
    {
        number+=((row-8+1)/2)*(((colums-8+1)/2)+1);
        number+=((row-8+1)/2)*((colums-8+1)/2);
    }
}
else
{
    if(colums%2!=0)
    {
        number+=(row-8+1)*(colums-8+1)/2;
    }
    else
    {
        if(last==0)
        {
            number+=((row-8+1)/2)*(((colums-8+1)/2)+1);
            number+=(((row-8+1)/2)+1)*(((colums-8+1)/2));
        }
        else
        {
            number+=((row-8+1)/2)*(((colums-8+1)/2));
            number+=(((row-8+1)/2)+1)*(((colums-8+1)/2)+1);
        }
    }
}
cout<<number<<endl;
}
}
