#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
using namespace std;


int main() {
    string s;
    
    getline(cin,s);
    cout<<s<<endl;
    int i=0;
    bool x=false;
    while(s[i]!='\0')
    {
        if(s[i]=='+')
        {
x=true;

        }
        i++;
    }
   
    stringstream ss(s);
    char ch;
    int tmp,a,b;
    
    ss>>a>>ch>>b;
   
    if(x==true)
    {
cout<<a+b;
    
    }
    else
       cout<<a-b;
    return 0;
}

