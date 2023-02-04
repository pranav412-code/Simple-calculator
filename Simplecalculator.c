#include<stdio.h>


int main(){
    float x,y;
    char a;
    printf("Enter any operand to use: ");
    scanf("%c", &a);
    printf("\nEnter any two numbers: ");
    scanf("%f %f", &x,&y);
    switch(a){
        case '+':
         printf("%f", x+y);
         break;
        
        case '-':
         printf("%f", x-y);
         break;
        
        case '*':
         printf("%f", x*y);
         break;
        
        case '/':
         printf("%f", x/y);
         break;

        default:
         printf("\nInvalid input");
         break;
    }

    return 0;
}