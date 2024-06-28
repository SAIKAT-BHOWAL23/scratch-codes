



//#include<bits/stdc++.h>

#include<iostream>
//#include<conio.h>
 using namespace std;


     ////         TREE RECURSION   //////

/*int  fun(int n)
{ 
  

    if (n>0)
    {
      cout<<n;

      fun(n-1);
      fun(n-1);




    }
    return 0;

}

   int main()
   {

    int x;
    cout<<"enter for x"<<endl;
    cin>>x;

     fun(x);

     


    return 0;

   }*/


      /// INDIRECT   RECURSION  ///
      

      /*int fun1(int n)
      
      {

         if (n>0)
         {

          cout<<n;

          int fun2(n-1);

         }


    
         


      }

      int fun2(int n)
      {

        if(n>1)
        {

           cout<<n;
           fun1(n/2);

        }
          
      }


      int main()
     {

      int a;
      cout<<"enter x"<<endl;
      cin>>a;

        cout<<fun1(a);

         return 0;
     }*/


       
       ///   NESTED  RECURSION  ////
      
      /* int fun1(int n)
       {
         if(n>100)
         {

            return (n-10);

         }

         else
         {
            return fun1(fun1(n+11));

         }
       }

       int main ()

       {
         int x;
         cout<<"enter for x"<<endl;

         cin>>x;

         cout<<fun1(x);

         return 0;
       
       }*/


       ///    SUM OF NATUARAL NUMS  ////


    /****  IT IS ONLY FOR LEARNING PURPOSE NEVER USE THIS METHOD FOR SUM OF N NATUARAL NUMS ,IT'S SPACE COMPLEXITY IS VERY HIGH***/

  /*int sum(int n)

  {

    if (n==0)
    
    return 0;

    else
    {
       return sum(n-1)+n;

    }
  }

  int main()
  {
    int x;
    cout<<"emter value od x"<<endl;

    cin>>x;

    cout<<sum(x)<<endl;

    return 0;


  }*/

              ////////  FACTORIAL OF N USING RECURSION /////

  /*int fact(int n)
    {

      if(n==0)
     
      return 1;
      
      else

     return  fact(n-1)*n;
    }
    
    
int main()
{
    int i;
    cin>>i;
    cout<<fact(i)<<endl;
    
    return 0;
}*/

    
     /////    POWER RECURSION USING RECURSION ///


    /* int pow(int m,int n)
     {

      if(n==0)
      {
        return 1;


      }

      if(n%2==0)


      {
        return pow(m*m,n/2);
      }

      else
      {
         return m*pow(m*m,(n-1)/2);

      }
     
     }


     int main()
     {

        int  x,y;

        cout<<"enter x"<<endl;
        cin>>x;

        cout<<"enter y"<<endl;
        cin>>y;

        cout<<pow(x,y)<<endl;

        return 0;



     }*/

      ///  POWER OF N USING IATRETIVE   ///

    /*int p(int m, int n)
    {


      if(n==0)
      {
        return 1;
      }
         int power= 1;
      for(int i=1; i<=n;i++)
      {

         power=power*m;

      }

      return power;

    }

    int main()
    {
      int x,y;

      cout<<"enter x"<<endl;
        cin>>x;

        cout<<"enter y"<<endl;
        cin>>y;

        cout<<p(x,y)<<endl;

        return 0;
    }*/


    ////  TAYLOR'S SERIES USING RECURSION ////


    /*double tl(int x, int y)
    {
       static double i=1,j=1;
      if(y==0)
      {
        return 1;

      }

      else
      {
         double res=tl(x,y-1);
         i=i*x;
         j=j*y;

         return res+i/j;

      }
    }


      int main()
      {

        int  a,b;

        cout<<"enter for a"<<endl;
        cin>>a;

        cout<<"enter b"<<endl;
        cin>>b;

        cout<<tl(a,b)<<endl;
        return 0;


      }*/


             ////  TAYLOR'S SERIES USING HORNER'S RULE ////



     /*double e(int x, int n)
     {
      static double s=1;

      if(n==0)
      {
        return s;
      }
      else 
      {
        s=1+x*s/n;


        return e(x,n-1);

         
      }
     }

      int main()

      {
        int x;
        int n;
        cin>>x;
        cin>>n;

        cout<<e(x,n)<<endl;

        return 0;

      }*/


                  ////  TAYLOR'S SERIES USING ITERATIVE ///

                   
  /* double e(int x, int n)
     {
      static double s=1;
      int i;
      double num=1;
      double den=1;

      for(int i=0;i<=n;i++)
      {
        num=num*x;
        den=den*i;
        s=s+(num/den);
      }   
      return s;

     }


     int main()
     {
        int x;
        int n;
        cin>>x;
        cin>>n;

        cout<<e(x,n)<<endl;

        return 0;

     }*/        

       

         /// FIBONACCI SERIES USING ITERATIVE///

 /* #include<iostream>

using namespace std;

 
 
 int fib(int n)
 {
     int sum=0,t0=0,t1=1;
     
     if(n<=1)
     {
         return n;
     }
     
     for(int i=2;i<=n;i++)
     
     {
         sum=t0+t1;
         t0=t1;
         t1=sum;
         
     }
     
     return sum;
     
 }
 
 int main()
 
 {
     int x;
     cin>>x;
     cout<<fib(x)<<endl;
     
     return 0;
 }*/


   /// FIBONACCI SERIES  USING RECURSION/////


   /*int fib(int n)
   {
       int sum=0;

      if(n<=1)
      {
        return n;

      }

      else
      
      {
          return fib(n-2)+fib(n-1);
      }
   }

  int main()


  {

    int x;
    cin>>x;
    cout<<fib(x)<<endl;

    return 0;
  }*/


  /// FIBONACCI SERIES  USING RECURSION LESS TIME COMPLEXITY(MEMOIZATION)/////

  
 /*  int f[10];
  int fib(int n)

  {

    
    if(n<=1)
    {
    f[n]=n;
    return n;
    }
    else 
    {
      if(f[n-2]==-1)
      {
      f[n-2]=fib(n-2);
      }
      if(f[n-1]==-1)
      {
      f[n-1]==fib(n-1);
      }

      return f[n-2]+f[n-1];

    }
  }

   int main()

   {

    for(int i=0;i<10;i++)
    {
      f[i]=-1;
    }
    int x;
    cin>>x;
    cout<<fib(x)<<endl;


   }*/


         ///// FINDING nCr USING ITERATIVE METHOD////


         /*int fact(int n)
         {
            if(n==0)
            
            
            {
            return 1;
            }
            else
            {
            return fact(n-1)*n;
            }



         }
         

           int ncr(int n, int r)

           {
              int num, den;

              num=fact(n);
              den =fact(r)*fact(n-r);

              return num/den;





           }


           int main()

           {
              int x;
              int y;

              cin>>x>>y;

              cout<<ncr(x,y)<<endl;


           }*/

          ///// FINDING nCr USING RECURSIVE METHOD////



        /*int ncr(int n, int r)
        {

          if(n==r || r==0)
          return 1;

          else
          return ncr(n-1,r-1)+ncr(n-1,r);

        }

        int main()

           {
              int x;
              int y;

              cin>>x>>y;

              cout<<ncr(x,y)<<endl;

           }*/


           ///// TOWER OF HANOI USING RECURSION  ////

          /*int  TOH (int n,int a, int b ,int c)

           {

              if(n>0)
              {

                TOH((n-1),a,c,b);
                cout<<"move"<<a<<"to"<<c<<endl;
                
                

                TOH((n-1),b,a,c);
              }

              
           }

            int main()

            {
              int x;
              cin>>x;

              cout<<TOH(x,1,2,3)<<endl;

              return 0;
            }*/