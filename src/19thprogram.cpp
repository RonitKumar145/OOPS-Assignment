//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){
  int year ;

  cout<<"enter year to check for leap year or not : ";
  cin>>year;

  //using ternary operator to find the solution
  //a leap year is divisible by 4 leaving no remainder, not divisible by 100 or 400

  string result =((year % 4==0 && year % 100 !=0) || (year % 400==0))?"leap year":"not leap year";

  cout<<year<<" = "<<result<<endl;

  return 0;
}