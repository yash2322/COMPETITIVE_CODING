#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
using namespace std;

int main()
{
long int n,m,input,button_pushed_temp;

cin>>n>>m;
vector<int> pushed_button,which_button_switched_off_this_index(n+1,0);
FORS(i,0,m)
{
cin>>input;
pushed_button.push_back(input);
}
FORS(i,0,m)
{
button_pushed_temp=pushed_button[i];
    while(button_pushed_temp<=n)
    {
        if(which_button_switched_off_this_index[button_pushed_temp]==0)
        {
         which_button_switched_off_this_index[button_pushed_temp]=pushed_button[i];
        }
        button_pushed_temp++;
    }
}
FORS(i,1,n+1)
cout<<which_button_switched_off_this_index[i]<<" ";
}
