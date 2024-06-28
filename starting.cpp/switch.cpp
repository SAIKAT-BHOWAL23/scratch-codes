#include<iostream>
using namespace std;



string getdayname(int daynum)
    
{

  string dayname;
  
  switch(daynum)
  {
  case 0 :
dayname="sunday";
  break;
  case 1:
dayname ="monday";
 break;
  case 2:
  
  dayname ="tuesday";
  break;

   default:
  cout<<"";


  }


return dayname;
}


int main()

{
 
 /*float n1,n2;

cout<<"input two numbers"<<endl;
cin>>n1>>n2;
  char op;
  cout<<"input an oprator"<<endl;
  cin>>op;


 switch (op)

 {
  case '+':
    cout<<n1 + n2<<endl;
    break;
  case '-':
  cout<<n1-n2<<endl;
  break;
  case '*':
  cout<<n1*n2<<endl;
  break;
  case '/':
  cout<<n1/n2<<endl;
  break;

  default:
  cout<<"out of knowledge"<<endl;
  break;

 }*/


 int n;
 cout<<"enter ur day number"<<endl;
 cin>>n;
cout<<getdayname(n);

 return 0;

}
