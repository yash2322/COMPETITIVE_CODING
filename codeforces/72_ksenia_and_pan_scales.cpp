#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
string s,weight_to_put,final_left,final_right;
cin>>s>>weight_to_put;
int count_left,count_right=0,diffrence,count_weight_to_put;
int i=0;
while(true)
{
    if(s[i]=='|')
        break;
    i++;
}
count_left=i;
i=i+1;
while(i<s.length())
{
    i++;
    count_right++;
}
i=0;
final_left=s.substr(0,count_left);
final_right=s.substr(count_left+1,s.length());
count_weight_to_put=weight_to_put.length();
if(((weight_to_put.length())+count_left+count_right)%2!=0)
    cout<<"Impossible\n";
else
    if(abs(count_left-count_right)>weight_to_put.length())
        cout<<"Impossible\n";
    else
    {
        int index_of_weight_to_put=0;
    while(count_left<count_right)
        {
        final_left=final_left+weight_to_put[index_of_weight_to_put];
        index_of_weight_to_put++;
        count_left++;
        count_weight_to_put--;
        }
        while(count_left>count_right)
        {
            final_right=final_right+weight_to_put[index_of_weight_to_put];
            index_of_weight_to_put++;
            count_right++;
            count_weight_to_put--;
        }

        while(count_weight_to_put>0)
        {
            final_left=final_left+weight_to_put[index_of_weight_to_put];
            index_of_weight_to_put++;
            final_right=final_right+weight_to_put[index_of_weight_to_put];
            index_of_weight_to_put++;
            count_weight_to_put-=2;
        }
        cout<<final_left<<"|"<<final_right<<endl;
    }
//cout<<count_left<<" "<<count_right;
}
