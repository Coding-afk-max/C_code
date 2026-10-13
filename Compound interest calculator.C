#include <stdio.h>
#include <math.h>
int main(){

    // These are the variables, dont touch

    double Principal = 0.0;
    double Rate = 0.0;
    int Years = 0;
    int TimesCompounded = 0;
    double total = 0.0;

    //Dont touch

    printf("Welcome to this supah dupah cool compound interest calculator!\n");
    printf("Enter the principal (P): ");
    scanf("%lf", &Principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &Rate);
    Rate = Rate / 100;

    printf("Enter the amount of years (t): ");
    scanf("%d", &Years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &TimesCompounded);

//This is the equation, do not touch. (kermit)

total = Principal * pow(1 + Rate / TimesCompounded, TimesCompounded * Years);

//This is the final prompt, do not touch i guess...
printf("After %d year/s, the total will be €%.2lf", Years, total);



return 0;
}
