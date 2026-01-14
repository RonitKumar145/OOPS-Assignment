//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){

  float celsiusTemp, fahreneitTemp;              // variables to store c and f temperatures

  cout<<"enter temperature in celsius: ";
  cin>>celsiusTemp;

  fahreneitTemp= (celsiusTemp*9/5)+32;           // fromula => F=(C*9/5)+32

  cout<<"Temperature in Fahrenheit: "<<fahreneitTemp<<endl;

  return 0;
}