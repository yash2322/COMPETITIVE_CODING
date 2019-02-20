#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
#define FORE(i,a,b) for(int i=a-1;i>=0;i--)
#define TESTC long int t;\
cin>>t;
using namespace std;
int main()
{
long int arr[100000],num_s,num_f,carry=0,storing_index=0,value;
memset(arr,0,sizeof(arr));
string first,second;
cin>>first>>second;
FORE(i,second.length(),0)
{
    num_s=second[i]-'0';

     long int storing_index_second_add=0;
    FORE(j,first.length(),0)
    {
        num_f=first[j]-'0';
        value=num_s*num_f+carry;
        carry=value/10;
        arr[storing_index+storing_index_second_add]+=value%10;
        storing_index_second_add++;
    }
    storing_index++;
}
 FORS(i,0,sizeof(arr))
    {   cout<<"x";
        if(arr[i]>10)
        {
            arr[i+1]+=arr[i]/10;
            arr[i]=arr[i]%10;
        }
    }
    long int i=sizeof(arr)-1;
    while(i>0&&arr[i]==0)
    {
    i--;
    }
while(i>=0)
{
    cout<<arr[i];
    i--;
}

}
