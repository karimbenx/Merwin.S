#include <stdio.h>
#include <conio.h>
int main()
{
int i;
int number = 0;
int remainderNum = 0;
int ResultSum = 0;
printf(" to check number is Perfect number or not in C using loop \n");
printf("Enter number of your choice \n");
scanf("%d", &number);
for(i = 1; i < number; i++)
{
remainderNum = number % i;
if (remainderNum == 0)
{
ResultSum = ResultSum + i;
}
}
if (ResultSum == number){
printf(" %d is an perfect number ", number);
} else {
printf("\n %d is not perfect number", number);
}
getch();
}
