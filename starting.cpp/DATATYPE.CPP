/*an integer takes 4 bytes in storage, 4 bytes = 32 bits, in these 32 bits we Can assaign 2^32 numbers of +ve integer values where it starts from 0 to (2^32)-1.

and can store (-2^31) to (2^31)-1.

msb is called most significant bit is used to tell the sign of an integer.(0= +ve and 1 = -ve )*/

/*floart represents upto 7th place after decimal unit, and double represents upto 15th places after decimal. float also take 4  bytes in sstorage and double take 8 bytes.

char takes 1 byte ion memory and represents by ascii value.

boolean erpresented by 0 and 1 and take 1 byte in memory.
*/





////// CALCULATION IN C++ ALWAYS PREFER THE HIGHER DATATYPE  ///////

/*

  ^   DOUBLE
  |   FLOAT               //PRIORITY ORDER//
  |   LONG LONG INT
  |   LONG INT
  |   INT CHARACTERS
  
*/


#include<iostream>//iostream is a header file for taking input and print output
using namespace std;

int main()// from here compiler starts to execute code 
{

int a ;//declaration
a=12; //initialization

cout<<"size of int"<<sizeof(a)<<endl;//cout is printf() of cpp
float b;
b=2.5;
cout<<"size of float"<<sizeof(b)<<endl;

char c;
cout<<"size of char"<<sizeof(c)<<endl;

bool d;
cout<<"size of bool"<<sizeof(d)<<endl;

short int si ;
cout<<"size of short int"<<sizeof(si)<<endl;
long int li;
cout<<"size of long int"<<sizeof(li)<<endl;

int x;
cin>>x;

int y;
cin>>y;
int sum=x+y;
cout<<sum<<endl;//:"<<" it is calle3d insertion operator

return 0;//this is the ending status of int main 

}
