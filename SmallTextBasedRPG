#include <stdio.h>
int main()
{
    //Values and variables over here
int Health = 100;
int WoodenSwordDamage = 50;
int EnnemyHealth = 50;
char playerplay = '\0';
int playerattack = 0;

//prompt here

printf("Hello, welcome to this text based rpg! \n");
printf("Do you wish to play? (y/n): ");
scanf("%c", &playerplay);

switch(playerplay){
    case 'y':
    printf("An ennemy approaches you, do you wish to attack it? (1/0): ");
    scanf("%d", &playerattack);
    if(playerattack == 1){
        printf("The ennemy is dead!");
    }
    else if(playerattack == 0){
        printf("The ennemy killed you!");
    }
    else{
        printf("Please enter a valid choice.");
    }
    break;
    case 'n':
    printf("okay, come back when you want to play!");
    break;
default:
printf("Please enter a valid choice.");
}
}
