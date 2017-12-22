#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d,m,y,x;
   printf("Enter the date in the format: day month year\n");
   scanf("%d %d %d",&d,&m,&y); /* Read the entered date */
   a=(14-m)/12;
   b=y-a;
   c=m+12*a-2;
   x=(7000+d+b+b/4-b/100+b/400+(31*c)/12) % 7; /* Calculating the day of the week using formula */
   switch(x) /* Determining the day of the week based on the value of 'x' */
   {
   case 0:
      printf("Sunday");
      break;
   case 1:
      printf("Monday");
      break;
   case 2:
      printf("Tuesday");
      break;
   case 3:
      printf("Wednesday");
      break;
   case 4:
      printf("Thursday");
      break;
   case 5:
      printf("Friday");
      break;
   default:
      printf("Saturday");
      
   }
   return 0;
}
