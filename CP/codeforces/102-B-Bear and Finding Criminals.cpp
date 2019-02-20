#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,limak_live,input,pakdunga=0;
cin>>n>>limak_live;
vector<int> criminals,overlap_left,overlap_right;
FORS(i,0,n)
{
    cin>>input;
    criminals.push_back(input);
}
int number_of_elements_on_right=n-limak_live,number_of_elements_on_left=limak_live-1,overlapping_elements;
//checking how many elements at a same distance.   which side of limak is having less elements.
number_of_elements_on_left>number_of_elements_on_right?overlapping_elements=number_of_elements_on_right:overlapping_elements=number_of_elements_on_left;
int temp=limak_live-1,count_=overlapping_elements;
while(temp>=0&&count_>0)
{// assigning the elements of left side that can have same distance as in right side
    overlap_left.push_back(criminals[temp-1]);
    temp--;
    count_--;
     criminals[temp]=0;
}
temp=limak_live,count_=overlapping_elements;
while(temp<criminals.size()&&count_>0)
{
    overlap_right.push_back(criminals[temp]);
    temp++;
    count_--;
    criminals[temp-1]=0;
}
FORS(i,0,overlap_left.size())
{  //checking for elements both having 1;
    if((overlap_left[i]==overlap_right[i])&&overlap_left[i]==1)
        pakdunga+=2;
}
FORS(i,0,n)
{  //checking the unique distance elements having 1;
    if(criminals[i]==1)
        pakdunga++;
}
cout<<pakdunga;
}
