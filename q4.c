#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1st numbers: ");
    scanf("%d",&a);
    printf("Enter 2nd numbers: ");
    scanf("%d",&b);
    printf("Enter 3rd numbers: ");
    scanf("%d",&c);

    if (a < b) 
    {
    if (a < c) 
    {
    printf("Min number: %d\n", a);
    } 
    else 
    {
    printf("Min number: %d\n", c);
    }
    } 
    else {
        if (b < c) 
    {
    printf("Min number: %d\n", b);
    } 
    else 
    {
    printf("Min number: %d\n", c);
    }
    }

    return 0;
}
