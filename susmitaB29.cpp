//w.a.c program to calculate the digits of a whole number//
 #include <stdio.h>
 int main()
 {
 	int digit,n,count=0;
 	printf ("Enter the whole number:");
	 scanf ("%d", &n);
	 while (n!=0)	{
	 	digit= n%10;
	 	printf("%d\n",digit);
	 	count++;
	 	n=n/10;
	 }
	 printf("counted digits are: %d",count);
	 return 0;
 }
