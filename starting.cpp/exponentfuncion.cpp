#include<iostream>

using namespace std;

int power(int base , int pow)

{

  
 int result =1;

 for(int i =0; i<pow; i++)

  {
   result =result*base;

  }

  return result;
}

  
  int main()


  {
  
    int x,y;
    cout<<"enter for base and po0wer"<<endl; 
    cin>>x>>y;
    cout<<power(x,y);
   
    return 0;
  
  }