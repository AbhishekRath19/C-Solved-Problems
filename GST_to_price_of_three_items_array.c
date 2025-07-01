#include<stdio.h>

int main(){
  float items [3];

  printf("Enter price of item 1 : ");
  scanf("%f", &items[0]);

  printf("Enter price of item 2 : ");
  scanf("%f", &items[1]);

  printf("Enter price of item 3 : ");
  scanf("%f", &items[2]);

  float gst1 = items[0] + items[0] * 0.18;
  float gst2 = items[1] + items[1] * 0.18;
  float gst3 = items[2] + items[2] * 0.18;


  printf("price of item 1 = %f \n, price of item 2 = %f \n, price of item 3 = %f \n", gst1, gst2, gst3);

  return 0;
}