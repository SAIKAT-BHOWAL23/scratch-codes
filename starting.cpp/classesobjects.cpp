

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


//There are limited ddta types in any programing language ..so when we want to declare any variable to store more data of similar catagories here comes the concept of class// 






// class laptop // here we are defying a class named laptop

// {
//   public:  // here we define the structure of the class on basis of which we will store data of objects//

//   string company; 
//   string model;         
//   int price;




// };


// int main()

// {


//  laptop lapt1;

//  lapt1.company="hp";
//  lapt1.model="omen";
//  lapt1.price=50000;


// laptop lapt2;

//   lapt2.company="msi";
//   lapt2.model="bravo";
//   lapt2.price=70000;

//   cout<< lapt1.company<<endl;




//  return 0;

// }




           /////////////     CREATING CLASS AND OBJECTS     ///////////////


// class rectangle
// {
//   public:

//   int length;
//   int breadth;

//   int area() // fun() in class
//   {
//     return length*breadth;
//   }

//   int perimeter()
//   {
//     return 2*(length+breadth);

//   }

// };


// int main()

// {
//   // rectangle r1,r2; // this object will be created in stack memmory

//   // r1.length=5;
//   // r1.breadth=3;

//   rectangle *p=new rectangle(); // this object will be created in heap memmory as it is created using pointer

//   p->length=10;
//   p->breadth=5;

  

//   cout<<"area :"<<p->area()<<endl;
//   cout<<"perimeter :"<<p->perimeter()<<endl;

//   return 0;

// }




////////  ****** JAVA DOESM'T ALLOW AN OBJECT TO BE CREATED IN STACK IT ALWAYS CREATE OBJECTS IN HEAP ******//////////



               /////////////      DATA HIDING --- ACCESSOR & MUTATOR     ///////////////




// class rectangle
// {
//   private:   // for data hiding so anyone can't mutate 


//   int length;
//   int breadth;






//   public:

//   int setLenght(int l)  // Mutators
//   {
//     if(l>0)
//     length =l;
//     else
//     {
//       l=0;
//     }

//   }

//   int  setbreadth(int b)
//   {
//      if(b>0)
//       breadth =b;
//      else
//     {
//       b=0;
//     }

//   }

//   int getlength()    //Accesors
//   {
//     return length;
//   }

//   int getbreadth()
//   {
//     return breadth;

//   }

//   int area() 
//   {
//     return length*breadth;
//   }

//   int perimeter()
//   {
//     return 2*(length+breadth);

//   }

// };



// int main()

// {
//   rectangle r;
//   int l,b;
//   cin>>l;
//   cin>>b;

  
//   r.setLenght(l);
//   r.setbreadth(b);

//   cout<<"area : "<<r.area()<<endl;
//   cout<<"perimeter : "<<r.perimeter()<<endl;


//   return 0;

// }



                                 //////    USING CONSTRUCTOR  CREATING OBJECTS   ///////



// class Rectangle
// {
//   private:
//     int length;
//     int breadth;

//   public:
//     Rectangle(int l, int b)  // Constructor
//     {
//       setLength(l);
//       setBreadth(b);
//     }

//     void setLength(int l)  // Mutators
//     {
//       if(l > 0)
//         length = l;
//       else
//         length = 0;
//     }

//     void setBreadth(int b)
//     {
//       if(b > 0)
//         breadth = b;
//       else
//         breadth = 0;
//     }

//     int getLength()    // Accessors
//     {
//       return length;
//     }

//     int getBreadth()
//     {
//       return breadth;
//     }

//     int area() 
//     {
//       return length * breadth;
//     }

//     int perimeter()
//     {
//       return 2 * (length + breadth);
//     }
// };

// int main()
// {
//   int a, c;
//   cin >> a;
//   cin >> c;

//   Rectangle r(a, c);

//   cout << "Area: " << r.area() << endl;
//   cout << "Perimeter: " << r.perimeter() << endl;

//   return 0;
// }




                                  //////    SCOPE RESOLUTION OPERATOR  ///////


    // class rectangle 
    // {

    //   private:

    //   int length;
    //   int breadth;

    //   public:

    //   rectangle(int l, int b)
    //   {
    //       setLength(l);
    //       setBreadth(b);







    //   }


    //   void setLength(int l)
    //   {
    //     if(l>0)
    //     {
    //       length=l;
    //     }
    //     else
    //     length=0;
    //   }


    //   void setBreadth(int b)
    //   {
    //     if(b>0)
    //     {
    //        breadth=b;
    //     }
    //     else
    //     breadth=0;
    //   }


    //   int  getLength()
    //   {
    //     return length;
    //   }

    //   int getBreadth()
    //   {
    //     return breadth;
    //   }


      
    //   int area(); // Using scope resolution this fun() will be created separately

    //   int perimeter()  // This function will be callled inside the main function when machine code will be created and machine code will write it inside the main() thatswhy it is called in-line function
    //   {
    //     return 2*(length+breadth);
    //   }


    // };                        

    // int rectangle::area() // machine code will write this fun() separately unlike area() 
    // {
    //   return length*breadth;
    // }

    // int main()
    // {

    //     int l,b;
    //     cin>>l;
    //     cin>>b;

    //   rectangle r(l,b);

     

     


    //   cout<<r.area()<<endl;
    //   cout<<r.perimeter()<<endl;



    //   return 0; 
    // }





                  //////////         OBJECT USING POINTER      ///////


//                   class Rectangle
// {
//   private:
//     int length;
//     int breadth;

//   public:
//     Rectangle(int length, int breadth)  // Constructor
//     {
//       this->length=length;  /// here first length is refered to the length variable in private section of the class and 2nd length is the passed argument in the rectangle constructor
//       this->breadth=breadth;
//     }

//     void setLength(int l)  // Mutators
//     {
//       if(l > 0)
//         length = l;
//       else
//         length = 0;
//     }

//     void setBreadth(int b)
//     {
//       if(b > 0)
//         breadth = b;
//       else
//         breadth = 0;
//     }

//     int getLength()    // Accessors
//     {
//       return length;
//     }

//     int getBreadth()
//     {
//       return breadth;
//     }

//     int area() 
//     {
//       return length * breadth;
//     }

//     int perimeter()
//     {
//       return 2 * (length + breadth);
//     }
// };

// int main()
// {
//   int a, c;
//   cin >> a;
//   cin >> c;

//   Rectangle r(a, c);

//   cout << "Area: " << r.area() << endl;
//   cout << "Perimeter: " << r.perimeter() << endl;

//   return 0;
// }



                     ////////       CREATE A CLASS NAMED STUDENT    /////////



    // class student
    // {
      
    //    private:

    //    int roll;
    //    string  name;
    //    int marks1,marks2,marks3;


    //    public:

    //    student (int r, string nam, int m1, int m2, int m3)
    //    {
    //            roll=r;
    //            name=nam;
    //            marks1=m1;
    //            marks2=m2;
    //            marks3=m3;
         
               

          
         


    //    }

    //       int totalmarks()
    //     {

    //           int t=marks1+marks2+marks3;

           
    //          return t;



    //      }



    //      void grade()
    // {
    //   if((marks1+marks2+marks3)/3>75)
    //   {
    //     cout<<"grade A"<<endl;

    //   }

    //   else
    //   {
    //       cout<<"grade b"<<endl;
    //   }
    // }
       

      

    // };

   

    // int main()
    // {
    //   int roll;
    //   string name;
    //   int m1,m2,m3;

    //   cin>>roll;
    //   cin.ignore();
    //   getline(cin,name);
    //   cin>>m1>>m2>>m3;


      

      
      

    //   student s1(roll,name,m1,m2,m3);


    //   cout<<"total marks :"<<s1.totalmarks()<<endl;
    //   cout<<"Grade is :";  ///  grade() function in your student class doesn’t return a value, it just prints to the console. When you use cout << "Grade is :" << s1.grade() << endl;, it’s expecting s1.grade() to return a value to output, but it doesn’t.

    //   //You can modify your grade() function to return a string instead of printing directly. Here’s how you can do it:
     
    //   s1.grade();

   

    //   return 0;


      
    //      }



                 

                              /////////     OPERATOR  OVERLOADING    /////////




      class complex
      {
        private:
        int real;
        int imagianry;

        public:
        
        complex (int r=0,int i=0)
        {
          real=r;
          imagianry=i;
          
        }
        
        complex operator+(complex x)

        {
              complex  temp;

              temp.real=real+x.real;
              temp.imagianry=imagianry+x.imagianry;

             // cout<<temp.real<<"+"<<temp.imagianry<<"i"<<endl;

             return temp;

        }

        


      };                




      int main()
      {
         int i1, i2, r1, r2;
         cin >> i1 >> i2;
         cin >> r1 >> r2;


        complex  c1(r1,i1);
        complex  c2(r2.i2);
        // c1.real=r1;
        // c1.imaginary=i1;

        


         return 0;
        

      }          



