#include <stdio.h>//global declaration

int main()//local declaration
{
    int num;//local variable
    
    printf("Enter a number: ");// printf() dislpays the formatted output
    scanf("%d",&num);// scanf() reads the formatted input and stores them
    printf("The number you entered is: ");// printf() dislpays the formatted output
    printf("%d\n",num);// printf() dislpays the formatted output
    return 0;
}
