#include<stdio.h>

int main() {
  int n;
  printf("Enter any number less than 10");
  scanf("%d", &n);

  if(n>=10 || n<0){
    printf("Invalid Input");
  } else{
    int fact=1;
    for(int i=1; i<=n; i++){
      fact = fact*i;
      printf("%d \n", fact);
    }
  }
  return 0;

}