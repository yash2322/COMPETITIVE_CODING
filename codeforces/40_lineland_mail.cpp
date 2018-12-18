#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int n,x,max1,min1;
    bool minimum_found=false,maximum_found=false;

    cin>>n;
    vector<int> myvector;
    vector<int>::iterator it,it2,first,last;

    FORS(i,0,n)
    {
        cin>>x;
        myvector.push_back(x);
    }
   //putting values of myvector in another vector which will be sorted ;
    vector<int> vector_sorted(myvector.begin(),myvector.end());
    sort(vector_sorted.begin(),vector_sorted.end());

  //for every value in my vector do this
   for(it=myvector.begin();it!=myvector.end();it++)
    {
    //find the location of current "it" i.e iterator in the sported vector;
    it2=find(vector_sorted.begin(),vector_sorted.end(),*it);
    //now check if it is present at the starting or the end;
    first=vector_sorted.begin();
    last=vector_sorted.end()-1;


    if(*it2==*first)
    {
        minimum_found=true;maximum_found=true;
         //if it is at the first position then minimum position vector will be just next to it;
        //min1=vector_sorted[it2+1]-vector_sorted[it2];
        min1=*(it2+1)-*it2;
        max1=*last-*first;

    }

        else if(*it2==*last)
        {//if at last position
             minimum_found=true;maximum_found=true;
             min1=*it2-*(it2-1);
             max1=*last-*first;
        }

    if((*it2-*(it2-1))<=(*(it2+1)-*it2)&&minimum_found==false)
    {
        //when not at the last nor at the first then we will check distance just to its left and just to right. whichever will be smaller will be the minimum
        min1=*it2-*(it2-1);
    }
    else if((*it2-*(it2-1))>(*(it2+1)-*it2)&&minimum_found==false)
        min1=*(it2+1)-*it2;

        //maximum distance will be the diffrence between the position of vector and two extreme position in sorted vector
if(maximum_found==false&&(*it2-*first)<=(*last-*it2))
    max1=*last-*it2;
else if(maximum_found==false&&(*it2-*first)>(*last-*it2))
{
     max1=*it2-*first;
}

minimum_found=false;
maximum_found=false;
cout<<min1<<" "<<max1<<endl;
    }


}
