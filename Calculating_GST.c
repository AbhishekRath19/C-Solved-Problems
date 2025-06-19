#include<stdio.h>

void GST(float value);

int main(){
  float value;
  printf("Enter the amount : \n");
  scanf("%f", &value);
  GST(value);

  return 0;
}

void GST(float value){
  value = value + 0.18*value;
  printf("Final amount with added GST is : %f \n", value);
}