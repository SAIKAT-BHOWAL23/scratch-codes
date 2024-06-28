#include<bits/stdc++.h>
#include <windows.h>


using namespace std;


const int  height =50; 
const int  width =50;



boolean snakegame;

int x; int y; // will define location of fruit

 int targetx, targety;
 int score;
  enum directions {STOP=0, UP, DOWN , LEFT, RIGHT};
  directions dir;


void setup()
{
 snakegame = true;
 dir= STOP;
 x= rand() % width; // this means the fruit will not appear at the border 
 y=rand()%height;

 targetx=rand()%width;
 targety=rand()%height;

 while(x==targetx && y==targety) // if the fruit and the player are coliding 
 {
    x= rand() % width;  /*here we creating another random location for fruit after colliding*/
    y=rand()%height;    

    targetx=rand()%width;
    targety=rand()%height;


 }

 score =0;
}

void board()
{
 
   system("cls");
   
  for(int i=0;i<=height;i++)
  
  {
           for(int j=0;j<=width;j++)
           {

            if(i==0 || i==height || j==0 || j==width)
            
               cout<<"#";
            
           
             else if(i==y && j==x)
             {
                cout<<"$";
             }
        
            else
            {
                 cout<<" ";

            }

           }

           cout<<endl;
  }
}

   void input()


     {
            
             if (_kbhit()) 
             {
               
             }

     }

   


      int main()


     {

        setup();

        while(snakegame == true)
        {
           board();
          
        } 
     }