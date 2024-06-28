#include<bits/stdc++.h> // It includes all the header files required in c++ 

using namespace std;


         ////   PAIR<>  ////

   // pair<int, string > p; // <1st data type, 2nd data type>
    //p= make_pair(3,"heufh"); //make_pair is a inbuild function to do the pair
    
   // p={5 , "kedfd"};
    //cout<<p.first<< " "<<p.second;

   // int a[]= {2,3,4};
   /* int b[]={1,2,3};
    int i;
    pair<int, int> p1[3];
//here in this way we can do operation b/w 2 arrays
    p1[0]={2,1};
    p1[1]={3,2};
    p1[2]={4,3};

    swap(p1[0],p1[2]);

     for(i=0;i<3;i++)
     {
        cout<<p1[i].first <<" "<<p1[i].second<<endl;
     }*/
    
     


                ////   VECTOR    ////

    /* void printvector(vector<int>v)
       {
         cout<<"size of vector"<<" "<<v.size()<<endl;
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<" ";
        }
         cout<<endl;

       };
       
    int main()
{

      vector<int> v1;
      int n;
      cout<<"enter for n"<<endl;
      cin>>n;
      for(int i=0;i<n;++i)
      {
        int x;
        cin>>x;
        //printvector(v1); // here o/p shows the dynamic nature of vector

        v1.push_back(x);// push_back() used to store the value of passed value at the end of the array

        
      }
        v1.pop_back(); // this function delete the last element from the array

        printvector(v1);


      vector<int>v2=v1; // here we can make a copy of v1 which is v2, and we can also change the value of v2 without effecting v1;
      v2.push_back(4);
      printvector(v1);
      printvector(v2);




    




      return 0;
}*/
    


    
               //// VECTOR OF PAIR ////

           /* void print_vector(vector<pair<int,int>> v)
                {
                    cout<<v.size()<<endl;
                    for(int i=0;i<v.size();++i)
                    {
                        cout<<v[i].first<<" "<<v[i].second<<endl;
                    }
                    
                }


               int main()
               {
                vector<pair<int,int>> v1;  // here we are taking pair in a vector
                int n;
                cout<<"enter value for n"<<endl;
                cin>>n;
                int x,y;
                
                     for(int i=0;i<n;++i)
                   {
                    cin>>x>>y;
                    v1.push_back({x,y});

                   }

                    cout<<"resultant vector is"<<endl;
                    print_vector(v1);


               }*/


                ////  ARRAY OF VECTOR  /////
                
                
                /*void print_vector(vector<int>v)
                 {
                    cout<<"size:"<<v.size()<<endl;
                    for(int i=0;i<v.size();++i)
                    {
                        cout<<v[i]<<endl;
                    }
                 }

                int main()
                {   int i=0;
                    int n;
                    cout<<"enter number of array willbe created"<<endl;

                    cin>>n;
                     vector<int>v1[n];
                    for( i=0;i<n;++i)
                    {
                        int x;
                        cout<<"enter value for the number of elements will be in an array"<<endl;
                        cin>>x;

                        for(int j=0;j<x;++j)
                        {
                            int y;
                            cout<<"enter elements"<<endl;
                            cin>>y;
                            v1[i].push_back(y);

                        }

                    }
                       for(int i=0;i<n;++i)
                       {
                        print_vector(v1[i]);
                       }
                       


                    

                }*/

                ///// VECTOR OF VECTOR /////
         void print_vector(vector<int> v)
         {
            cout<<"size:"<<v.size()<<endl;
            for(int i=0;i,v.size();++i)
            {
               
               cout<<v[i]<<endl;

                
            }
         };

    int main()
    {
        int n;
        cout<<"enter number of big vector will be created"<<endl;
        cin>>n;

        vector<vector<int>> v1;
        for(int i=0;i<n;++i)
        {
            int x;
            cout<<"enter value for the number of  sub vectors "<<endl;
            cin>>x;

            vector<int> temp; // here temp vector is a null vector
            for(int j=0;j<x;++j)
            {
                int y;
                cout<<"enter value1s for temp vector"<<endl;
                cin>>y;
                temp.push_back(y);


            }
              v1.push_back(temp);
        }
        
        for(int i=0;i<v1.size();++i)

        {
            print_vector(v1[i]);


        }
     
     
         cout<<v1[0][1];
         
   
   
   
   
        return 0;
    }

