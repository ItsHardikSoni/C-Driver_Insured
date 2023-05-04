// A company insures its drivers in the following cases: 
// If the driver is married. If the driver is unmarried, male &amp; above 30 years of age. 
// If the driver is unmarried, female &amp; above 25 years of age.
// They can be combined together using && and ||


#include<stdio.h>
#include<conio.h>
int main()
{
    char sex, ms;
    int age;
    printf("\n Enter Age, Sex, Marital Status : ");
    scanf("%d %c %c", &age, &sex, &ms);
    if ((ms == 'm') || (ms == 'u' && sex == 'm' && age > 30) || (ms == 'u' && sex == 'f' && age > 25))
        printf("Driver Should be Insured \n");
    else
        printf("Driver Should Not be Insured \n");
    return 0;
}
