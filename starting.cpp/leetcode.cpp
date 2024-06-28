#include<iostream>

using namespace std;

class Solution 
{
 public:
    
    int nums[4];
    int target;
    
   
};

int main()
{
         int i=0,j,sum;
  
      Solution sol;
      {
       cout<<"enter for target "<<endl;
       cin>>sol.target;

       cout<<"enter array elements"<<endl;
       
       cin>>sol.nums[0];
       cin>>sol.nums[1];
       cin>>sol.nums[2];
       cin>>sol.nums[3];
       

      for(i=0;i<4;i++)
      {
         for(j=i+1;j<4;j++)
        { 
           if(sol.nums[i]+sol.nums[j]==sol.target)
           {
            cout<<sol.nums[i,j]<<endl;
           }
        }



        


        
        

       

        
      }

    return 0;
   }

}
