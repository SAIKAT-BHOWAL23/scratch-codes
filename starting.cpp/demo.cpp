#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;



// // Function to find the element
// // occurring odd number of times
// int getOddOccurrence(char arr[], int arr_size)
// {
//     vector<char> v;
//     for (int i = 0; i < arr_size; i++) {

//         int count = 0;

//         for (int j = 0; j < arr_size; j++) {
//             if (arr[i] == arr[j])
//                 count++;
//         }
//         if (count % 2 != 0)
//         {
//           v.push_back(arr[i]);
//         }

//         for(int i=0;i<arr_size;i++)
//         {
//           cout<<v[i];
//         }
            
//     }
//     return 0;
// }

// // driver code
// int main()
// {
//      int a;
//      cin>>a;
//      char arr[a];
//      for(int i=0;i<a;i++)
//      {
//       cin>>arr[i];
//      }
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Function calling
//     cout << getOddOccurrence(arr, n);

//     return 0;
// }




// // Return the sum of elements from index 0 to (idx - 1)
// #include<stdio.h>
// int left_side_sum(int a[], int n, int idx)
// {
//     int sum = 0, i;
//     for(i = 0; i < idx; i++)
//     {
//         sum += a[i];
//     }

//     return sum;
// }

// // Return the sum of elements from index (idx + 1) to (n - 1)
// int right_side_sum(int a[], int n, int idx)
// {
//     int sum = 0, i;
//     for(i = idx + 1; i < n; i++)
//     {
//         sum += a[i];
//     }

//     return sum;
// }

// // returns -1 if no equilibrium index found
// int findEquilibriumIndex(int a[], int n)
// {
//     // Type your code here
//     int i;
//     for(i = 0; i < n; i++)
//     {
//         if(left_side_sum(a, n, i) == right_side_sum(a, n, i))
//         {
//             return i;
//         }
//     }
   
//     return -1;
// }

// int main() {
              
//    int a[10], n, i;

//    scanf("%d", &n);

//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &a[i]);
//    }

//    int equiIndex = findEquilibriumIndex(a, n);
//    if(equiIndex != -1) {
//        printf("%d", a[equiIndex]);
//    }

//    return 0;
// }





// class Student
// {
// private:
// int roll;
// string name;
// int mathMarks;
// int phyMarks;
// int chemMarks;
// public:
// Student(int r,string n,int m,int p,int c)
// {
// roll=r;
// name=n;
// mathMarks=m;
// phyMarks=p;
// chemMarks=c;
// }
// int total()
// {
// return mathMarks+phyMarks+chemMarks;
// }
// char grade()
// {
// float average=total()/3;
// if(average > 60)
// return 'A';
// else if(average>=40 && average<60)
// return 'B';
// else
// return 'C';

// }
// };
// int main()
// {
// int roll;
// string name;
// int m,p,c;
// cout<<"Enter Roll number of a Student: ";
// cin>>roll;
// cout<<"Enter Name of a Student:";
// cin>>name;
// cout<<"Enter marks in 3 subjects";
// cin>>m>>p>>c;
// Student s(roll,name,m,p,c);
// cout<<"Total Marks:"<<s.total()<<endl;
// cout<<"Grade of Student:"<<s.grade()<<endl;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     private:
//         int roll;
//         string name;
//         int marks1, marks2, marks3;

//     public:
//         Student (int r, string nam, int m1, int m2, int m3) {
//             roll = r;
//             name = nam;
//             marks1 = m1;
//             marks2 = m2;
//             marks3 = m3;
//         }

//         int totalMarks() {
//             return marks1 + marks2 + marks3;
//         }

//         void grade() {
//             if((marks1 + marks2 + marks3) / 3 > 75)
//                 cout << "Grade A" << endl;
//             else
//                 cout << "Grade B" << endl;
//         }
// };

// int main() {
//     int roll;
//     string name;
//     int m1, m2, m3;

//     cin >> roll;
//     cin.ignore();  // to ignore the newline character after reading roll
//     getline(cin, name);
//     cin >> m1 >> m2 >> m3;

//     Student s1(roll, name, m1, m2, m3);

//     cout << "Total Marks: " << s1.totalMarks() << endl;
//     cout << "Grade: ";
//     s1.grade();

//     return 0;
// }





// #include<iostream>
// using namespace std;

// class Complex
// {
//     private:
//     int real;
//     int imaginary;

//     public:
    
//     Complex (int r=0, int i=0)  // When you create an instance of Complex with Complex temp;, it’s looking for a default constructor
//     {
//         real = r;
//         imaginary = i;
//     }
    
//     Complex operator+(Complex x)   
//     {
//         Complex temp;
//         temp.real = real + x.real;
//         temp.imaginary = imaginary + x.imaginary;
//         return temp;
//     }

//     void display()
//     {
//         cout << real << "+" << imaginary << "i" << endl;
//     }
// };                

// int main()
// {
//     int i1, i2, r1, r2;
//     cin >> i1 >> i2;
//     cin >> r1 >> r2;

//     Complex c1(r1, i1);
//     Complex c2(r2, i2);

//     Complex c3 = c1 + c2; // Add two complex numbers

//     c3.display(); // Display the result

//     return 0;
// }








// string fun(string s)
// {
//     vector<char> v;

//     //enum number{zero, one , two , three , four , five , six , seven , eight , nine, double , triple };

//     number num;

    // switch(num)
    // {
    //     case one :
    //     v.push_back(1);
    //     break;
    //     case two :
    //     v.push_back(2);
    //     break;
    //     case three :
    //     v.push_back(3);
    //     case four:
    //     v.push_back(4);
    //     case five :
    //     v.push_back(5);
    //     case six :
    //     v.push_back(6);
    //     case seven :
    //     v.push_back(7);
    //     case eight :
    //     v.push_back(8);
    //     case nine :
    //     v.push_back(9);
    //     case zero :
    //     v.push_back(0);


        
    // }

//     for(int i=0;i<9;i++)
//     {
//         if(s[i]=one)
//         v.push_back(1);
//         else if(s[i]=two)
//         v.push_back(2);
//         else if (s[i]=three)
//         v.push_back(3);
//         else if(s[i]=four)
//         v.push_back(4);
//         else if(s[i]=five)
//         v.push_back(5);
//         else if(s[i]=six)
//         v.push_back(6);
//         else if(s[i]=seven)
//         v.push_back(7);
//         else if(s[i]=eight)
//         v.push_back(8);
//         else if(s[i]=nine)
//         v.push_back(9);
//         else if (s[i]=double)
//         else
//         v.push_back(0);

        
//     }

   
// }

// int main()
// {
//     string number;
//     getline(cin,number);

//     cout<<fun(number)<<endl;


    
//     return 0;

// }


// #include <iostream>
// #include <map>
// #include <sstream>

// std::string convertPhoneNumber(std::string phone_number_in_words)

//  {
//     std::map<std::string, std::string> word_to_digit = {
//         {"zero", "0"},
//         {"one", "1"},
//         {"two", "2"},
//         {"three", "3"},
//         {"four", "4"},
//         {"five", "5"},
//         {"six", "6"},
//         {"seven", "7"},
//         {"eight", "8"},
//         {"nine", "9"}
//     };

//     std::istringstream iss(phone_number_in_words);
//     std::string word;
//     std::string result = "";

//     while (iss >> word) {
//         if (word == "double") {
//             iss >> word;
//             result += word_to_digit[word];
//             result += word_to_digit[word];
//         } else if (word == "triple") {
//             iss >> word;
//             result += word_to_digit[word];
//             result += word_to_digit[word];
//             result += word_to_digit[word];
//         } else {
//             result += word_to_digit[word];
//         }
//     }

//     return result;
// }

// int main() {
//     std::string phone_number_in_words; 
//     //getline(cin ,phone_number_in_words); //= "five eight double two double two four eight five six";
//     for(int i=0;i<phone_number_in_words.size();i++)
//     {
//         std::cin>>phone_number_in_words[i];
//     }
//     std::string phone_number_in_digits = convertPhoneNumber(phone_number_in_words);
//     std::cout << phone_number_in_digits << std::endl;  // Outputs: 5822224856
//     return 0;
// }



// #include <iostream>
// #include <map>
// #include <sstream>

// using namespace std;

// int main()

//  {
//     map<string, string> wordsToDigits = {{"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
//                                          {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}};

//     string input;
//     cout << "Enter the phone number in words: ";
//     getline(cin, input);

//     stringstream ss(input);
//     string word;
//     string output = "";

//     while (ss >> word) {
//         if (word == "double") {
//             ss >> word;
//             output += wordsToDigits[word];
//             output += wordsToDigits[word];
//         } else if (word == "triple") {
//             ss >> word;
//             output += wordsToDigits[word];
//             output += wordsToDigits[word];
//             output += wordsToDigits[word];
//         } else {
//             output += wordsToDigits[word];
//         }
//     }

//     cout << "The phone number in digits is: " << output << endl;

//     return 0;
// }


// #include <iostream>
// #include <map>
// #include <sstream>

// using namespace std;

// int main() {
//     map<string, string> wordsToDigits = {{"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
//                                          {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}};

//     string input;
//     while (true) {
//         cout << "Enter the phone number in words (or 'exit' to quit): ";
//         getline(cin, input);

//         if (input == "exit") {
//             break;
//         }

//         stringstream ss(input);
//         string word;
//         string output = "";

//         while (ss >> word) {
//             if (word == "double") {
//                 ss >> word;
//                 output += wordsToDigits[word];
//                 output += wordsToDigits[word];
//             } else if (word == "triple") {
//                 ss >> word;
//                 output += wordsToDigits[word];
//                 output += wordsToDigits[word];
//                 output += wordsToDigits[word];
//             } else {
//                 output += wordsToDigits[word];
//             }
//         }

//         cout << "The phone number in digits is: " << output << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string wordsToDigits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     string input;

//     while (true) {
//         cout << "Enter the phone number in words (or 'exit' to quit): ";
//         getline(cin, input);

//         if (input == "exit") {
//             break;
//         }

//         string word = "";
//         string output = "";

//         for (char c : input) {
//             if (c == ' ') {
//                 for (int i = 0; i < 10; i++) {
//                     if (word == wordsToDigits[i]) {
//                         output += to_string(i);
//                         break;
//                     }
//                 }
//                 word = "";
//             } else {
//                 word += c;
//             }
//         }

//         // Process the last word
//         for (int i = 0; i < 10; i++) {
//             if (word == wordsToDigits[i]) {
//                 output += to_string(i);
//                 break;
//             }
//         }

//         cout << "The phone number in digits is: " << output << endl;
//     }

//     return 0;
// }


















                                





//  int countduplicate(int a[],int n)

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













                         /////    ACCENTURE  QUESTIONS    //////


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





// void duplicate(string s, int n)
// {
//     vector<bool> visited(n, false);

//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//         {
//             int count=1;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(s[i]==s[j])
//                 {
//                     count++;
//                     visited[j]=true;
//                 }
//             }

//             if(count>1)
//             {
//                 cout<<s[i]<<":"<<count<<endl;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;

//     string str;
//     for(int i=0;i<n;i++)
//     {
//         cin>>str[i];

//     }

//     duplicate(str,n);

//     return 0;
// }





// //    int main()

// //    {
// //     int n;
// //     cin>>n;

// //     string str;
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>str[i];

// //     }

// //     return duplicate(str,n);
    

// //    }




// string MoveHyphen (string s, int n)
// {
//   int count = 0;
//   for (int i = 0; i < n;)
//     {
//       if (s[i] == '-')
// 	{
// 	  count++;
// 	  s.erase (i, 1);
// 	}
//       else
// 	i++;
//     }
//   while (count--)
//     {
//       s = '-' + s;
//     }
//   return s;
// }
// int main ()
// {
//   string s;
//   cin >> s;
//   int n = s.size ();
//   cout << MoveHyphen (s, n);
//   return 0;
// }



// char findOddColor(char B[], int N) {
//     unordered_map<char, int> frequencyMap;

//     for (int i = 0; i < N; i++) {
//         frequencyMap[B[i]]++;
//     }

//     for (char color : frequencyMap.keys()) {
//         if (frequencyMap[color] % 2 != 0) {
//             return color;
//         }
//     }

//     return ' ';
// }

// int main() {
//     int N;
//     cin >> N;

//     char B[N];
//     for (int i = 0; i < N; i++) {
//         cin >> B[i];
//     }

//     char oddColor = findOddColor(B, N);

//     if (oddColor != ' ') {
//         cout << oddColor << endl;
//     } else {
//         cout << "All are even" << endl;
//     }

//     return 0;
// }




// int findauto(string n)
// {
//     vector<int> v;
//     for(int i=0;i<n.length();i++)
//     {
//         v[n[i]-'0']++;
//     }

//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]!=n[i]-'0')

//         {
//             return 0;
//         }
//     }

//     int count=0;
//     for(int i=0;i<n.size();i++)
//     {
//         if(v[i]>0)
//         {
//             count++;
//         }
//     }

//       for(int i=0;i<v.size();i++)
//     {
//        cout<<v[i];
//     }


//     //cout<<count;

//     return count;

// }

// int main()
// {
//     string s;
//     cin>>s;


//   cout<<findauto(s)<<endl;


//     return 0;
// }
// int prime(int n)
// {    int x=0;
//     for(int i=2;i<=n;i++)
//     {
//          for(int j=2;j<n/2;j++)
//          {
//             if(i%j==0 && i/j!=1)
//             {
//                 break;
//             }

//             else
//             {
//               x+=i;
//               break;
//             }
//          }
//     }

//     return x;
// }

// int main()
// {
//   int n;
//   cin>>n;

//   cout<<prime(n);

//   return 0;



// }



#include<bits/stdc++.h>
using namespace std;
void ceaser(string s, int key)
{
    if(key==0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        for(int i=0; i< s.size(); i++)
        {
        
            if(isdigit(s[i]))
            {
                if(s[i]+key<=57)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 57;
                    s[i] = 47 + left;
                }
            }
            else if(s[i] >=65 && s[i]<=90)
            {
                if(s[i]+key<=90)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 90;
                    s[i] = 64 + left;
                }
            }
            else if(s[i] >=97 && s[i]<=122)
            {
                if(s[i]+key <=122)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 122;
                    s[i] = 96 + left;
                }
            }
        
        }
    }
    cout <<"The Encrypted Text is:"<< s;
}

int main ()
{
    string s;
    int key;
    
    cout<<"Enter the plain text :";
    getline(cin, s);
    
    cout<<"\nEnter the key :";
    cin>>key;
    
    ceaser(s, key);
    return 0;

}