
#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

using namespace std;
void breadthFirstSearch(long long int x, long long int num,set<long long int> &ar)
{

    queue<int > q;
    q.push(num);
    while (!q.empty())
    {
        num = q.front();
        q.pop();
        if (num <= x)
        {
            //cout<<num<<" ";
                ar.insert(num);
            int last_dig = num % 10;
            if (last_dig == 0)
                q.push((num*10) + (last_dig+1));
            else if (last_dig == 9)
                q.push( (num*10) + (last_dig-1) );
            else{
                q.push((num*10) + (last_dig-1));
                q.push((num*10) + (last_dig+1));
            }
            }
            }
            }



void jumping_numbers(long long int x,set<long long int> &ar)
{
    cout<<0<<" ";
    for (long long int i=1; i<=9 && i<=x; i++){
        breadthFirstSearch(x, i,ar);
    }
    for(auto p:ar)
        cout<<p<<" ";
    cout<<endl;

}


int main()
{
  long long int numbers,t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        set<long long int> ar;
        cin>>numbers;
    jumping_numbers(numbers,ar);
   // cout<<endl;
    }
    return 0;
}

