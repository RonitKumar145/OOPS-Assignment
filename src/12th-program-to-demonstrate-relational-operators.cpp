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

  //relatonal operations                              // relational operators  gives output in boolean data type(0 or 1)

  cout<<"Equal to: "<<(NUM1==NUM2)<<endl;             // "==" for equal to realtional operator
  cout<<"Not equal to: "<<(NUM1!=NUM2)<<endl;         // "!=" for not equal to realtional operator
  cout<<"Greater than: "<<(NUM1>NUM2)<<endl;          // ">" for greater than realtional operator
  cout<<"Lesser than: "<<(NUM1<NUM2)<<endl;           // "<" for lesser than realtional operator
  cout<<"Greater orequal to: "<<(NUM1>=NUM2)<<endl;   // ">=" for greater or equal to realtional operator
  cout<<"Lesser or equal to: "<<(NUM1<=NUM2)<<endl;   // "<=" for lesser or equal to realtional operator

  return 0;


}