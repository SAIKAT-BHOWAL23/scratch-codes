#include<iostream>

using namespace std;

class  chef //This class is called super class
{

public:
 void makechicken()

 {

    cout<<"can make chicken"<<endl;

 } 

  void makesalad()

  {

  cout<<"can make salad"<<endl;

  }


};



class indianchef: public chef //This class is called sub class ... here we inherit class 'chef' into class 'indianchef'
{
 public:
  void makefish()

  {

    cout<<"can make fish"<<endl;
  }

};

int main()


{

chef chef;
chef.makesalad();


indianchef indianchef;
indianchef.makechicken();

}