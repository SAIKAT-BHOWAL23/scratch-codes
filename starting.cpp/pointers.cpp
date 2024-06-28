// pointer is a type of information which is stored in the physical memory of compputer , so any memory address useed in programing is considered as a pointer


#include<iostream> 
using namespace std;
/*int main()

 {

int n1=456;
int *pn1 =&n1;

float x=3.456;
float *px=&x;


string name ="ssss";
string *pname =&name;


   cout<<"n1:"<<pname<<endl;
   cout<<"x :"<<px<<endl;
   cout<<"nmae :"<<pn1<<endl;

   cout<< &n1<<endl;
   cout<<*px<<endl; // this is called dereferenciating of pointer..it grab the value from the aloocated memory 

  int arr[3]={2,3,4};
    
    int *p;
    p=&arr[1];// we can't intialize the whole array in p cause an array holds multiple addresses of memmories of multiple elements


   cout<<p<<endl;


  }



        //CODE OF POINTER TO STRUCTURE//

#include<iostream>

using namespace std;

struct Rectangle 
{

   int length,breadth;


};

int main()

{

   struct Rectangle *p;

   p=new Rectangle;// accessing heap memory

   p->breadth=34;
   p->length=22;

   cout<<p->breadth<<endl;
   cout<<p->length<<endl;

   return 0;





}


*/

   //////    DOUBLE POINTER     /////


   int main()

   {
      int x;
      x=4;

      int *p;
      int **pp;
      p=&x;
      pp=&p;
      cout<<*p<<endl;

      cout<<pp<<endl;
      cout<<&p<<endl;
      cout<<p<<endl;
      cout<<*pp<<endl;// this will print adress of x
      cout<<**pp<<endl; // this will print value at address of x 

      return 0;
   }
