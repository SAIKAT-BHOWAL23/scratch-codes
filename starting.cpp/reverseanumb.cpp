#include<iostream>

using namespace std;

int main()
{

  int n;
 cout<<"enter for n"<<endl;
  cin>>n;
  int originaal=n;
  int reverse=0;
  

 /* while(n>0)
  {
    ld=n%10;
    reverse=reverse*10+ld;
    n=n/10;
  }*/    


 for(;n>0;n=n/10)
 {
    reverse= (reverse*10)+(n%10);
 

   


 }
  cout<<reverse<<endl;


 if(reverse==originaal)
 {

    cout<<"it is pallindrome"<<endl;
 }

 else
 
 {
  cout<<"it is not palindrome"<<endl;

 }
  return 0;
  
}


