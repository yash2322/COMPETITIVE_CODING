#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
   int i=0;
    bool y=false;
   int x=stoi(s);
    
    while(s[i]!='\0')
    {
        if(s[i]=='P')
        {
            y=true;
        }
        i++;
    }
    if(y==true)
    {
        if(x==12)
        {
            s.resize(8);
            return s;
            
        }
        else
        {
        x=x+12;
        string s1=to_string(x);
        s[0]=s1[0];
        s[1]=s1[1];
        s.resize(8);
        return s;
        }
    }
    else
    {
        if(x==12)
        {
            string s2;
            s2[0]='0';
            s2[1]='0';
            s[0]=s2[0];
        s[1]=s2[1];
           s.resize(8);
            return s;
            
        }
        else 
            s[8]='\0';
        s[9]='\0';
        s.resize(8);
            return s;
            
    }
    
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

