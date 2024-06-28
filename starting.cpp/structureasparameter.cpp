#include<iostream>
using namespace std;

struct Rectangle
{

    int length;
    int breadth;
};

struct Rectangle *fun() // it is a function which creating an object of type rectangle using a pointer

{
   struct Rectangle *p; // it will create an object of type rectangle as pointer in heap memory
   p=new Rectangle; // it will be created in heap

   p->length=6; // initializing value
   p->breadth=5;



   return p;
    
}


int main()

{

    struct Rectangle *ptr=fun();// object is initialized in main functon by the function 'fun'

   cout<<"lenght"<<ptr->length<<endl<<"breadth"<<ptr->breadth<<endl;

   return 0;

}