#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct student{
	char name[10];
	int roll_no,reg_number;	
};

int main(){

struct student s[5];
int n;
cout<<"enter the data of number of students you want to enter\n";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<"\nenter details of "<<i+1<<" student\n";
	cout<<"\n enter name :";
	gets(s[i].name);
	cout<<"\n enter roll_number :";
	cin>>s[i].roll_no;
	cout<<"\n enter reg_number :";
	cin>>s[i].reg_number;
}
cout<<"\ndetails for student are\n";
for(int i=0;i<n;i++)
{
	cout<<"\n name :";
	cout<<s[i].name;
	cout<<"\n roll_number :";
	cout<<s[i].roll_no;
	cout<<"\n reg_number :";
	cout<<s[i].reg_number;
}
}
