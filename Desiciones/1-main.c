#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("Puedes votar \n");
    }
    else
    {
        printf("No puedes votar\n");
    }

    return 0;

}