//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream>

using namespace std; 
int main(){
  char character;                                    // Character value declaration
  int ASCIIvalue;

  cout<<"enter character to find ASCII value: ";       //ASCII stands for American Standard Code for Information Interchange
  cin>>character;                                     

  ASCIIvalue = character;                                       // conversion happens here

  cout<<"ASCII value: "<<character<<" = "<<ASCIIvalue<<endl;                  // to display character ASCII value

  return 0;
}