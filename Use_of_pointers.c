#include<stdio.h>

int main(){

  int age;
  printf("Enter your age : ");
  scanf("%d", &age);

  int *present = &age;
 
  int futureage = age+10;

  int *future = &futureage;
  int **after10yrs = &future;

  printf("Your current age is : %d \n", *present);
  printf("Your age after 10yrs will be : %d \n", **after10yrs);

  return 0;
}