
#include<bits/stdc++.h>



using namespace std;

//int main()

// {

//     string charactername ="ss"; //defing a string so we can modify the data of the variables here but the data will be changed throughout the code
//     int characterage =66;//w ecan change int value also within the string

//     cout <<"hi i am "<<charactername<<endl;
//     cout<<"age is "<<characterage<<endl;
   
//     charactername="rsguygshusfdxh";//wecan modify data here in this way also
//     cout<<"he is "<< charactername<<endl;
    
//     cout<<charactername.length()<<endl;//o/p will be 3
   
//     cout<<charactername.find("h",0);// here .find will find out the positi0on where the letter h is from the oth index

//     cout<<charactername.substr(5 , 4); // .substr will find out and  write the consecutive 4 characters starting from index 5th
//      return 0;
// }


     ///   CHANGING FROM UPPER CASE TO LOWER CASE   ////



//   int main()

//   {

//    string a;
//    getline(cin,a);
   
//    int n=a.length();
    
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>=65 && a[i]<=90)
//        {
//          a[i]+=32;
//        }

//        else if(a[i]>='a' && a[i]<=122)
//        {
//          a[i]-=32;
//        }
//    }

//      for(int i=0;i<n;i++)

//      {
//       cout<<a[i];
//      }

//     return 0;

//    }



          ////      COUNTING VOWELS AND CONSONENTS AND NO. OF WORDS   //////

          // int main()

          // {
          //      int vcount=0;
          //      int ccount=0;
          //      int word=0;


          //      string s;
          //      getline(cin, s);

          //      int n=s.length();

          //      for(int j=0;j<n;j++)
               
          //      {
          //          if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
          //          {
          //           vcount++;

          //          }

          //          else if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))
          //          {
          //           ccount++;

          //          }

          //          if(s[j]==' ' && s[j-1]!=' ')
          //          {
          //           word++;

          //          }
          //      }


          //      cout<<"vowels :"<<vcount<<endl;
          //      cout<<"consonents :"<<ccount<<endl;

          //      cout<<"no of words : "<<word+1<<endl;

          //      return 0;
          // }




                      
                      
                                   /////   REVERSING AN STRING method 1  ///// 


          // int  reverse(string  s)

          // {

              


          //      reverse(s.begin(), s.end());  // IN BUILT FUNCTION TO REVERSE
          //      cout<<s<<endl;
      
          //      return 0;
               
          // }

          // int main()
      
          // {
             
             
          //    char a[]="HOLLLAAAAA";
          //    reverse(a, a+ strlen(a));// REVERSE FUNCTION FOR CHARACTER ARRAY
          //    cout<<a<<endl;
            

          //    string s;
          //    getline(cin,s);

             





     

            
          //   return reverse(s) ;


          // }




                    /////   REVERSING AN STRING method 2 ///// 


        //    int reverse(string s)
        //    {
        //        int n=s.length();
               
        //        int i=0;
        //        int j=n-1;

        //        while(i<j)
        //        {
        //         char temp=s[i];
        //         s[i++]=s[j]; //here it means after swapping the current value of s[i], i will be incremented 
        //         s[j--]=temp;

        //         cout<<s<<endl;

        //            return 0;

        //        }



        //    }         

        //    int main()
        //    {
        //        string s;
        //        getline(cin,s);

        //        return reverse(s);


        //    }




                           /////   REVERSING AN STRING method 3 ///// 


        //    int reverse(string s)
        //    {
        //        int n=s.length();
               
        //        int i=0;
        //        //int j=n-1;

        //        for(int i=0;i<n/2;i++)
        //        {
        //         swap(s[i],s[n-1-i]);
        //        }
                  
        //        cout<<s<<endl;

        //         return 0;
        //    }         

        //    int main()
        //    {
        //        string s;
        //        getline(cin,s);

        //        return reverse(s);


        //    }


                                 ////// COMPARING TWO STRINGS TO CHECK SAME OR NOT   ///////


    //     int compare(string s, string s1)

    // {

    //     int n=s.length();
    //     int n1=s1.length();

       

    //     int i;
    
    //     for(int i=0;i<n;++i)

    //     {
    //         if(s[i]!=s1[i] || n!=n1)
    //         {
    //             cout<<"not same"<<endl;
    //             break;
    //         }
          
           
    //     }  
           
    //         if(s==s1)  //here 's' & 's1' denotes whole strings for both
    //         {
    //             cout<<"same"<<endl;
                
    //         }
        

    //     return 0;

    // }

    //     int main()
    //     {
    //         string s;
    //         getline(cin , s);

    //         string s1;
    //         getline(cin,s1);
            
    //         return compare(s,s1);

    //     }



                ////    CHECKING A STRING PALLINDROME OR NOT  /////


                // void check(string s )
                // {
                //     int n=s.length();

                //     int i=0;
                //     int j=n-1;
                //     while(i<j)
                //     {
                //         if(s[i++]==s[j--])
                //         {
                //             cout<<"pallindrome"<<endl;
                //             break;
                //         }
                //         else
                //         {
                //            cout<<"not pallindrome"<<endl;
                //            break;
                //         }
                //     }
                    
                //    // return 0;
                // }

                // int main()
                // {
                //     string s;
                //     getline(cin,s);

                    

                //      check(s);
                //      return 0;

                // }


                
                
               
               
               
               
                /////    CHEKING IF TWO STRINGS ARE ANARGAM OR NOT (Anargam means if two strings contain same elements or not)//////
            


            

            //   void isanargam(string t1, string t2)

            //   {


            //      sort(t1.begin(), t1.end());
            //      sort(t2.begin(), t2.end());

            //      if(t1.length()!=t2.length() && t1!=t2 )
            //      {
            //         cout<<"not anargam"<<endl;
            //      }
                 
             
                  
            //       else
            //       {
            //         cout<<" anargam"<<endl;
            //       }

                
            //   }


            //   int main()

            //   {
            //     string s1;
            //     getline(cin,s1);

            //     string s2;
            //     getline(cin,s2);

           

            //     isanargam(s1,s2);



            //     return 0;
            //   }



            //  FREQUENCY OF A SUBSTRING IN A MAIN STRING METHOD--1 //




// int count_occurence(string main , string sub)
//  {
     
//      int count=0;

//     for(int i=0;i<main.length();i++)
//     {
//         if(main.substr(i,sub.length())==sub)
//         {
//             count++;
//             i=i+sub.length();
//         }
        
        
//     }

        

//         return count;

//  }

//  int main()
//  {
//      string s;
//      getline(cin, s);

//      string su;
//      getline(cin, su);

//      cout<<count_occurence(s,su)<<endl;

//      return 0;
//  }





                ///  FREQUENCY OF A SUBSTRING IN A MAIN STRING  METHOD-2  ///

                

//  int count_occurence(string main , string sub)
//  {

//     int n= sub.size();
//     int j;
//     int count=0;
   
     
//     for(int i=0;i<=main.size()-n;i++)
//     {
//         int j=0;
//          for(j=0;j<n;j++)
//          {
//             if(main[i+j]!=sub[j])
//             {
//                 break;
//             }
//          }
//             if(j==n)
//             {
//                 count++;
//             }
         

//     }
   

//         cout<<count<<endl;
//         return count;

    

//     }

 

//  int main()
//  {
//      string s;
//      getline(cin, s);

//      string su;
//      getline(cin, su);

//      count_occurence(s,su);

//      return 0;
//  }





        ////   FINDING LONGEST PREFIX  IN A GIVEN STRING  ////



     //    string   longestprefix(string a[], int n)
     //    {

          
     //      sort(a,a+n);


          

     //      int minimum = min(a[0].size(), a[n-1].size());
          
     //      string first = a[0];
     //      string last =a[n-1];

     //      int i=0;
     //      while(i<minimum && first[i]==last[i])
     //      {
     //           i++;

               
     //      }
          
     //      string s=first.substr(0,i);
     //      if(first[i]!=last[i])
     //      {
     //          cout<<"no such prefix "<<endl;
     //      }

     //      return s;
           
     //    }

     //    int main()
     //    {    int n;
     //         cin>>n;
          
     //      string str[n];
     //      for(int i=0;i<n;i++)
     //      {
     //           cin>>str[i];
     //      }

          
         
     //      cout<<longestprefix(str, n)<<endl;

     //      return 0;


     //    }



     

                      /////    Find the minimum distance between the given two words     //////




          // int mindistance(vector<string > v, int n, string w1, string w2)
          // {

             
          //    int d1=0;
          //    int d2=0;
          //    int ans;
          

          //    for(int i=1;i<=n;i++)
          //    {
          //      if(v[i]==w1)
          //      {
          //           d1=i;
          //      }

          //      if(v[i]==w2)
          //      {
          //           d2=i;
          //      }
               
          //      if(d1!=0 && d2!=0)
          //      {
          //           ans = min(ans , abs(d1-d2));
          //      }


          //    }

          //    return ans;


          // }

          // int main()

          // {
          //     int n;
          //     cin>>n;


          //     vector<string > v;
          //     int i=0;
          //     while(i<=n)
          //     {

          //      string x;
          //      getline(cin,x);
          //      v.push_back(x);
          //      i++;
          //     }

          //     string w1;
          //     cout<<"word1"<<endl;
          //     getline(cin,w1);
              
          //     string w2;
          //     cout<<"word2"<<endl;
          //     getline(cin,w2);



          //      cout<<mindistance(v,n,w1,w2)<<endl;

          //      return 0;


          // }





          