/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            ar.push_back(a[i]);
        }
    }
    int x=sizeof(ar)/sizeof(ar[0]);
     for(int i=0;i<x;i++)
    cout<<ar[x]<<" ";
}
*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int *j;
    for(int i=0;i<n;i++)
    {
        j=max_element(a+i+1,a+n-1);
    //if(a[i]>*j)
    //cout<<a[i]<<" ";
cout<<a[i]<<" "<<*j<<endl;     
    }
    
     
   
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int *j;
    for(int i=0;i<n-1;i++)
    {
        j=max_element(a+i+1,a+n-1);
    if(a[i]>*j)
    cout<<a[i]<<" ";
     
    }
    cout<<a[n-1];
     
   
}*/


//finding list of elements which are greater than the elements on there right side                






#include<bits/stdc++.h>
using namespace std;
int main()
{
    // std::ios::sync_with_stdio(false);
    long int n,i;
    cin>>n;
    long int ar[n],max_arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&ar[i]);
    int c=-1;
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(ar[i]>=c){
            c=ar[i];
            v.push_back(ar[i]);
        }
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}
