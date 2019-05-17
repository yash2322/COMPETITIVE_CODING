#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
   string s;
    int occ=0;
    char c;
    long int arr[150];
    for(long int i=0;i<150;i++)
    {
        arr[i]=0;
    }
    int index;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        index=s[i];
        arr[index]++;
    }

    for(long int i=0;i<150;i++)
    {
       // cout<<arr[i]<<" ";
        if(arr[i]>occ)
        {
            occ=arr[i];
            c=i;
           // cout<<c<<" ";
        }

    }
    cout<<c;
}
