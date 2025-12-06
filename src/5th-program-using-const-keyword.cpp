//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){
  const float pi=3.1415;           //constant variable = values cannot change
  float radius;

  cout<<"enter radius of circle: ";

  cin>>radius;

  float circlearea = pi*(radius*radius);        // calculation using const keyword

  cout<<"radius: "<<radius<<endl;

  cout<<"constant pi value: "<<pi<<endl;

  cout<<"area of circle: "<<circlearea<<endl;

  return 0;

}