#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,input,min1,counter=0;
cin>>n;
vector<long long int> elements;
FORS(i,0,n)
{
    input=rand()%9000000000+1000000;
    elements.push_back(input);
    cout<<input<<endl;
}
long long int i=0;
sort(elements.begin(),elements.end());
min1=elements[0];
while(elements[i]==min1&&i<elements.size())
{
    //moving to the position where the minimums are over i.e if there is 1,1,1,2,3 then are counter will start from "2" value;
    i++;
}
//cout<<elements.size();
//last index will be having a maximum element; if there are multiple last elements then they will be consecutive;  [1,1,1,2,2,3,5,5]
while(elements[i]!=elements[elements.size()-1]&&i<elements.size())
{
   // cout<<"n"<<endl;
    i++;
    counter++;
}
if(n>2)
    cout<<counter;
else
    cout<<0;



}
