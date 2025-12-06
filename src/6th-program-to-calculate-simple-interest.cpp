//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){
  float principleAMT, interestRate, timePeriod, simpleInterest;                   // declaring variable

  cout<<"enter principle amount: ";
  cin>>principleAMT;

  cout<<"enter rate of interest: ";
  cin>>interestRate;

  cout<<"enter time in years: ";
  cin>>timePeriod;

  simpleInterest=(principleAMT*interestRate*timePeriod) / 100;             // simple interest => (p*r*t)/100

  cout<<"simple interest: "<<simpleInterest<<endl;

  return 0;



}