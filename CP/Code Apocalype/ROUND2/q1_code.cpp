#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,l,n;
        cin>>k>>l>>n;
        /*int in = 0;
        int counter = 0;
        for(int i=k;i<=l;i+=(n+in)){
            if(i+n+in<=l){
                counter++;
                in++;
            }
            else{
                break;
            }
        }
        cout<<counter<<endl;
        if(counter%2==0){
            cout<<"Nikhil\n";
        }
        else{
            cout<<"Sahil\n";
        }
    }*/
    long int count1=0;
    while(k<=l)
    {
        if((k+n)>l)
        {
            break;
            count1--;
        }
        k=k+n;
        n++;
        count1++;

    }
    //cout<<count1<<endl;
    if(count1%2==0){
        cout<<"Nikhil\n";
    }
    else
        cout<<"Sahil\n";

}
return 0;
}
