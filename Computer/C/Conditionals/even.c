#include <stdio.h>

int main(void)
{

int n;
printf("Enter your number:\n");
scanf("%d", &n);

// Calculation Part

int r;
r=n%2;


if(r==0)
{

printf("The number is even\n");

}
else
{

printf("The number is odd\n");

}


return 0;
}
