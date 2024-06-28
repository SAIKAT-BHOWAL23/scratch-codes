#include<bits/stdc++.h>
#include<iostream>

using namespace std;

/*using namespace std;

int main()

{

int arr[30]; // initialize size of array is 30

arr[4]=45; // means 4th index element of this array is 45
cout<<arr[4]<<endl;
} */



///     HOW TO TAKE USER INPUT ARRAY////


//#include<bits/stdc++.h>





/*int main()

{
    int n;
    cout<<"enter value for n"<<endl;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        
    }
    
    cout<<*(a+1);
    
    return 0;
    
}*/

    /// INCREASING SIZE OF ARRAY  ////

    /*int main()

    {

        int a[5]={1,2,3,4,5};
        int *p;
        p=new int[5];

        for(int i=0;i<=4;i++)
        {
            p[i]=a[i];
            cout<<p[i]<<endl;;
        }
        
        int *q;

        q=new int[10];

        for(int i=0;i<=4;i++)
        {
            q[i]=p[i]; // copying all elements of p in q
            
        }

        

        delete p; // deleting dynamic array from heap
        p=q; // pointing p to the q dynamic array
        q=NULL; // disconnecting q from the dynamic array 

         for(int i=0;i<=4;i++)
        {
            
            cout<<p[i]<<endl; // finally p got the lenght of the q array  

        }

        return 0;

    }*/

      //////   2-D ARRAY USING POINTER /////


      /*int main()
      {


        int *A[3];
        A[0]=new int[3];
        A[1]=new int [3];
        A[2]=new int [3];

        

          for(int i=0;i<3;i++)
          {
            for(int j=0;j<3;j++)
            {
                cout<<A[i][j];
                cout<<endl;
            }
          }
             return 0;
      }*/



      ///// APPENDING AN ELEMENT TO AN ARRAY ////

/*int main()
{
    int n,x;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
  int a[n];
  
  cout<<"enter elements"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      
  }
  
  cout<<"enter the value to be appende"<<endl;
  cin>>x;
  a[n]=x;
  n++;
  
  for(int i=0;i<n;i++)
  {
      cout<<a[i];
      
  }
  
    return 0;
}*/





      //// INSERTION OF ELEMENT /////




 /*int main()


{
    int n,x,p;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
  int a[n];
  
  cout<<"enter elements"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      
  }
      cout<<"enter the value to be inserted"<<endl;
      cin>>x;


      cout<<"enter the position of insertion"<<endl;
      cin>>p;


      if(p>=0 && p<=n)
      {
           for(int i=n;i>p;i--)
           {
            a[i]=a[i-1];
            

           }
         }

           a[p]=x;
           n+1;   
             
             for(int i=0;i<n+1;i++)
             {
                cout<<a[i];

             }
         
           
           
    

   return 0;


      

}*/

          //// DELETION OF ARRAY ////


        /*int main()


{
    int n,x,p;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
  int a[n];
  
  cout<<"enter elements"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      
  }
      cout<<"enter the value to be deleted"<<endl;
      cin>>x;


      cout<<"enter the position of deletion"<<endl;
      cin>>p;


      if(p>=0 && p<=n)
      {
           for(int i=p;i<n-1;i++)
           {
            a[i]=a[i+1];
            
        
           }

           n--;
         }


        
             
           
             
             for(int i=0;i<n;i++)
             {
                cout<<a[i];

             }
         
           
           
    

   return 0;


      

}*/


      ////  LINEAR SEARCH IN ARRAY ////


   /*int main()


   {

   
      int n,x,p;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
  int a[n];
  
  cout<<"enter elements"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];



  }


     cout<<"enter the key element"<<endl;
     cin>>x;


    for(int i=0;i<n;i++)

     {
        if(a[i]==x)

        {
            cout<<i;

        } 

        
     }

         return 0;

   }*/


   /////    BINARY SEARCH IN ARRAY  ////

      
      
      /*int main()


   {

   
      int n,l,h,m,key;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
     int a[n];
  
     cout<<"enter elements"<<endl;
       for(int i=0;i<n;i++)
      {
      
      
      cin>>a[i];
      
      
      }

    l=0;
    h=(n);

    cout<<"enter value for key element"<<endl;
    cin>>key;

   

  while(l<=h)

   {
     
   
     m=(l+h)/2;


  
    if((a[m]==key))
    {
       cout << "key index is " << m << endl;
            break; ;
    }

    else if(a[m]>key)

    {
        h=m-1;
    }

    else 
    {
        l=m+1;
    }

  }

    if(l>h)

    {
      cout<<"key not found"<<endl;
    }


   

    return 0;

   }*/


      ///  REVERSE AN ARRAY ///

      

/*int main()

{
    
    int n,a[1000];
   // cout<<"enter number of elements in the array"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++) // it is not needed to print the array as it is not mentioned in sample output
    {
        cout<<a[i];
    }
    
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    
    
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    
    return 0;
    
}*/



   ////   LEFT ROTATION OF AN ARRAY ///

  


  

/*int main()
{
    int n,d;
    cout<<"enter value for n and d"<<endl;
    cin>>n>>d;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
       for(int i=0,j=d-1;i<j;i++,j--)// here we will reverse the first d elements 
       {
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       }      
        for(int i=d,j=n-1;i<j;i++,j--)//here we will reverse the rest elements
        {
            int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
        }
        
        for(int i=0,j=n-1;i<j;i++,j--) //here it will reverse the whole array again
        {
            int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
        }

        cout<<"the left shifted array of d value is :"<<endl;
        for(int i=0;i<n;i++)
        {cout<<a[i]<<" ";
        }
        
        return 0;
        
    
}*/




   ////   INSERTING AN ELEMENT IN AN SORTED ARRAY  //


   /*int main()
   {
    int n;
    cout<<"enter for n"<<endl;
    cin>>n;


    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"enter value of to be inserted element"<<endl;
    cin>>k;

    
    n+1;
    a[n]=k;
    

    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
        
    }
        cout<<endl;

    for(int i=n-1;i>=0;i--)
    {  
        if(a[i]>k)

      {
      a[i+1]=a[i];
      a[i]=k;
      }
    }
    
    for(int i=0;i<n+1;i++)
    
    {
        cout<<a[i]<<" ";
    }
     
     return 0;

   }*/

     

            
     ////  CHECK IF AN ARRAY IS SORTED OR NOT ////


     /*bool sorted_check(int a[],int n)

     {

             

        for(int i=0;i<n-1;i++)
        {
            

            if(a[i]>a[i+1])
            {
               return false;
            }
        
        }

        return true;
     
       
      
     }

     int main()
     {
        int x;
        cout<<"enter value for n"<<endl;
        cin>>x;
        int b[x];
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
        }

        bool issorted=sorted_check(b,x);

        if(issorted)
        {
            cout<<"it is sorted"<<endl;

        }

        else
        {
           cout<<"it is not sorted"<<endl;
        }

        return 0;
     }*/


        ///  SHIFT ALL THE NEGATIVE ELEMENTS RIGHT SIDE ///

        /*int shift(int a[],int n)
        {
            int i=0,j=n-1;
            
            
               for((a[i]<0 && a[j]>=0);i<j;i++,j--)

               {
                  

                  

                  int temp =a[i];
                  a[i]=a[j];
                  a[j]=temp;

                  
               
             }

            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
        
            cout<<endl;

            return 0;
        }


        int main()
        {
            int n;
            cout<<"enter for n"<<endl;
            cin>>n;

            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];

            }

            

            return shift(a,n);
      

        }*/



      ////  MERGING TWO ARRAYS  ////


      /*int merge(int a[],int b[],int n,int m)
     
     
     
     {
         int i=0,j=0,k=0,q=(m+n);
         
         int* c = new int[q];


         while(i<n && j<m)

         {
            if(a[i]<b[j])
            {
                c[k++]=a[i++];
                

            }

            else
            {
                c[k++]=b[j++];
                


            }


         }
        
          for(;i<n;i++)
         {
            c[k++]=a[i];
            

         }
         

          for(;j<m;j++)
         {
            c[k++]=b[j];
            
            
          }
         


          for(int i=0;i<q;i++)
          {
            cout<<c[i]<<" ";

          } 

          cout<<endl;  
          
          delete[] c;


          return 0;


     }



       int main()
       {
        int x,y;
        cout<<"enter values for ...."<<endl;
        cin>>x>>y;
         int g[x],h[y];
        
        for(int i=0;i<x;i++)


        {
            cin>>g[i];

        }


        for(int i=0;i<y;i++)
        {
            cin>>h[i];

        }

         //cout<<merge(g,h,x,y)<<endl;

         return merge(g,h,x,y);


       }*/

          

    /////   FINDING MISSING NUMBERS  //////



    // int missing(int a[],int b[],int n,int x)

    // {   
    //     int sum=0;

    //     for(int i=0;i<n;i++)

    //     {
    //         sum += a[i];

    //     }
         
    //     //cout<<sum<<endl;

    //     int sum1=0;
    //     //int x = sizeof(b)/sizeof(b[0]);

    //     for(int i=0;i<x;i++)

    //     {
    //         sum1 += b[i];
    //     }


        

    //     cout<<sum-sum1;


    //     return 0 ;

        

    // }

    // int main()

    // {
        
    //     int n;
    //     cin>>n;

    //     int a[n];
        
    //     for(int i=0;i<n;i++)

    //     {
    //         cin>>a[i];
    //     }

    //    int x;
    //    cin>>x;

    //    int b[x];

    //    for(int i=0;i<x;i++)

    //    {
    //     cin>>b[i];
    //    }

    //    return missing(a,b,n,x);

        

    // }





 /////   FINDING MISSING NUMBERS METHOD 2 O(N)  //////


//  int missing(int a[], int h[], int n,int l,int high)

//  {
//     for(int i=0;i<n;i++)
//     {
//          h[a[i]]++;
//     }

//     for(int i=l;i<=high;i++)
//     {
//         if(h[i]==0)
//         {
//             cout<<i<<endl;
//         }
//     }
//  }




//  int main()

//  {

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++)

//     {
//         cin>>a[i];

//     }
    

//     int max =0;

//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }

//     }

//     int min=max;

//     for(int i=0;i<n;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }

//     //cout<<min<<endl;

//      int l=min;
//      int high=max;


//     int h[max];
//     for(int i=0;i<=max;i++)
//     {
//         h[i]=0;
//     }

    
    

//     return missing(a,h,n,l,high);




//  }



   ///  FINDING DUPLLICATES IN SORTED ARRAYS/////


//    int duplicate(int a[], int n)

//    {
     
//      int lastduplicate=0;

    
    
//     for(int i=0;i<n;i++)


//     {
//          if(a[i]==a[i+1] && a[i]!=lastduplicate)

//         {
              
//             cout<<"duplicate is :"<<a[i]<<endl;
           
//             lastduplicate=a[i];
            

//          }
     
//      return 0;

//    }
//    }
//    int main()

//    {

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];

//     }

//     return duplicate(a,n);

//    }


     ///  COUNTING DUPLICATES IN SORTED ARRAYS ///

//      int countduplicate(int a[],int n)

//      {
//         for(int i=0;i<n-1;i++)
//         {
//             if(a[i]==a[i+1])
//             {
//                 int j=i+1;
//                 while(a[j]==a[i])
//                 {
//                     j++;

//                 }

//                 cout<<a[i]<<"number is occuring :"<<j-i<<"times"<<endl;
//                 i=j-1;


                
//             }
//         }


//          return 0;
//      }


//      int main()
//    {

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];

//     }

//     return countduplicate(a,n);

//    }



   ///  FINDING DUPLLICATES IN SORTED ARRAYS METHOD 2 ////


//    int duplicate(int a[], vector<int> h,int n, int max)

//    {
//       for(int i=0;i<n;i++)
//       {
//         h[a[i]]++;

//       }
      
//       for(int i=0;i<=max;i++)
//       {
//         if(h[i]>1)

//         {
//             cout<<i<<"occurs:"<<h[i]<<"times"<<endl;
//         }
//       }

//       return 0;
//    }


//    int main()

//    {
     
//      int n;
//      cin>>n;

//      int a[n];
//      for(int i=0;i<n;i++)
//      {
//         cin>>a[i];

//      }


//      int max=0;
//      for(int i=0;i<n;i++)
//      {
//         if(max<a[i])
//         {
//             max=a[i];
//         }

//      }

//      vector<int> h(max+1,0);

//      return duplicate(a,h,n,max);




//    }


   ////  FINDING DUPLICATES IN UNSORTED ARRAY ////


//    int duplicate(int a[], int n)


//    {
    
//     for(int i=0;i<n;i++)
//     {
//        int count=1;

//        if(a[i]!=-1)
//        {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//                 a[j]=-1;
//             }
//         }


//         if(count>1)
//         {
//             cout<<a[i]<<":"<<count<<endl;
//         }
//        }
        
//     }

//      return 0;



//    }


//    int main()

//    {
//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];

//     }

//     return duplicate(a,n);
    

//    }


    ////  FINDING DUPLICATES IN UNSORTED ARRAY USING HASH TABLE  ////


    // int duplicate(int a[], vector<int> h,int n,int max)
    // {
       
    //    for(int i=0;i<n;i++)
    //    {
    //     h[a[i]]++;
    //    }

    //    for(int i=0;i<max;i++)
    //    {
    //     if(h[i]>1)
    //     {
    //         cout<<i<<":"<<h[i]<<endl;
    //     }
    //    }

    //    return 0;

    // }


    // int main()
    // {
    //     int n;
    //     cin>>n;
         
    //     int a[n];
    //     for(int i=0;i<n;i++)
    //     {
    //         cin>>a[i];

    //     }

    //     int max=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(a[i]>max)
    //         {
    //             max=a[i];
    //         }
    //     }

    //     vector<int> h(max,0);


    //     return duplicate(a,h,n,max);

    // }





    ////     FINDING FREQUENCY OF ELEMNTS IN AN UNSORTED ARRAY  ////

    // int occurence(int a[], int n)
    // {   

    
    //     sort(a, a+n);

        
    //    for(int i=0;i<n-1;i++)
    //     {
    //         if(a[i]==a[i+1])
    //         {
    //             int j=i+1;
    //             while(a[j]==a[i])
    //             {
    //                 j++;

    //             }

    //             cout<<a[i]<<" "<<"number is occuring :"<<j-i<<"times"<<endl;
    //             i=j-1;


                
    //         }
    //     }


    //      return 0;
    // }



    // int main()
    // {
    //     int n;
    //     cin>>n;

    //     int a[n];
    //     for(int i=0;i<n;i++)
    //     {
    //         cin>>a[i];

    //     }

        
        
    //     return occurence(a,n);;
    // }














    ////   FINDING A & B WHERE A+B =K USING HASH TABLE O(N)  /////



    // int pairsum(int  a[], vector<int> h, int n , int max,int k)

    // {   
       

    
    //     for(int i=0;i<n;i++)
        
    //     { 
    //         //while(a[i]<k)
    //        // {

            
    //        if(h[k-a[i]]!=0)
    //        {
    //            cout<<a[i]<<"+"<<k-a[i]<<"="<<k<<endl;

    //        }

    //        h[a[i]]++;
            
    //        cout<<h[a[i]]<<endl;
    //      //}


    //     }


       

    //     return 0;
    // }


    // int main()

    // {   int k;
    //     cout<<"value for k"<<endl;
    //     cin>>k;

    //     int n;
    //     cin>>n;

    //     int a[n];
    //     for(int i=0;i<n;i++)

    //     {
    //         cin>>a[i];
    //     }


    //     // vector<int> a(n);

    //     // for(int i=0;i<n;i++)
    //     // {

    //     //   cin>>a[i];
          

    //     // }

    //     int max=0;
        
    //     for(int i=0;i<n;i++)

    //     {
    //         if(a[i]>max)
    //         {
    //             a[i]=max;
    //         }
    //     }

    //     vector<int> h(max,0);

    //     return pairsum(a,h,n,max,k);

        


    // }