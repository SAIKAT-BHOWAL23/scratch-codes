#include<iostream>

using namespace std;


class Rectangle
{
 public:
    int length;
    int breadth;

 

  int area()
  {

    int a =length*breadth;
    return a;
  }

  int perimeter()
  {

    int p=2*(length+breadth);
    return p;
  }

};

int main ()

{
  
  Rectangle r;
  
   cout<<"enter for lenght"<<endl;
   cin>>r.length;

   cout<<"enter for breadth"<<endl;
   cin>>r.breadth;

  cout<<r.area()<<endl;
  cout<<r.perimeter()<<endl;
  
  return 0;

}