#include<iostream>
#include<cmath>

using namespace std;
  // CHECK FOR PRIME IN RANGE//

/*bool isprime(int num)
{
    int j;
    for(j=2;j<num;j++)
    {
        if(num%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()

{

    int a,b,i;
    cout<<"input for a"<<endl;
    cin>>a;
    cout<<"input for b"<<endl;
    cin>>b;

   for(i=a;i<=b;i++)
   {
    if(isprime(i))
    {
        cout<<i<<endl;
    }
   }
  return 0;

}*/


                             // FIBONACCI SERIES//

 /* int fib(int n)
  {
    int i,t1=0,t2,nextterm;
    for(i=0;i<n;i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    
  }

int main()
{
    int n;
    cout<<"enter range"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;


     return 0;
}*/




                            //  FACTORIAL//
 
  /* 
   int fun(int n)

   {
    int i,fact=1;
    for(i=n;i>=2;i--)
    {
       fact=fact*i;
    }
    return fact;
   }

       int main()
       {
         int n,ans;
         cout<<"enter value for n"<<endl;
         cin>>n;
         
         ans =fun(n);
         cout<<"factorial value is"<<endl;
         cout<<ans<<endl;

         return 0;
       }
          */
       
       
    







/////////    PASCAL TRIANGLE   //////////


/*
int fun(int n)

   {
    int i,fact=1;
    for(i=n;i>=2;i--)
    {
       fact=fact*i;
    }
    return fact;

   }


   int main ()

   {   

    int i,j,n;
    cout<<"enter value for n"<<endl;
    cin>>n;

    for(i=0;i<=n;i++)
    {
      for(j=0;j<=i;j++)

      {
        cout<<fun(i)/(fun(i-j)*fun(j))<<"  ";
      }

      cout<<endl;
    }

    return 0;


   } */

    ///// pythagorian triplet//////
    
  /* bool triplet(int x,int y,int z)
   {
      int b,c;
      int h=max(x,max(y,z));

      if(h==x)
      {
        int b=y;
        c=z;
      }
      else if(h==y)
      {
        b=x;
        c=z;
      }
      
      else
      {
          b=x;
          c=y;

      }
      
      if((h*h)==(b*b)+(c*c))
      {
        return true;
      }
    
     else
     {
       return false;
     }


   }
   
   
    int main()
   {

      int x,y,z;
      cout<<"enter value of x"<<endl;
      cin>>x;
      cout<<"enter for y"<<endl;
      cin>>y;
      cout<<"enter for z"<<endl;
      cin>>z;

      if(triplet(x,y,z))
      {
        cout<<"pythagorian triplet"<<endl;

      }

      else
      {
        cout<<"not "<<endl;
      }

        return 0;

   }
*/


 /////////////   BINARY TO DECIMAL /////////
      

     /* int bintodec(int n)
      {  int x=1;
        int ans=0;
        for(;n>0;n=n/10)
        {
          int a=n%10;
          ans=ans+x*a;
          x=x*2;


        }

        return ans;

      }







        int main()
        {
          int x;
          cout<<"enter for x"<<endl;
          cin>>x;

          cout<<bintodec(x);

          return 0;
        } */

         ///// BINARY TO BINARY ADDITION /////

         int addbin(int a,int b)

         {

          int x=0;
          int carry=0;
          if(a%2==0 &&  b%2==0)

          {
            x=x*10+carry;
            carry=0;


              
          }

          else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
          {
            x=
          }


         }


         int main()
         {
          int a,b;
          cout<<"enter value of a"<<endl;
          cin>>a;
          cout<<"enter value for b"<<endl;
          cin>>b;



         }

