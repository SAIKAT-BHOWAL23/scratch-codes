
            //CALL BY REFERENCE//


#include<iostream>

using namespace std;



void swap(int &x,int &y)//refering int a and int b

{
 int temp;
 temp=x;
 x=y;
 y=temp;



}

int main()

{
  int a,b;
  a=3;
  b=5;
  swap(a,b);

  cout<<a<<endl<<b<<endl;

  return 0;


}



