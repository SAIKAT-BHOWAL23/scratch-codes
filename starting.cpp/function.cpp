// function is the colection of code to do any task in the programm

#include<iostream>

using namespace std;


void sayhello(string name, int age ) // its a null function  which will return nothing ...and we have to call the function within the main function 


// here within the void main() some parameters are passed so we can use those later
{

    cout<<"heeloooo users"<< name <<"your age is "<< age<<endl;
}
 
int main() // this is the main function which is by default called , and it always return something

{

sayhello("sss", 34); // here we call the void function to execute 
sayhello("rrr", 3);

sayhello("ddd", 4);
return 0;

}