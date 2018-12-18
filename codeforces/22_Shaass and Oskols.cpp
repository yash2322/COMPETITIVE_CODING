#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,bird,m,row,bird_number_from_left,birds_on_left,birds_on_right;
cin>>n;
int birds_initial_settings[n+1]

FORS(i,1,n+1)
{

    //initial configuration of birds in each row
    cin>>birds_initial_sittings[i];
}
cin>>m;
FORS(i,0,m)
{
    //cout<<"m:"<<m<<endl;
    //considering each row and bird number from the left
    cin>>row>>bird_number_from_left;
    //bird on the left side of dead birds
    birds_on_left=bird_number_from_left-1;
    cout<<"birds_on_left:"<<birds_on_left<<endl;
    //birds moving on upper row
    birds_initial_sittings[row-1]=birds_initial_sittings[row-1]+birds_on_left;
   cout<<"bird on upper row:"<<birds_initial_sittings[row-1]<<" row:"<<row-1<<endl;

   //birds on right side is eqaul to initial birds on the row - left bird killed
    birds_on_right=birds_initial_sittings[row]-bird_number_from_left;
    //updating lower row
    cout<<"birds_on_right:"<<birds_on_right<<endl;
    birds_initial_sittings[row+1]=birds_initial_sittings[row+1]+birds_on_right;
cout<<"bird on lower row:"<<birds_initial_sittings[row+1]<<" row:"<<row+1<<endl;
}
FORS(i,1,n+1)
{
    cout<<birds_initial_sittings[i]<<endl;

}
}
