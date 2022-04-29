#include <stdio.h>
#include <stdlib.h>

typedef struct bill
{
    char name[20];
    int items;
    char dish[20];
    int quantity[10];
} bill;

int main()
{
    system("cls");
    printf("\n\n================ Zaika Restro ================\n\n");
    printf("\t Generating Bill....\n\n");
    bill user;
    // Getting name
    printf("Enter customer's name : ");
    gets(user.name);
    // Getting number of items
    printf("\n");
    printf("Enter the number of items ordered : ");
    scanf("%d", &user.items);
    // getting dishes
    for (int i = 0; i < user.items; i++)
    {
        printf("\nEnter the name of %d item: ", i + 1);
        scanf("%s", user.dish[i]);
        printf("%s", user.dish[i]);
        printf("\n");
        printf("Enter the quantity of %d item: ", i + 1);
        scanf("%d", user.quantity[i]);
        printf("%d", user.quantity[i]);
    }
    return 0;
}