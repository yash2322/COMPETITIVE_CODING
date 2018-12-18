#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
string s1;
int arr[150]={0};
int ascii,count_occurence=0;
cin>>s1;
FORS(i,0,s1.length())
{
    //taking ascii value
 ascii=s1[i];
if(arr[ascii]==0)
    //putting that ascci value index =1;
    arr[ascii]=1;
//checking for the indexes that are one;

}
FORS(i,0,150)
    if(arr[i]==1)
    count_occurence++;

    if(count_occurence%2!=0)
    cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}
