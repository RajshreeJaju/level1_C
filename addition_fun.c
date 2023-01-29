#include<stdio.h>
void addition(){
    float a,b,c;
    printf("Please enter two numbers for performing addition\nEnter the first number for addition:");
    scanf("%f",&a);
    printf("Enter the second number for addition:");
    scanf("%f",&b);
    c=a+b;
    printf("The sum of given numbers is: %.3f",c);
    
}
int main(){
    addition();
    return 0;
    
} 
