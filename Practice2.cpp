#include <iostream>
using namespace std;

//Refer to the document for variable reference



void display(int p[],int n){
    cout<<"Here is your array\n";
    for(int i =0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n";
}

void insert_end(int **p,int n){

    cout<<"Enter the element you want to insert\n";
    int elem;
    cin>>elem;

    (*p)[n-1] = elem;

}
void insert_beg(int **p,int n){

    cout<<"Enter the element you want to insert\n";
    int elem;
    cin>>elem;

    int *ptr = new int [n];
    for (int i=0;i<n-1;i++){
        ptr[i+1] = (*p)[i];
    }

    ptr[0] = elem;
    (*p) = ptr;
}

void insert_mid(int **p,int n){
    cout<<"After which element do you want to insert an element?\n";
    int elem,j,i,new_elem;
    cin>>elem;
    cout<<"What do you want to insert?\n";
    cin>>new_elem;
    int *ptr = new int [n+1];
    for ( i=0;i<n;i++){
        if ((*p)[i]==elem){
            //do operation and return
            for ( j=0;j<=i;j++){
                ptr[j] = (*p)[j];
            }
            ptr[j] = new_elem;
            for(int k=j;k<n;k++){
                ptr[k+1] = (*p)[k];
            }
        (*p) = ptr;
        return;
        }

    }
    if(i==n){
        cout<<"The element doesn't exist.\n";
    }

}

void delete_elem(int **p,int n){
    cout<<"Enter the element you want to delete\n";
    int elem;
    cin>>elem;
    int i;

    for(i=0;i<n;i++){
        if(elem == (*p)[i]){
            for(int j=i+1;j<n;j++){
                (*p)[j-1] = (*p)[j];
            }

            return ;
        }
    }
    if(i==n){
        cout<<elem<<" is not present in the array\n";
        return ;
    }

}


void search_binary(int *p,int n){
    int temp;
    cout<<"This operations needs array to be sorted\nPerforming sorting operation for you\n Have patience :)\n";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if (p[j]>p[j+1]){
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    cout<<"Successfully Sorted\n";
    int key;
    cout<<"Which element do you want to search for?\n";
    cin>>key;
    int f,l,m;
    f=0;
    l=n-1;
    m=(f+l)/2;

    while(f<=l){
    if(p[m]==key){
        cout<<"Element is present at "<<m+1<<" key\n";
        break;
    }
    else if(key<p[m]){
        l=m-1;
    }
    else if(key>p[m]){
        f=m+1;
    }
    m=(f+l)/2;
    }
    if(f>l){
        cout<<"Element is not present in array!\n";
    }
}
main()
{
    int *p = NULL;//Pointer to the array
    int choice;//Choice for main switch case
    int n;//Size of array



    while(true){
    cout<<"Enter your choice\n";
    cout<<"1. Create a dynamic array\n";
    cout<<"2. Display array\n";
    cout<<"3. Insert an element at the end\n";
    cout<<"4. Insert an element at the beginning\n";
    cout<<"5. Insert an element in the middle\n";
    cout<<"6. Delete an element\n";
    cout<<"7. Exit\n";
    cout<<"8. Binary Search on the array\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the size\n";
            cin>>n;
            p=new int[n];
            cout<<"Array of size "<<n<<" created\n";
            cout<<"Enter the elements\n";

            for(int i=0;i<n;i++){
                cin>>p[i];
            }
            cout<<"Elements successfully inserted\n";
            display(p,n);
            break;
        case 2:
            display(p,n);
            break;
        case 3:
            n=n+1;
            cout<<n;
            insert_end(&p,n);
            display(p,n);
            break;
        case 4:
            n=n+1;
            insert_beg(&p,n);
            display(p,n);
            break;
        case 5:
            insert_mid(&p,n);
            n=n+1;
            display(p,n);
            break;
        case 6:
            delete_elem(&p,n);
            n=n-1;
            display(p,n);
            break;
        case 7:
            delete [] p;
            p=NULL;
            return 1;
        case 8:
            search_binary(p,n);
            break;
        default:
            cout<<"Invalid Choice\n Try again\n";


    }
    }

}

//main(){

/*int n;
cout<<"Enter the size\n";
cin>>n;
int *x = new int [n];

for (int i=0;i<n;i++){
    cin>>x[i];
}

int min_elem;
int min_index;
cout<<"Provide me the k\n";
int iter;
cin>>iter;
for(int k=0;k<iter;k++){

min_elem = x[0];
min_index = 0;

for (int i=0;i<n;i++){
    if(x[i]<min_elem){
        min_elem = x[i];
        min_index = i;
    }
}
if(k!=iter-1){
for(int i=min_index;i<n;i++){
    x[i]=x[i+1];
}

n=n-1;
}

cout<<"K-th minimum element: "<<min_elem<<endl;
*/

/*
int n;
cout<<"How many columns do you want to have\n";
cin>>n;

int *x = new int [n];
int *freq = new int[n];
for(int i=0;i<n;i++){
    cin>>x[i];
    freq[i] = -1;
}
int counter;
for (int i=0;i<n;i++){
        counter=1;
    for (int j=i+1;j<n;j++){
        if(x[i]==x[j]){
            counter++;
            freq[j] = 0;
        }

    }
    if(freq[i]!=0){
        freq[i] = counter;
    }
}
for (int i=0;i<n;i++){
    if(freq[i]!=0){
        cout<<x[i]<<" ";
    }
}
cout<<"\n";
*/

/*Write a program to merge 2 arrays in such a way that final array is sorted.*/

/*int arr1_size,arr2_size;
cout<<"Enter the size of array 1\n";
cin>>arr1_size;
int *x = new int [arr1_size];
cout<<"Enter the elements for array 1\n";
for (int i=0;i<arr1_size;i++){
    cin>>x[i];
}

cout<<"Enter the size of array 2\n";
cin>>arr2_size;
cout<<"Enter the elements for array 2\n";
int *y = new int [arr2_size];
for (int i=0;i<arr2_size;i++){
    cin>>y[i];
}
/*
int newArrSize = arr1_size+arr2_size;
int *rsltArr = new int [newArrSize];
int i=0;
int j=0;
int k=0;
while(i<=arr1_size && j<=arr2_size){
    if(x[i] < y[j]){
        rsltArr[k] = x[i];
        i+=1;
        k+=1;
    }
    else if (x[i]>y[j]){
        rsltArr[k] = y[j];
        j+=1;
        k+=1;
    }
    else{
        rsltArr[k] = y[j++];
        i+=1;
        k+=1;
    }
}

if(i>arr1_size && j<arr2_size){
    for(j;j<arr2_size;j++){
        rsltArr[k] = y[j];
        k+=1;
    }
}
else if(i<arr1_size && j>arr2_size){
    for(i;i<arr1_size;i++){
        rsltArr[k] = x[i];
        k+=1;
    }
}

for(int i=0;i<newArrSize;i++){
    cout<<rsltArr[i]<<" ";
}
int i=0;
int j=0;

while(i<arr1_size && j<arr2_size){
    if(x[i]<y[j]){
        i+=1;
    }
    else if (x[i]>y[j]){
        j+=1;
    }
    else{
        cout<<x[i++]<<" ";
        j+=1;
    }
}*/

//}
