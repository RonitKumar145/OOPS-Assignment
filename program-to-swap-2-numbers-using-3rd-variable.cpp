//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){

  int num1, num2, num3;                      // num1, 2 & 3 to declare variables.
  cout<<"enter 1st number :";
  cin>>num1;                                    //to take input from user.
  cout<<"enter 2nd number :";
  cin>>num2;
  
  cout<<"before swapping:"<<endl;              // display before swapping
  cout<<" 1st number :"<<num1<<endl;
  cout<<" 2nd number :"<<num2<<endl;

  num3 = num1;
  num1 = num2;                                 // swapping using 3rd number
  num2 = num3;

  cout<<"after swapping:"<<endl;              // diplay after swapping

  cout<<"1st number:"<<num1<<endl;

   cout<<"2nd number:"<<num2<<endl;

   return 0;


}