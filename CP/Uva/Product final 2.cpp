#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
#define FORE(i,a,b) for(int i=a-1;i>=0;i--)
#define TESTC long int t;\
cin>>t;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
string first,second;
while(cin>>first>>second){
long int arr[700],num_s,num_f,carry=0,starting_index=0,value;
memset(arr,0,sizeof(arr));

FORE(i,second.length(),0)      //  x*y  |  loop for y digits
{
    num_s=second[i]-'0';
     long int shifts=0;
    FORE(j,first.length(),0)   // loop for x
    {
        num_f=first[j]-'0';
        value=num_s*num_f+carry;
        carry=value/10;
        if(j!=0)
        arr[starting_index+shifts]+=value%10;   //    1 2 3
                                              //    1 2 3 -
        if(j==0)                       //for front most digit writing full number  ex 89 , 9 , 9 ,9 , 0
        {
            arr[starting_index+shifts]+=value;
        }
        shifts++;
    }
    carry=0;
    starting_index++;
}
//vector<long int> final_arr;
long int i=(first.length()+second.length())+2;
FORS(j,0,i+2)
{
    if(arr[j]>=10)        //transferring carry;  in final array
    {
        arr[j+1]+=arr[j]/10;
        arr[j]=arr[j]%10;
    }
}
while(i>0&&arr[i]==0)  //removing leading zeros
    i--;
FORE(j,i+1,0)   //printing
{

    cout<<arr[j];
}
cout<<endl;
}
}

