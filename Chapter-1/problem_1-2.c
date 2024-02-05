#include<stdio.h>
int main()
{

    char small,capital;
    printf("please enter a small letter: ");
    small=getchar();
    capital=small-32;
    printf("the capital letter is: %c\n",capital);

    getchar();
}
