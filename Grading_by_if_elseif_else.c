#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks");
    scanf("%d", &marks);

    if(marks>90){
        printf("Grade A");
    }
    else if(marks<90 && marks>80){
        printf("Grade B");
    }
    else if(marks<80 && marks>70){
        printf("Grade C");
    }
    else{
        printf("Fail");
    }
    return 0;
}