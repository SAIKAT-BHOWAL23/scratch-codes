#include<iostream>
using namespace std;

int * fun(int size)

{
 int *p;
 p =new int[size]; // creating an array in heap memmory dynamically
 int i;

 for(i=0;i<=size;i++)
 p[i]=i+1; // initializing elements of array 

 return p;

}


int main()

{

 int *ptr;
 int sz;
 int i;
 cout<<"enter for sz"<<endl;
 cin>>sz;


 ptr=fun(sz);  // fun(sz) is the function created and taking the address in ptr
  
  for(i=0;i<=sz;i++) // printing all the elements
  {
    cout<<ptr[i]<<endl; // here using ptr[i] as pointer printing the array...ptr[i] means it will print the elements of arrays 
  }

  return 0;
    
}