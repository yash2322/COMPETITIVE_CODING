#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,temp;
    cin>>s;a
 //   set<string>
 //long int curr=0;
 long int x=s.length();
 if(s.length()==1)
 {
     cout<<0;
     return 0;
 }
 set<string>all;
        while(s.length()>1)
        {
        for(long int i=0;i<s.length();i++)
        {
            for(long int j=i+1;j<s.length();j++)
            {
                temp=s.substr(0,i+1)+" "+s.substr(j,s.length());
                cout<<temp;
                all.insert(temp);
                temp=s.substr(0,i+1)+" "+s.substr(i+1,(s.length()-j));
                cout<<"         -           "<<temp<<endl;
                all.insert(temp);
            }

        }
       // curr++;
       // if(curr<s.length())
        s=s.substr(1,s.length());
        /*cout<<endl<<" - ";
        cout<<s<<" - "<<endl;
    // cout<<curr<<" "<<s.length()<<" "<<x<<endl;*/
        }
        long int count_=0;
        for(auto x:all)
        {
            //cout<<x<<endl;
        long int left=0,right=x.length()-1;
        bool flag=true;
        cout<<"under_test : "<<x<<endl;
        while(left<=right)
        {
            if(x[left]==' ')
                left++;
            if(x[right]==' ')
                right--;
            if(x[left]!=x[right]&&left<=right)
            {
                flag=false;
                break;
            }
           // cout<<x[left]<<" "<<x[right];
            left++;right--;
        }
        if(flag)
        {
        cout<<x<<endl;
        count_++;
        }

           // cout<<endl<<endl;
        }
        cout<<count_;

}
