//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){
  
  bool student, IdCard;

  cout<<"are you a student: ( 1 for true and 0 for false ): ";
  cin>>student;

  cout<<"do you have ID Card: ( 1 for true and 0 for false ): ";
  cin>>IdCard;

  //logical operations                                                       logical operators

  cout<<"Logical AND ( student && ID Card ): "<<(student&&IdCard)<<endl;     //Logical AND "&&"

  cout<<"Logical OR ( student && ID Card ): "<<(student||IdCard)<<endl;      //Logical OR "||"

  cout<<"Logical NOT ( !student ): "<<!student<<endl;                        //Logical NOT  "!"

  return 0;

}