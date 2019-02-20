#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

typedef unsigned long long int ull;
typedef long long int sll;

using namespace std;

//void insert_in_sorted_order(long long int a[],long long int index,set<long long int> &temp_array)
int main()
{
long long n;
cin>>n;
long long int max_snack=INT_MIN,arrays[n];
vector<long long int>availaible(n,0);

FORS(i,0,n)
{
    cin>>arrays[i];
    if(arrays[i]>max_snack)
    {
    max_snack=arrays[i];
    }

}


//sort(temp_array.begin(),temp_array.begin()+5);
long long required_snack=max_snack,day=0;

FORS(i,0,n)
{
    // -1 for availaible;
    availaible[arrays[i]]=-1;

while(availaible[required_snack]==-1&&required_snack>0)
{
    cout<<required_snack<<" ";
    required_snack--;
}
cout<<endl;
}
}
