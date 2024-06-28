#include<iostream>

using namespace std;

int main()

{

    // SOLID RECTANGLE//
   
   
   /* int i,j,x,y;
     
     cout<<"enter length"<<endl;
     cin>>x;
     cout<<"enter breadth"<<endl;
     cin>>y;


    for(i=1;i<=x;i++)

    {

       for(j=1;j<=y;j++)
       {

        cout<<"*";
       }
       
       cout<<endl;
    }*/


     // HOLLOW RECTANGLE//

   int i,j,x,y;
     
     cout<<"enter length"<<endl;
     cin>>x;
     cout<<"enter breadth"<<endl;
     cin>>y;


    for(i=1;i<=x;i++)

    {

       for(j=1;j<=y;j++)
       {

       


         if(i==1 || i==x || j==1 || j==y)

         {
            cout<<"*";
         }
            else{

                  cout<<" ";
            }



         }
       
       cout<<endl;


       }

          // HALF INVERTED PYRAMID//
       
    /* int i,j,x;

         cout<<"enter value of x"<<endl;
         cin>>x;
     for(i=x;i>=1;i--)
     {


        for(j=1;j<=i;j++)

        {

            cout<<"*";

            
        }
       
      cout<<endl;

     }*/

        // LEFT SIDED STRAIGHT HALF PYRAMID//


      /*  int i,j,x,y;
        
        cout<<"enter value for x"<<endl;
        cin>>x;


   
    
     


        for(i=1;i<=x;i++)

        {
         
         
         for(j=1;j<=x;j++)

          {
            
            if(j<=x-i) 
           {
            cout<<" "; 

           } 
          
          else{
            cout<<"*";
           } 
           
         }
          cout<<endl;
        }*/
       
      



          /*1 
            2 2 
            3 3 3 
            4 4 4 4 
            5 5 5 5 5 */
          
          /* int i,j,x;
            cout<<"value for x";
            cin>>x;
           for(i=1;i<=x;i++)

           {

            for(j=1;j<=i;j++)
            
            {
              cout<<i<<" ";

            }
   
            cout<<endl;
           }*/




                   // FLOYD'S TRIANGLE//

         /* int i,j,x,y;
          int count=0;
          cout<<"value for x"<<endl;
          cin>>x;

          for(i=1;i<=x;i++)

          {
          
          for(j=1;j<=i;j++)

          {

            cout<<count<<" ";
            count++;
          }
            
             cout<<endl;
          }*/


                 // BUTTERFLY PATTERN//

          /*int i,j,x,y;

          cout<<"enter value for x"<<endl;
          cin>>x;

          for(i=1;i<=x;i++)

          {
             
             for(j=1;j<=i;j++)

             {
              
              cout<<"*";
             }

             int space=2*x-2*i;
             for(j=1;j<=space;j++)
             {
                cout<<" ";


             }
          

            for(j=1;j<=i;j++)

             {
              
              cout<<"*";
             }
          
             cout<<endl;
          
          }  
           
           
           for(i=x;i>=1;i--)

          {
             
             for(j=1;j<=i;j++)

             {
              
              cout<<"*";
             }

             int space=2*x-2*i;
             for(j=1;j<=space;j++)
             {
                cout<<" ";


             }
          

            for(j=1;j<=i;j++)

             {
              
              cout<<"*";
             }

             cout<<endl;

            }
          return 0;*/


           



}  
    







