#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long i=a;i<b;i++)
#define FORE(i,a,b) for(long long i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int N,Q,input,L,R,TEMP;
    cin>>N>>Q;
    vector<long long int> elements;
    FORS(i,0,N)
    {
        cin>>input;
        elements.push_back(input);
    }
    FORS(i,0,Q)
    {
        vector<long long int> changing_the_array(elements);
        cin>>L>>R;
        L--;
        R--;
       while(L<R)
       {
        TEMP=changing_the_array[L];
        changing_the_array[L]=changing_the_array[R];
        changing_the_array[R]=TEMP;
        L++;
        R--;
       }
       /*for(auto a:changing_the_array)
       cout<<a<<" ";
       cout<<endl;*/
       long long int current_sum=0,max_so_far=INT_MIN;
       for(auto a:changing_the_array)
       {
           current_sum=current_sum+a;
           if(max_so_far<current_sum)
            max_so_far=current_sum;
           if(current_sum<0)
            current_sum=0;
       }
       cout<<max_so_far<<endl;
    }
}
