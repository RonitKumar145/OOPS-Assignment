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
  // bitwise operations                               bitwise operators
  cout<<"Bitwise AND: "<<(NUM1&NUM2)<<endl;          // '&' for bitwise AND

  cout<<"Bitwise OR : "<<(NUM1|NUM2)<<endl;          // ' | ' for bitwise OR

  cout<<"Bitwise XOR : "<<(NUM1^NUM2)<<endl;         // ' ^ ' for bitwise XOR

  cout<<"Bitwise NOT: "<<(~NUM1)<<endl;              // '~' for bitwise NOT

  cout<<"Bitwise LEFT SHIFT: "<<(NUM1<<1)<<endl;  // '<<' for bitwise left shift

  cout<<"Bitwise RIGHT SHIFT: "<<(NUM1>>1)<<endl; // '>>' for bitwise right shift


  return 0 ;

}