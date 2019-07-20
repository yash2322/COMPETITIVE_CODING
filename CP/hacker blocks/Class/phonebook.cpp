#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
class node{
    public:
    char data;
    bool isterminal;
    unordered_map<char,node*>children;
    node(char data,bool isterminal){
        this->data=data;
        this->isterminal=isterminal;
    }
};
bool check(node *root){

}
bool search(node *root,string s){
node *temp=root;
FORS(i,0,s.length()){
    char ch=s[i];
    if(temp->children.find(ch)==temp->children.end()){
        return false;
    }
    else{
        temp=temp->children[ch];
    }
    return temp->isterminal;
}
}
bool prefix(node *root,string s){
node *temp=root;
FORS(i,0,s.length()){
    char ch=s[i];
    if(temp->children.find(ch)==temp->children.end()){
        return false;
    }
    else{
        temp=temp->children[ch];
    }
    return temp->isterminal;
}
}

bool insert(node *root,string name){
    node *temp=root;
    FORS(i,0,name.length()){
        char ch=name[i];
        if(temp->children.find(ch)!=temp->children.end()){
            temp=temp->children[ch];
        }
        else{
              temp->children[ch]=new node(ch,true);
             temp=temp->children[ch];
        }
    }
}
int main(){
 ll n;
 cout<<"Enter number of names you want to save\n";
 cin>>n;
 string s;
 cin>>s;
}
