#include<stdio.h>

void Indian();
void French();

int main () {

  char ch;
  printf("Are you indian(i) or french(f)");
  scanf("%c", &ch);

  if(ch == 'i'){
  Indian ();
   }
   else if (ch == 'f'){
    French ();
   }
   else{
    printf("Invalid Input \n");
   }
  return 0;
}

void Indian(){
  printf("Namaste \n");
}

void French(){
    printf("Bonjour \n");
}