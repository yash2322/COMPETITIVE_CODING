char first(string s, int i=0)
 {
     if (s[i] == '\0')
         return 0;
     if (isupper(s[i]))
         return s[i];

     return first(s, i+1);
}

int count(string s)
{
 int n;
 n=s.length();
 int c=0;
 char q = first(s);
 for(int i=0;i<n;i++)
 {        if(q==s[i])
     c++;    }
 return c;
  }

int main() {


   string s;
    cin>>s;
    cout<<count(s);

    return 0;
}
