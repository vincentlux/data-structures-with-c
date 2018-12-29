#include <stdio.h>

// Move number n plates from x to z with help of y
void move(int n, char x, char y, char z) 
{
    if ( 1 == n )
    {
        printf("%c-->%c\n", x, z);
    }
    else
    {
        move(n-1, x, z, y); // Move n-1 plates from x to y with help of z
        printf("%c-->%c\n", x, z); // Move plate n from x to z
        move(n-1, y, x, z); // Move n-1 plates from y to z with help of x
    }
}

int main()
{
    int n;

    printf("Enter number of plates: ");
    scanf("%d", &n);
    printf("Steps: \n");
    move(n, 'X', 'Y','Z');

    return 0;
}

