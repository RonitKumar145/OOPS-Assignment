//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){

  
  int NUM1,NUM2;

  cout<<"enter 1st number: ";
  cin>>NUM1;

  cout<<"enter 2nd number: ";
  cin>>NUM2;

  int GreaterNum= (NUM1>NUM2)?NUM1:NUM2;     // using ternary operator to find the greater number

  cout<<"Greater number : "<<GreaterNum<<endl;

  return 0;

}