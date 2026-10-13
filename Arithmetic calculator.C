#include <stdio.h>
int main()
{
char blehoperator = '\0';
double bleh1 = 0.0;
double bleh2 = 0.0;
double blehresult = 0.0;

printf("enter the first number: ");
scanf("%lf", &bleh1);

printf("Enter the operator please (+, -, /, *): ");
scanf(" %c", &blehoperator);

printf("Please enter the 2nd number!: ");
scanf("%lf", &bleh2);

switch(blehoperator){
    case '+':
    blehresult = bleh1 + bleh2;
    printf("Your result is %.5lf", blehresult);
    break;
    case '*':
    blehresult = bleh1 * bleh2;
    printf("Your result is %.5lf", blehresult);
    break;
    case '/':
    blehresult = bleh1 / bleh2;
    if(bleh2 == 0){
        printf("you cannot divide by 0");
    }
    else{
    printf("Your result is %.5lf", blehresult);
    }
    break;
    case '-':
    blehresult = bleh1 - bleh2;
    printf("Your result is %.5lf", blehresult);
    break;
    default:
    printf("Invalid operator.");


}
}
