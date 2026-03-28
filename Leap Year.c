// C program
//Program to check for leap year
#include <stdio.h>
int main(){
    int  n;
    printf("Enter the year you want to check:");
    scanf("%d", &n);
    if ((n%4==0)||(n%400==0)){
        printf("The year entered is a leap year");
    }else{
        printf("The year entered is not a leap year");
    }
}
