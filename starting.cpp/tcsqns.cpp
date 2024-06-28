#include<bits/stdc++.h>

using namespace std;


//  An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
// Example :

// Input :
// 200  -> Value of V
// 540   -> Value of W

// Output :
// TW =130 FW=70

// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels

// Constraints :

// 2<=W
// W%2=0
// V<W
// Print “INVALID INPUT” , if inputs did not meet the constraints.


// int main()
// {
//      int v,w;
//      cout<<"value for v"<<endl;
//      cin>>v;
//      cout<<"value for w"<<endl;
//      cin>>w;

//     float t,f; 
    

//     while(w>=2 && v<w )

//      {
//          if(w%2==0)
         
//          {
//             t=((4*v)-w)/2;
//             f=v-t;
//             cout<<"t="<<t<<" "<<"f="<<f<<endl;
//             break; // without break the cout will perform for infinite times till the if statement is true
//          }

         

         

//      }

//       if(w%2!=0 || v>w || w<2) // if we keep this loop within the while loop then it will not execute
//          {
//              cout<<"INVALID INPUT"<<endl;
            
//          }


//      return 0;



// }





// Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

// Note : 1st element of the array should be considered in the count of the result.

// For example,
// Arr[]={7,4,8,2,9}
// As 7 is the first element, it will consider in the result.
// 8 and 9 are also the elements that are greater than all of its previous elements.
// Since total of  3 elements is present in the array that meets the condition.
// Hence the output = 3


// int arraycount(int a[], int n)


// {

//     int count=0 ;

//     for(int i=0;i<n;i++)
    
//     {
//        if(a[i]<a[i+1])

//        {
//         a[i]=a[i+1];

//         count++;
//        }
//        else
       
//        {
//           a[i+1]=a[i];

//        }


//     }

//     cout<<count<<endl;

//     return 0;


// }


// int main()

// {
   
//    int n;
//    cin>>n;

//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//     cin>>a[i];
//    }

//    return arraycount(a,n);
   

// }





/*A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.

Example 1:
Input :

5    -> Value of T
[7,0,5,1,3]  -> E[], Element of E[0] to E[N-1], where input each element is separated by new line 
[1,2,1,3,4]   -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :
8     -> Maximum number of guests on cruise at an instance.*/





// int present(int e[], int l[], int n)

// {
//     int sum=0;
//     vector<int> v;

//     for(int i=0;i<n;i++)
//     {

//       sum=sum+e[i]-l[i];
//       v.push_back(sum);

//     }

//     /*for(int i=0;i<n;i++)
//     {
//         cout<<v[i];
//     }*/


//     int max=0, index;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]>max)
//         {
//             max=v[i];
//             index=i+1; // Here index starts from 0 so +1 makes it correct value
//         }

       
//     }

//     cout<<"maximum no of guest at an instance is:"<<max<<" "<<"at hour:"<<index<<endl; 





//     return 0;

// }



// int main()

// {
//    int n;
//    cin>>n;

//    int e[n];
//    int l[n];

//    for(int i=0;i<n;i++)

//    {
//     cin>>e[i];
//    }

//    cout<<endl;

//    for(int i=0;i<n;i++)

//    {
//     cin>>l[i];
//    }


//    return present(e,l,n);



// }






/*Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:

###***   -> Value of S
Output :

0   → number of * and # are equal

*/


// int validstring(string s)
// {
   
//    sort(s.begin(),s.end());

//    int star=0;
//    int hash=0;

//    for(int i=0;i<s.size();i++)
//    {
//     if(s[i]=='*')
//      {
//       star++;
//      }

//      if(s[i]=='#')
//      {
//       hash++;
//      }

//   }


//   if(star>hash)
//   {
//     return 1;
//   }

//   else if(hash>star)
//   {
//     return -1;
//   }

//   else
//   {
//     return 0;
//   }


// }

// int main()
// {
//   string str;
//   getline(cin,str);

//   cout<<validstring(str)<<endl;

//   return 0;



// }


/*
There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.

Output should give number of Candies sold and updated number of Candies in JAR.

If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)

Input Value
3
Output Value
NUMBER OF CANDIES SOLD : 3
NUMBER OF CANDIES AVAILABLE : 7

Example : (N=10, k<=5)

Input Value
0
Output Value
INVALID INPUT NUMBER OF
CANDIES LEFT : 10
*/



//  int main()
//  {


//   int n=10;
//   int k=3;

//   int input;
//   cin>>input;

//   if(input!=0 && input<n && (n-input)>=k)
//   {
//     cout<<"NUMBERS OF CANDIES :"<<input<<endl;
//     cout<<"numbers of left candies:"<<n-input<<endl;
//   }


//   else
//   { 
//     if(input==0)
//      {
//           cout<<"invalid input"<<endl;
//           cout<<"numbers of left candies:"<<n-input<<endl;
//      }
     

//     else
//     {
//         cout<<"invalid input"<<endl;
//     }
    
//   }

//   return 0;

// }


/*The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and keyy =2, then 5 will be replaced by 7, “-”(minus sign) will remain as it is. Key value less than 0 should result into “INVALID INPUT”

Example 1:
Enter your PlainText: All the best
Enter the Key: 1

The encrypted Text is: Bmm uif Cftu

Write a function CustomCaesarCipher(int key, String message) which will accept plaintext and key as input parameters and returns its cipher text as output.
*/

// string cipher(int key, string s)
// {
//     if(key==0)
//     {
//       cout<<"invalid input"<<endl;

//       return s;
//     }

    
//     else
//     {
//         for(int i=0;i<s.size();i++)
//         {
//           if(isdigit(s[i]))
//           {
//             if(s[i]+key<=57)
//             {
//               s[i]=s[i]+key;
//             }
//             else
//             {
//                 int x = (s[i]+key)-57;
//                 s[i]=47+x;
//             }
//           }
           
         
//           else if(s[i]>=65 && s[i]<=90)
//           {
//             if(s[i]+key<=90)
//             {
//               s[i]=s[i]+key;
//             }
//             else
//             {
//                 int x = (s[i]+key)-90;
//                 s[i]=64+x;
//             }
//           }

//           else if(s[i]>=97 && s[i]<=122)
//           {
//             if(s[i]+key<=122)
//             {
//               s[i]=s[i]+key;
//             }
//             else
//             {
//                 int x = (s[i]+key)-122;
//                 s[i]=96+x;
//             }
//           }
//         }
//     }

//    return  s;

// }



// int main()
// {

// string message;
// getline(cin,message);


/*String should be declared before int , otherwise will get an error*/


//   int n;
//   cin>>n;
  



//   cout<<cipher(n,message)<<endl;
  
//   return 0;


// }



// //// METHOD -2  ////


// string cipher(int key, string s) {
//     if (key == 0) {
//         cout << "invalid input" << endl;
//         return s;  // Return the original string if key is invalid
//     }

//     for (int i = 0; i < s.size(); i++) {
//         if (isdigit(s[i])) {
//             s[i] = (s[i] + key - 48) % 10 + 48;  // Wrap-around for digits
//         } else if (isalpha(s[i])) {
//             int base = s[i] >= 'a' ? 'a' : 'A';  // Determine base for letters
//             s[i] = (s[i] + key - base) % 26 + base;  // Wrap-around for letters
//         }
//     }

//     return s;
// }

// int main() {
    
//      string message;
//     getline(cin,message);
    
    
//     int n;
//     cin >> n;

   

//     cout << cipher(n, message) << endl;

//     return 0;
// }







/*A City Bus is a Ring Route Bus which runs in circular fashion.That is, Bus once starts at the Source Bus Stop, halts at each Bus Stop in its Route and at the end it reaches the Source Bus Stop again.
If there are n  number of Stops and if the bus starts at Bus Stop 1, then after nth Bus Stop, the next stop in the Route will be Bus Stop number 1 always.
If there are n stops, there will be n paths.One path connects two stops. Distances (in meters) for all paths in Ring Route is given in array Path[] as given below:
Path = [800, 600, 750, 900, 1400, 1200, 1100, 1500]
Fare is determined based on the distance covered from source to destination stop as  Distance between Input Source and Destination Stops can be measured by looking at values in array Path[] and fare can be calculated as per following criteria:

If d =1000 metres, then fare=5 INR
(When calculating fare for others, the calculated fare containing any fraction value should be ceiled. For example, for distance 900n when fare initially calculated is 4.5 which must be ceiled to 5)
Path is circular in function. Value at each index indicates distance till current stop from the previous one. And each index position can be mapped with values at same index in BusStops [] array, which is a string array holding abbreviation of names for all stops as-
“THANERAILWAYSTN” = ”TH”, “GAONDEVI” = “GA”, “ICEFACTROY” = “IC”, “HARINIWASCIRCLE” = “HA”, “TEENHATHNAKA” = “TE”, “LUISWADI” = “LU”, “NITINCOMPANYJUNCTION” = “NI”, “CADBURRYJUNCTION” = “CA”

Given, n=8, where n is number of total BusStops.
BusStops = [ “TH”, ”GA”, ”IC”, ”HA”, ”TE”, ”LU”, ”NI”,”CA” ]

Write a code with function getFare(String Source, String Destination) which take Input as source and destination stops(in the format containing first two characters of the Name of the Bus Stop) and calculate and return travel fare.

Example 1:
Input Values
ca
Ca
Output Values
INVALID OUTPUT

Example 2:
Input Values
NI
HA
Output Values
23.0 INR
Note: Input and Output should be in format given in example.
Input should not be case sensitive and output should be in the format   INR*/




int fare(string a, string b, string c , string d)

{  int f;
   if(c==d)
   {
      cout<< " invalid i/p"<<endl;

   }

   else
   {
       int n=a.size();
       for(int i=0;i<n;i++)
       {
          if(a[i]== c)
          {

            int m=i;

          }
       }
     
   }
   
}

int main()
{
   string s;
   getline(cin,s);

   string d;
   getline(cin,d);

   string inp1;
   cin>>inp1;

   string inp2;
   cin>>inp2;


   return 0;

}



























































/*Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:
INPUT VALUES

92
95
95
92
90
92
90
92
90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3

Note:
Input should be 9 integer values representing oxygen levels entered in order as

Round 1

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”
*/


// int fit(int a, int b)
// {

//   vector<int> v;

//   int x;

//   for(int i=0;i<a;i++)
//   {
//     for(int j=0;j<b;j++)
//     {
//       cin>>x;
//       v.push_back(x);

//     }
//   }

//   // for(int i=0;i<9;i++)
//   // {
//   //   cout<<v[i]<<endl;
//   // }

//   vector<int> ox;
//   int sum=0;
//   int z;
//   int y=0;
//   int m=0;

//   while(y<3)
//   {
//     for(z=m;z<z+3;z++)
//     {
//       sum=sum+v[z];
//     }

//     int avg=sum/3;
//     ox.push_back(avg);
//     sum=0;
//     m=z+3;
    
//     y++;
    
//   }

//   for(int i=0;i<3;i++)
//   {
//     cout<<ox[i]<<endl;
//   }

//   int n = ox.size();

//   return ox[0];

// }


// int main()
// {
//   int t=3;
//   int round=3;

//   cout<<fit(round,t)<<endl;

//   return 0;


// }





































/*At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: n 
g: 2 balloons
b:  2 balloons
y : 2 balloons1 balloo
Hence , r is only the balloon which is odd in number.
Example 2:
Input:

10 -> Value of N
[a,b,b,b,c,c,c,a,f,c] -> B[], elements B[0] to B[N-1] where input each element is separated by new line.
Output :
b-> ‘b’ colour balloon is present odd number of times in the bunch.

Explanation:
From the input array above:

a: 2 balloons
b: 3 balloons 
c: 4 balloons 
f: 1 balloons 
Here, both ‘b’ and ‘f’ have odd number of balloons. But ‘b’ colour balloon occurs first.
Hence , b is the output.

Input Format for testing
The candidate has to write the code to accept: 2 input 

First input: Accept value for number of N(Positive integer number).
Second Input : Accept N number of character values (B[]), where each value is separated by a new line.
Output format for testing
The output should be a single literal (Check the output in example 1 and example 2)

Constraints:

3<=N<=50
B[i]={{a-z} or {A-Z}}

*/


//int oddocrnc(string s, int n)

// {
//    int count=1;
//    vector<char> v;
//    for(int i=0;i<n;i++)
//    {
//      if(s[i]!='*')
//      {
//         for(int j=i+1;j<n;j++)
//         {
//           if(s[i]==s[j])
//           {
//               count++;
//               s[j]='*';
//           }
//         }
//           if(count>1)
//           {
//             cout<<s[i]<<" "<<count<<endl; 
//              //v.push_back(s[i]);
//           }
        
//      }
//    }
  
//   // for(int i=0;i<v.size();i++)
//   // {
//   //   cout<<v[i];
//   // }
  

//     return 0;

//   }



// int main()
// {
//   int n;
//   cin>>n;

//   string s;
//   for(int i=0;i<n;i++)
//   {
//     cin>>s[i];
//   }

//   cout<<oddocrnc(s,n)<<endl;

//   return 0;


// }









































   /*Fountains are installed at every position along a one-dimensional garden of length n. Array locations[] represents the coverage limit of these fountains. The ith fountain (where 1sisn) has a coverage limit of locations[i] that can range from the position max((i – locations[i]), 1) to min((i + locations[i]), n ). In other words, the h fountains do not reach outside the boundaries of the garden. In the beginning,all the fountains are switched off. Determine the minimum number of fountains that need to be activated to cover the n length garden by water.

Example

n = 3
locations[] = {0, 2, 1}, then
For position 1: locations[1] = 0, max((1 – 0),
1) to mini (1+0), 3) gives range = 1 to 1
For position 2: locations[2] = 2, max((2-2),
1) to min( (2+2), 3) gives range = 1 to 3
For position 3: locations[3] = 1, max( (3-1),
1) to min( (3+1), 3) gives range = 2 to 3
For the entire length of this garden to be covered, only the fountain at position 2 needs to be activated.

Function Description

Complete the function fountainActivation in the editor below.

fountainActivation has the following Parameter:

int locations[n]: the fountain locations
Returns

int: the minimum number of fountains that must be activated
Constraints

1<_n<_ 10^5
 O<_locations[i] <_ mini (n,100) (where 1 <_1<_10^5)
► Input Format For Custom Testing

Sample Case 0

Sample Input For Custom Testing

3 ->locations[] size n = 3
1 ->locations[] [1, 1, 1
1 ->Sample Output
Sample Output

1
Explanation

Here, locations = {1, 1, 1}

For position 1: locations[1] = 1, maxi (1 -1), 1) to min((1+1), 3) gives range = 1 to 2
For position 2: locations[2] = 1, max( (2 -1), 1) to min( (2+1), 3) gives range = 1 to 3
For position 3: locations[3] = 1, max((3 -1), 1) to min((3+1), 3) gyes range = 2 to 3
If the 2nd fountain is active, the range from position 7 to 3 will be covered. The total number of fountains needed is 1.*/








// int fountainactivation(int locations[], int n)
// {
//   int t=1;
//   while(t<=n)
//   {
//     int range;
//     int range1;

//     vector<vector<int>> v;

//    for(int i=1;i<=n;i++)
//    {
//     range=max((i - locations[i]), 1);
//     range1=min((i + locations[i]), n );
    

//     for(int a=0;a<v.size();a++)
//     {
//       for(int j=0;j<v[a].size();j++)
//       {
//         cin>>v[a][j];
//       }
      
//     }

    

//    }

//      for(int a=0;a<v.size();a++)
//     {
//       for(int j=0;j<v[a].size();j++)
//       {
//         cout<<v[a][j];
//       }
//       cout<<endl;
//     }




//   }

//   return t;

// }












// int main()
// { int n;
//   cin>>n;

//   int locations[n];

//   for(int i=1;i<=n;i++)
//   {
//     cin>>locations[i];
//   }

//   fountainactivation(locations,n);


// return 0;
// }























































































































/*
At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon 
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
Example 2:
Input:

10 -> Value of N
[a,b,b,b,c,c,c,a,f,c] -> B[], elements B[0] to B[N-1] where input each element is separated by new line.
Output :
b-> ‘b’ colour balloon is present odd number of times in the bunch.

Explanation:
From the input array above:

a: 2 balloons
b: 3 balloons 
c: 4 balloons 
f: 1 balloons 
Here, both ‘b’ and ‘f’ have odd number of balloons. But ‘b’ colour balloon occurs first.
Hence , b is the output.

Input Format for testing
The candidate has to write the code to accept: 2 input 

First input: Accept value for number of N(Positive integer number).
Second Input : Accept N number of character values (B[]), where each value is separated by a new line.
Output format for testing
The output should be a single literal (Check the output in example 1 and example 2)

Constraints:

3<=N<=50
B[i]={{a-z} or {A-Z}}

*/























































































// Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
// Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

// (*>#): positive integer
// (#>*): negative integer
// (#=*): 0
// Example 1:
// Input 1:

// ###***   -> Value of S







































































       /////// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist. /////




      //  int second(int a[], int n)


      //  {
      //       //  int min=a[0];
      //       //  int max=0;

      //       //  for(int i=0;i<n;i++)
      //       //  {
      //       //     if(a[i]>max)
      //       //     {
      //       //       a[i]=max;
      //       //     }

                
      //       //  }

      //       //  for(int i=0;i<n;i++)
      //       //  {
      //       //   if(a[i]<min)
      //       //   {
      //       //     min=a[i];
      //       //   }
      //       //  }



      //       for(int i=0;i<n;i++)

      //       {

      //          for(int j=0;j<n;j++)
      //          {

      //             if(a[i]>a[j])
      //             {
      //               int tem=0;
      //               tem=a[i];
      //               a[i]=a[j];
      //               a[j]=tem;

      //             }

      //          }

      //       }






      //        return 0;
      

      //  }








































































































































// int balloon(char b[],int n,int length)

// {
//    int count=1;
//    //int lenght=sizeof(b)/sizeof(b[0]);
//    int fr[length];

//    for(int i=0;i<n;i++)

//    {

//      for(int j=i+1;j<n;j++)
//      {
       
//        if(b[i]==b[j])
//        {
//          count++;
        
//          fr[j]=-1;
        

//        }
       
//      }

//      if(fr[i]!=-1)
//      {
//         fr[i]=count;
//      }

    

//    }
    
   
//    for(int i=0;i<length;i++)

//      {
//         if(fr[i]!=-1)
//         {
//         cout<<fr[i];
//         }
//      }
    


//    return 0;
    
// }



// int main()
// {

//     int n;
//     cin>>n;

//     char b[n];
//     for(int i=0;i<n;i++)
//     {

//         cin>>b[i];
//     }

//     int length=sizeof(b)/sizeof(b[0]);


//     return balloon(b,n,length);
// }