#include<stdio.h>
#include<conio.h>

main()
{
    int a = 1,b,c;

    clrscr();

    printf("Enter your number: ");
    scanf("%d",&b);

    while(a<=10)
    {
	   c=a*b;
	   printf("%d * %d =%d\n",a++,b,c);
    }
    getch();
}

