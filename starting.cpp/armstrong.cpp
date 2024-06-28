#include<iostream>
#include<cmath>
using namespace  std;


int main()
{
   
   int original,arm=0,x;
   
   cout<<"enter for n"<<endl;

   cin>>original;
  int  temp=original;

  /* for(;temp>0;temp=temp/10)
   {
    

     x=temp%10;
    arm+= pow(x,3);
   }*/

   while(temp>0)
   {
    
       x=temp%10;

        arm=arm+(x*x*x);
       temp=temp/10;
   }

    cout<<arm<<endl<<original<<endl;
   

 if(arm==original)

  {

    cout<<"it is an armstrong"<<endl;
  }

  else
  {
   cout<<"it is not armstrong"<<endl;


  }

  return 0;




}




