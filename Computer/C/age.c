#include <stdio.h>

int main(void) {


    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    
    if(age<0){
        printf("Invalid age\n");
    
    if(age<18){
        printf("You are a minor\n");
    }
    else if(age>=18 && age<65){
        printf("You are an adult\n");
    }
    else{
        printf("You are a senior citizen\n");
    }