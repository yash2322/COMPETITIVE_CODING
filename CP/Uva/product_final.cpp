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
        //cout<<j<<" ";
        if((j==0)&&carry>0)
        {
            arr[storing_index+storing_index_second_add]+=carry;
        }
    }
    storing_index++;
}
//vector<long int> final_arr;
long int i=(first.length()+second.length())+2;
//cout<<endl;
FORS(j,0,i+2)
{

    cout<<arr[j]<<" ";
}
FORS(j,0,i+2)
{

    if(arr[j]>=10)
    {

        arr[j+1]+=arr[j]/10;
         //cout<<"arr[j+1]="<<arr[j+1]<<endl;

        arr[j]=arr[j]%10;
    }
}
cout<<endl;
while(i>0&&arr[i]==0)
    i--;
FORE(j,i+1,0)
{
    cout<<arr[j];
}

}
