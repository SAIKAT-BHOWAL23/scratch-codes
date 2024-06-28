 /////    ACCENTURE  QUESTIONS    //////

#include<bits/stdc++.h>

using namespace std;







// int difference(int n )
// {
//     int sum_sqr=0;
//     for(int i=1;i<=n;i++)
//     {
//        sum_sqr+=i*i;
//     }

//     int sqr_sum=((n*(n+1))/2)*((n*(n+1))/2);

//     int diff=sqr_sum-sum_sqr;

    

//     return diff;

// }

// int main()
// {   int t;
//     cin>>t;
//     int n;
//      vector<int> v;

//     while(t--)
//    { 
//     cin>>n;
//     v.push_back(difference(n));
    
//    }

//    for(int i=0;i<v.size();i++)
//    {
//     cout<<v[i]<<endl;
//    }



  
  

   
//     return 0;
// }






      





/*def differenceofSum(n, m)

The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

Assumption:

n>0 and m>0
Sum lies between integral range
Example

Input
n:4
m:20
Output
90

Explanation

Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
Difference 150 – 60 = 90
*/



    //   int  differenceofsum(int n, int m)
    //   {
          
    //       int not_div=0;
    //       int div=0;

    //       for(int i=1;i<=m;i++)
    //       {
    //         if(i%n==0)
    //         {
    //             div+=i;
    //         }

    //         else
    //         {
    //             not_div+=i;
    //         }
    //       }

    //       if(div>not_div)
    //         {
    //              return div-not_div;
    //         }

    //      else
    //         {
    //             return not_div-div;
    //        }
             
    //   }

    //   int main()
    //   {
    //     int n;
    //     cout<<"n :";
    //     cin>>n;

    //     int m;
    //     cout<<"m :";
    //     cin>>m;


    //     cout<<differenceofsum(n,m)<<endl;

    //     return 0;



    //   }

















// int sqrfree(int n)
// {
//     vector<int> v;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             v.push_back(i);

//         }
//          int j;
//         for(int i=1, j=0;i<n/2, j<v.size();i++,j++)

//         {
//             if(v[j]/i==1)
//             {
                
//             }
//         }
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;


// }





/*int findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

Example:
Input:

arr: 12 3 14 56 77 13
num: 13
diff: 2
Output:
3

Explanation:
Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.
*/









// int findcount(int a[], int length, int num , int diff)
// {


//     int count=0;
    
//     for(int  i=0;i<length;i++)
//     {
//         if(((a[i]-num)<=diff) && (((a[i]-num)>(-diff))  ))   // we can use this also --"if (abs (arr[i] - num) <= diff)""
//         {
//            count++;
//         }

//     }

//     return count>0 ? count: -1;

// }



// int main()
// {  int length;
//      cin>>length;
     
//       int a[length];
//       for(int i=0;i<length;i++)
//       {
//         cin>>a[i];
//       }

//       int num;
//       cout<<"num :"<<endl;
//       cin>>num;

//       int diff;
//       cout<<"diff :"<<endl;
//       cin>>diff;

//      

    
      
//       cout<<findcount(a,length,num, diff)<<endl;

//       return 0;


// }






/*def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
*/






// int largesmallsum(int arr[], int n)
// {
//      vector<int> even;
//      vector<int > odd;
     
//      if(n==0 || n<=3)
//       {
//         return 0;
//      }
     
     
   

//      for(int i=0;i<n;i++)
//      {
//          if(i%2==0)
//          {
//             even.push_back(arr[i]);
//          }

//          else
//          {
//             odd.push_back(arr[i]);
//          }
//      }


//      sort(even.begin(), even.end());   // or we can also use "sort (evenPos.rbegin (), evenPos.rend ());"  for sorting in descending order
//      sort(odd.begin(), odd.end());

//      int sum = even[(even.size()-2)]+odd[1];

//       return sum;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];

//     }

//     cout<<largesmallsum(arr, n)<<endl;

//     return 0;

// }




/*def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range
Example

Input

sum:9

size of Arr = 7

Arr:5 2 4 3 9 7 1

Output

2

Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2
*/



// int productsmallestpair(int sum , int arr[], int n)
// {
//      int ans;
   
   
//     sort(arr, arr+n);
//     int j=arr[0];
//     int k=arr[1];
    
//        if(n<2)
//        {
//          ans =-1;
//        }   

//        else
//        {

//           if((k+j)<=sum)
//           {
//             ans= (k*j);
//           }

//           else
//           {
//              ans= 0;
//           }

//        }

//   return ans;
// }

// int main()

// {
//     int sum;
//     cin>>sum;

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++)
    
//     {
//         cin>>a[i];

//     }
//    cout<<productsmallestpair(sum,a,n);

//    return 0;

// }






/*char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
*/





// char movehyphen(string s, int n)
// {
//   string v1;
//   string v2;

//   for(int i=0;i<n;i++)
//   {
//     if(s[i]=='-')
//     {
//        v1=v1+s[i];

//     }
     
//     else
//     {   
//         v2=v2+s[i];
//     }

//   }
  

//   cout<<v1+v2<<endl;

//    return 0;

// }

// int main()
// {
//     string str;
//     getline(cin,str);

//     int n=str.size();
//     cout<<movehyphen(str,n)<<endl;

//     return 0;
    

// }


/*A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to-left one digit at a time

You are required to implement the following function.

Int NumberOfCarries(int num1 , int num2);

The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and return  the total number of carries generated while adding digits of two numbers ‘num1’ and ‘ num2’.

Assumption: num1, num2>=0

Example:

Input
Num 1: 451
Num 2: 349
Output
2
Explanation:

Adding ‘num 1’ and ‘num 2’ right-to-left results in 2 carries since ( 1+9) is 10. 1 is carried and (5+4=1) is 10, again 1 is carried. Hence 2 is returned.

*/

// int NumberOfCarries(int num1 , int num2)
// {
//     int carry=0;
//     int count=0; 
    
//     int r1;
//     int r2;
    
//     while(num1>0 && num2>0)
//   {

//     r1=num1%10;
//     r2=num2%10;
   

//     num1=num1/10;
//     num2=num2/10;

    
//     if(((r1+r2)+carry)>9)
//     {    
//          carry=(r1+r2)-9;
//          count++;
//     }

    

//   }

//   return count;


// }

// int main()
// {
//     int num1;
//     cin>>num1;

//     int num2;
//     cin>>num2;

//     cout<<NumberOfCarries(num1,num2);

//     return 0;

// }



/*Void *ReplaceCharacter(Char str[], int n, char ch1, char ch2);

The function accepts a string  ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments . Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in original string are replaced by ‘ch2’ and all occurrences of ‘ch2’  in original string are replaced by ‘ch1’.

Assumption: String Contains only lower-case alphabetical letters.

Note:

Return null if string is null.
If both characters are not present in string or both of them are same , then return the string unchanged.
Example:

Input:
Str: apples
ch1:a
ch2:p
Output:
paales
Explanation:

‘A’ in original string is replaced with ‘p’ and ‘p’ in original string is replaced with ‘a’, thus output is paales.
*/

// void Replacecharacter(string s, int n , char ch1, char ch2)
// {

//     if(n==0)
//     {
    

//     }

//     else
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]==ch1)
//             {
//                 s[i]=ch2;
//             }

//             else if(s[i]==ch2)
//             {
//                 s[i]=ch1;
//             }


//         }
//     }

//     cout<<s<<endl;

// }


// int main()
// {
//     string str;
//     getline(cin,str);

//     int n;
//     n=str.length();

//     char ch1,ch2;
//     cin>>ch1;
//     cin>>ch2;

//   Replacecharacter(str,n,ch1,ch2);

//     return 0;
// }


/*Int OperationChoices(int c, int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

( a+ b ) , if c=1
( a – b ) , if c=2
( a * b ) ,  if c=3
(a / b) ,  if c =4
Assumption : All operations will result in integer output.

Example:

Input
c :1
a:12
b:16
Output:
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.
*/



// int operation_choice(int a, int b, int c)
// {
//     if(c==1)
//     {
//         return a+b;

//     }

//     else if(c==2)
//     {
//         return a-b;

//     }

//     else if(c==3)
//     {
//         return a*b;

//     }

//     else
//     {
//         return a/b;
//     }
// }

// int main()
// {
//    int a,b,c;
//    cin>>a;
//    cin>>b;
//    cin>>c;

//    cout<<operation_choice(a,b,c)<<endl;

//    return 0;

// }




/*An Autobiographical Number is a number N such that the first digit of N represents the count of how many zeroes are there in N, the second digit represents the count of how many ones are there in N and so on.

You are given a function, def FindAutoCount(n):

The function accepts string “n” which is a number and checks whether the number is an autobiographical number or not. If it is, an integer is returned, i.e. the count of distinct numbers in ‘n’. If not, it returns 0.

Assumption:

The input string will not be longer than 10 characters.
Input string will consist of numeric characters.
Note:

If string is None return 0.

Example:

Input:

n: “1210”

Output:

3

Explanation:

0th position in the input contains the number of 0 present in input, i.e. 1, in 1st position the count of number of 1s in input i.e. 2, in 2nd position the count of 2s in input i.e. 1, and in 3rd position the count of 3s i.e. 0, so the number is an autobiographical number.

Now unique numbers in the input are 0, 1, 2, so the count of unique numbers is 3. So 3 is returned.
*/


// int findauto(string n)
// {
//     int v[10]={0};
//     for(int i=0;i<n.length();i++)
//     {
//         v[n[i]-'0']++;
//     }
    
    
//     int count=0;
//     for(int i=0;i<10;i++)
//     {
//         if(v[i]>0)
//         {
//             count++;
//         }
//     }

//     for(int i=0;i<n.length();i++)
//     {
//         if(v[i]=n[i]-'0')

//         {
//             return count;
//         }
        
//         else
//         {
//             return 0;
//         }
//     }
    
// }


// int main()

// {
//     string s;
//     cin>>s;


//     cout<<findauto(s)<<endl;


//     return 0;
// }



/*You are given a function,

Int MaxExponents (int a , int b);

You have to find and return the number between ‘a’ and ‘b’ ( range inclusive on both ends) which has the maximum exponent of 2.

The algorithm to find the number with maximum exponent of 2 between the given range is

Loop between ‘a’ and ‘b’. Let the looping variable be ‘i’.
Find the exponent (power) of 2 for each ‘i’ and store the number with maximum exponent of 2 so faqrd in a variable , let say ‘max’. Set ‘max’ to ‘i’ only if ‘i’ has more exponent of 2 than ‘max’.
Return ‘max’.
Assumption: a <b

Note: If two or more numbers in the range have the same exponents of  2 , return the small number.

Example

Input:
7
12
Output:
8
Explanation:

Exponents of 2 in:

7-0

8-3

9-0

10-1

11-0

12-2

Hence maximum exponent if two is of 8.
*/


// int maxexponent(int n)
// {
//  int count=0;
 
//   while(n%2==0 && n!=0)
//    {
//        n=n/2;
//        count++;
//    }
    
//    return count;
// }

// int result(int a, int b)
// {
//     int max=0,num=0;

//     for(int i=a;i<=b;i++)
//     {
//        int temp=maxexponent(i);

//        if(temp>max)
//        {

//          max=temp;
//          num=i;

//        }
//     }

//     return num;

// }

// int main()
// {
//     int a,b;
//     cin>>a;
//     cin>>b;

//     cout<<result(a,b);
//     return 0;


// }



