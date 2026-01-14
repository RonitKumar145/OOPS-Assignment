//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 
#include<algorithm>                    // libraies used to perform swap function

using namespace std; 
int main(){

  int num1, num2;                      // num1, 2 to declare variables.
  cout<<"enter 1st number :";
  cin>>num1;                                    //to take input from user.
  cout<<"enter 2nd number :";
  cin>>num2;
  
  cout<<"before swapping:"<<endl;              // display before swapping
  cout<<" 1st number :"<<num1<<endl;
  cout<<" 2nd number :"<<num2<<endl;

  swap(num1,num2);                             // swapping using swap function


  cout<<"after swapping:"<<endl;              // diplay after swapping

  cout<<"1st number:"<<num1<<endl;

   cout<<"2nd number:"<<num2<<endl;

   return 0;


}