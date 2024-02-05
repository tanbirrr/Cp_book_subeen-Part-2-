#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int id;
        char name[50];
    };
    struct student one;
    one.id=7;
    strcpy(one.name,"Ronaldo the GOAT");
    
    printf("Id: %d\n",one.id);
    printf("Name: %s\n",one.name);
}