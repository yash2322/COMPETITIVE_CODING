#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

typedef unsigned long long int ull;
typedef long long int sll;

using namespace std;

void insert_in_sorted_order(long long int a[],long long int index,set<long long int> &temp_array)
{
    /*if(a[index]<a[index-1])
    {

    temp_array.pop_back();
    temp_array.push_back(a[index]);
    temp_array.push_back(a[index-1]);
    }
    else
        temp_array.push_back(a[index]);

*/
temp_array.insert(a[index]);
}
int main()
{
long long n;
cin>>n;
long long int max_snack=INT_MIN,arrays[n];
FORS(i,0,n)
{
    cin>>arrays[i];
    if(arrays[i]>max_snack)
    {
    max_snack=arrays[i];
    }

}
//vector<int> temp_array(arrays,arrays+n);
set<long long int> temp_array;
set<long long int>::iterator itr;

//sort(temp_array.begin(),temp_array.begin()+5);
ull required_snack=max_snack,day=0;

FORS(i,0,n)
{
  //  if(i>0)
    //{
    insert_in_sorted_order(arrays,i,temp_array);
    //}
    //else
      //  temp_array.push_back(arrays[i]);

//sort(temp_array.begin(),temp_array.begin()+i);
/*FORS(i,0,temp_array.size())
{

    cout<<temp_array[i]<<" ";
}
cout<<endl;*/

/*for(itr=temp_array.begin();itr!=temp_array.end();itr++)
{
   // cout<<*itr<<" ";
}
cout<<endl;*/
/*FORE(j,i+1,0)
{
    if(required_snack==temp_array[j])
    {
       cout<<required_snack<<" ";
        arrays[j]=-1;
        //days++;
        required_snack--;

    }

}*/
itr=find(temp_array.begin(),temp_array.end(),required_snack);
//cout<<*itr<<"-";
if(itr!=temp_array.end())
{

    while(*itr==required_snack&&*itr>0)
    {
    cout<<required_snack<<" ";
     required_snack--;

     itr--;
    }

}
if(required_snack==1)
{
    cout<<required_snack;
}
 cout<<endl;
}

}
