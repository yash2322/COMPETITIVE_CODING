/* YASH PRATP SINGH
    KE037 B58
*/
#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int n,input,l;
    vector<long long int> numbers,left_most;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>input;
        numbers.push_back(input);
        long long int d = (long long int)log10(input);
            input =(long long int)(input / pow(10, d));
        l=input;
        left_most.push_back(l);
    }

    sort(left_most.begin(),left_most.end(),greater<long long int>());
   /*long long int temp=left_most[n-1];
    left_most[n-1]=left_most[n-2];
    left_most[n-2]=temp;*/
    long int temp=left_most[n-1];
    long int i=n-1;
    while(i>0)
    {
        if(left_most[i]!=temp)
            break;
            i--;
    }
    temp=left_most[i];
    left_most[i]=left_most[i+1];
    left_most[i+1]=temp;
    FORS(i,0,n)
    {
        cout<<left_most[i];
    }

}
