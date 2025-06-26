#include<stdio.h>

void swap(int *x, int *y);

int main(){
  int x=3, y=5;
  swap(&x, &y);
  printf("x = %d, y = %d ", x, y);

  return 0;
}

void swap(int *x, int *y){
  int t = *x;
  *x = *y;
  *y = t;
}