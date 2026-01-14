//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR

#include<iostream> 

using namespace std; 
int main(){

  // to find area of circle
  const float pi=3.141;        //const keyword declarartion
  float radius;

  cout<<"enter radius of circle: ";
  cin>> radius;

  float CircleArea= (pi*radius*radius);             //calculation for area of circle
  cout<<"Area of Circle: "<<CircleArea<<endl;

  // to find area of triangle
  float baseOfTriangle, heightOfTriangle;
  cout<<"enter base of triangle: ";
  cin>>baseOfTriangle;

  cout<<"enter height of triangle: ";
  cin>>heightOfTriangle;

  float TriangleArea=(baseOfTriangle*heightOfTriangle)/2;          // calculation of area of triangle
  cout<<"Area of Triangle: "<<TriangleArea<<endl;

  // to find area of rectangle
  float lengthOfRectangle, widthOfRectangle;
  cout<<" enter length if rectangle: ";
  cin>>lengthOfRectangle;

  cout<<"enter width of rectangle: ";
  cin>>widthOfRectangle;

  float AreaOfRectangle=(lengthOfRectangle*widthOfRectangle);         // calculation of area of rectangle
  cout<<"Area of Rectangle: "<<AreaOfRectangle;

  return 0;


}