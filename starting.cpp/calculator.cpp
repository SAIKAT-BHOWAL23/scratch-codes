#include<iostream>
#include<cmath>

using namespace std;

int main()

{

float n1, n2;
float  d =n1/n2;
cout<< "enter 2 numbers"<<endl;
cin>>n1>>n2;

cout<<n1+n2<<endl;

cout<<n1-n2<<endl;

cout<<n1*n2<<endl;

cout<<d<<endl;

//cout<<n1%n2<<endl; // "%" doesnt work for float data type


cout<< fmax(n1,n2)<<endl;

cout<< pow(n1,n2)<<endl;

return 0;



}