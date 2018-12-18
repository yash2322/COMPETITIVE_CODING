#include<iostream>
using namespace std;


int insertion(int *, int);
int deletion(int *);
int peek(int *);

int front=-1, rear=-1;    //initializing variables
int size = 5;             //setting size or capacity of circular queue

int main()
{
int val, choice, arr[size];
while(1)
    {
cout<<"\n**** Enter choice: ****"  <<endl;
cout<<"1 : Insert"  <<endl;
cout<<"2 : Delete"  <<endl;
cout<<"3 : Peek"  <<endl;
cout<<"4 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
cout<<"Enter value to insert: ";
cin>>val;
insertion(arr, val);
break;                     
case 2:
deletion(arr);
break;                     
case 3:
peek(arr);
break;
case 4:
exit(1);
break;
default:
cout<<"Wrong choice..." <<endl;          
            }
    } 


return 0;    
}

int insertion(int arr[], int val)
{
if( (front==0 && rear==size-1) || (front==rear+1) )     //comparison with (size-1) since index starts from 0
    {
cout<<"Overflow..." <<endl;
return 0;    
    }
else if(front==-1)         //checking if queue is empty
front = rear = 0;    //bringing front and rear to beginning position         
else if(rear==size-1)     //checking if rear is at end position of array
rear = 0;          //bringing rear to beginning position
else
rear++;            //incrementing front variable    

arr[rear] = val;         //inserting in queue
}

int deletion(int arr[])
{
if(front==-1)            //checking if queue is empty
    {
cout<<"Underflow..." <<endl;
return 0;     
    }
int val = arr[front];    //temporarily storing value to be deleted

if(front==rear)          //checking if only 1 element in queue
front = rear = -1;
else if(front==size-1)   //comparison with (size-1) since index starts from 0
front = 0;
else
front++;
cout<<"Value deleted is: " <<val<<endl;
}

int peek(int arr[])
{
int p = front;
if(p==-1)
     {
cout<<"Queue is empty..." <<endl;
return 0;             
     }

cout<<"\n Elements in queue are: " <<endl;
while(p!=rear)
     {
cout<<arr[p] << "  ";
if(p==size-1)      //checking if end of array is reached while traversing

p=0;
			             //bringing varible to beginning position
else
p++;
     }
	   
     
cout<<arr[p];        //printing last element of queue which was skipped in loop
}

