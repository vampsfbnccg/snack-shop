#include <stdio.h>
#include <stdlib.h>

void menu();
int main()
{
    printf("welcome to zetech C snack shop!\n");
    menu();
    return 0;
}

int menu()
{
    int item;
    printf("\tToday's Menu\n");
    printf("1. Hamburger - Ksh.50\n");
    printf("2. Samosa - Ksh.50\n");
    printf("3. Coffe - Ksh.40\n");
    printf("Enter Item Number: ");
    scanf("%d",&item);
    if(item > 0 && item<= 3) {
        printf("Item added to cart\n");
    }
    else{
        printf("invalid Item\n");
        menu();
    }
    return item;
}
