#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        long int hash=0;
        for(int i=0;i<p.length();i++){
            //cout<<p[i]<<" ";
            hash=hash+int(p[i]-'a'+1);
        }
        //cout<<endl;
        //cout<<"h="<<hash<<endl;
        /*for(int i=0;i<s.length()-p.length()+1;i++){
            long int sum=0;
            string temp="";
            for(int j=0;j<p.length();j++){
            temp+=s[i+j];
            sum=sum+('a'-s[i+j]+1);    
            }
            if(sum==hash&&temp.length()==p.length())
            cout<<temp<<" "<<i<<endl;
        }*/
        int x;
        long int sum=0;
        long int current_pointer=0;
        vector<int>indexes;
        for(int i=0;i<s.length();i++){
            if(i>=p.length()){
                sum=sum-(s[current_pointer]-'a'+1)+(s[i]-'a'+1);
                if(sum==hash)
                indexes.push_back(current_pointer+1);
                current_pointer++;
            }
            else
            sum+=(s[i]-'a'+1);
            if(i==p.length()-1){
                if(sum==hash)
                indexes.push_back(0);
            }
            //cout<<sum<<endl;
            //cin>>x;
        }
        //cout<<indexes.size()<<endl;
        for(int i=0;i<indexes.size();i++)
        {
            for(int j=indexes[i];j<indexes[i]+p.length();j++)
            cout<<s[j];
            cout<<" "<<indexes[i]<<endl;
        }
        cout<<endl;
    }
}