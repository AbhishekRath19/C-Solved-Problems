#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a, float b);

int main(){
  float a;
  printf("Enter length of a : ");
  scanf("%f", &a);

  float b;
  printf("Enter length of b : ");
  scanf("%f", &b);


  printf("Area of rectangle is : %f\n", rectanglearea(a, b));
  printf("Area of square is : %f\n", squarearea(a));
  printf("Area of circle is : %f\n", circlearea(a));

}

float squarearea(float side){
  return side*side;
}
float circlearea(float radius){
  return 3.14*radius*radius;
}
float rectanglearea(float a, float b){
  return a*b;
}