


#include<iostream>

using namespace std;

class laptop // here we are defying a class named laptop

{
  public: 
   // here we define the structure of the class on basis of which we will store data of objects//

  string company; 
  string model;         
  int price;
  
  laptop(string ccompany, string cmodel, int cprice) //this is called "constructor function" here we pass the entities of the objects

  {
    company=ccompany;
    model=cmodel;
    price=cprice;
    
  }

    bool buy()
    {
        if (price<60000)
        {
             return true;
        }

        return false;
    }

};


int main()

{


 laptop lapt1("hp","omen",50000);

 


laptop lapt2("msi","bravo",70000);

  

  cout<<lapt1.buy()<<endl;




 return 0;

}