#include<stdio.h>
int main()
{
    char Name[20], Branch[30], Hobby[50];
    printf("Enter your name: \n");
    gets(Name);

    printf("Enter your branch: \n");
    gets(Branch);

    printf("Enter your hobbies: \n");
    gets(Hobby);

    int Regd;
    printf("Enter your registration number: \n");
    scanf("%d", &Regd);

    puts(Name);
    puts(Branch);
    puts(Hobby);
    printf(Regd);
    return 0;
}
