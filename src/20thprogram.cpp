//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){

  int num;

  cout<<"enter number: ";
  cin>>num;

  // using ternary operator

  string result = (num>0)?"positive":(num<0)?"negative":"zero";

  cout<<num<<" = "<<result<<endl;

  return 0;
}