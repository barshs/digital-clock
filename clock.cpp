#include <stdio.h>
#include <time.h> //for sleep() function
#include <unistd.h>
#include <stdlib.h>
#include<conio.h>


int main()
{
int h,min,sec;
int i=0;

 for(h=0;h<=24;h++)
{
for(min=0;min<=60;min++)
{
for(sec=0;sec<=60;sec++)
{

printf("%d:%d:%d\t",h,min,sec);
if(h<12)
{
printf("AM\n");
}
else
{printf("PM\n");
}
sleep(1);
system("cls");
i=0;
}
sec=0;
}
min=0;
}
h=0;
}

