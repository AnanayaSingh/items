#include <stdio.h>

int main()
{
    printf("Pick a food item : \n1. Pizza\n2. Burger\n3. Butter-Chicken\n4. Pastry\n5. Sandwich\n");
int items;
scanf("%d", &items);
switch(items)
{
    case 1: 
       printf("You have chosen Pizza\n and It's price is Rs-239");
       break;
    case 2: 
       printf("You have chosen Burger\n and It's price is Rs-129");
       break;
    case 3: 
       printf("You have chosen Butter-Chicken\n and It's price is Rs-179");
       break;
    case 4: 
       printf("You have chosen Pastry\n and It's price is Rs-99");
       break;
    case 5: 
       printf("You have chosen Sandwich\n and It's price is Rs-149");
       break;
    default:
       printf("Invalid Choice");
}
return 0;
}
